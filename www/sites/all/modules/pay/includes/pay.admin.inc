<?php // $Id$

/**
 * @file
 * Administration form settings and related functions.
 */

/**
 * Payment settings overview.
 */
function pay_admin_overview() {
  $output = '';

  $output .= drupal_get_form('pay_admin_settings');

  $hdrs = array(t('Label'), t('Handler'), t('Operations'));
  $info = pay_handlers('pay_method');
  foreach (pay_form_load()->pay_method_list() as $pmid => $pay_method) {
    if (!$pay_method = pay_method_load($pmid)) continue;
    $rows[] = array(
      $pay_method->title(),
      $info[$pay_method->handler()]['title'],
      l(t('edit'), 'admin/settings/pay/'. $pmid .'/edit'),
    );
  }
  if ($rows) {
    $output .= '<h3>' . t('Payment methods') . '</h3>';
    $output .= theme('table', $hdrs, $rows);
  }
  else {
    drupal_set_message(t('You need at least one payment method before you can accept payments on your site. You can add a payment method !add_url.', array('!add_url' => l(t('here'), 'admin/settings/pay/add'))), 'warning');
  }
  return $output;
}

/**
 * Overall settings form for global payment options.
 */
function pay_admin_settings(&$form_state) {
  $list = array('' => t('Please select'));
  $list += pay_currency_list();

  $form = array();

  // Don't allow this to be changed if it has already been used and we don't
  // support multi-currency.  This would cause some forms and transactions
  // to have a different currency than others without support for conversion.
  $disabled = FALSE;
  if (!variable_get('pay_currency_multiple', FALSE)) {
    $disabled = $disabled || db_result(db_query("SELECT count(1)
      FROM {pay_transaction} WHERE currency IS NOT NULL AND currency != ''"));
  }

  $form['pay_currency'] = array(
    '#type' => 'select',
    '#title' => t('Currency'),
    '#description' => t('The default currency for all payment activities on this site. This cannot be changed once transactions have been created.'),
    '#options' => $list,
    '#required' => TRUE,
    '#default_value' => variable_get('pay_currency', NULL),
    '#disabled' => $disabled,
  );

  // system_settings_form trounces the default submit handler, so define one.
  $form['#submit'] = array('pay_admin_settings_submit');
  return system_settings_form($form);
}

/**
 * Submit handler for settings form.
 */
function pay_admin_settings_submit($form, &$form_state) {
  // No variable has been set yet, so this is the first time setting this value.
  // Set this default value on all pay_forms and pay_transactions.
  $currency = $form_state['values']['pay_currency'];
  if (!$count = db_result(db_query("SELECT count(1)
    FROM {pay_transaction}
    WHERE currency IS NOT NULL AND currency NOT IN ('', '%s')", $currency))) {

    db_query("UPDATE {pay_form} SET currency = '%s'", $currency);
    db_query("UPDATE {pay_transaction} SET currency = '%s'", $currency);
  }
}

/**
 * List payment forms
 */
function pay_admin_pay_form_list($handler = NULL, $uid = NULL) {

  $hdrs = array(
    array('data' => t('Title'), 'field' => 'Title'),
    array('data' => t('Owner'), 'field' => 'uid'),
    array('data' => t('Handler'), 'field' => 'handler'),
    array('data' => t('Status'), 'field' => 'status'),
    array('data' => t('Total'), 'field' => 'total'),
    array('data' => t('Total paid'), 'field' => 'total_paid'),
    array(),
  );

  $sql = 'SELECT f.*, SUM(t.total) AS total, SUM(t.total_paid) AS total_paid
    FROM {pay_form} f
    LEFT JOIN {pay_transaction} t USING ( pfid ) ';

  if ($handler) {
    $subclasses = array();
    foreach (pay_handlers('pay_form') as $name => $info) {
      if ($pay_form = pay_form_load($name)) {
        if (is_subclass_of($pay_form, $handler)) {
          $subclasses[] = $name;
        }
      }
    }
    if ($subclasses) {
      $subclasses[] = $handler;
      $subclasses = "'" . join("', '", $subclasses) ."'";
      $sql .= " WHERE f.handler IN (". $subclasses .")";
    }
    else {
      $sql .= " WHERE f.handler = '". check_plain($handler) ."'";
    }
    unset($hdrs[2]);
  }

  $sql .= ' GROUP BY f.pfid';

  $res = pager_query($sql . tablesort_sql($hdrs), 20, 0, NULL);
  $path = $_GET['q'];
  $rows = array();
  $pay_forms = array();
  while ($data = db_fetch_object($res)) {
    $pay_form = pay_form_load($data);
    $row = array(
      $pay_form->menu_path() ? l($pay_form->title(), $pay_form->menu_path()) : $pay_form->title(),
      theme('username', $pay_form->user()),
      $pay_form->handler_title(),
      $pay_form->status ? t('active') : t('disabled'),
      round($data->total),
      round($data->total_paid),
      l(t('edit'), $path .'/'. $pay_form->pfid .'/edit', array('query' => 'destination='. $path)),
    );
    if ($handler) unset($row[2]);
    $rows[] = $row;
  }
  if (empty($rows)) $rows[] = array();

  return theme('table', $hdrs, $rows);
}

/**
 * Admin form to create or update payment methods.
 */
function pay_admin_method_form(&$form_state, $pay_method = NULL) {
  if (isset($form_state['storage']['pay_method'])) {
    $pay_method = $form_state['storage']['pay_method'];
  }
  if ($pay_method) {
    $form = array();
    if (!is_object($pay_method)) $pay_method = pay_method_load($pay_method);
    $pay_method->settings_form($form, $form_state);
    $pmid = isset($pay_method->pmid) ? $pay_method->pmid : get_class($pay_method);
    $form['#pay_method'] = $pmid;
  }
  else {
    $form['pay_method'] = array(
      '#type' => 'radios',
      '#title' => t('Payment handler'),
    );
    foreach (pay_handlers('pay_method') as $name => $info) {
      if (!$info['title']) continue; // Exclude unnamed base classes.
      $form['pay_method'][$name] = array(
        '#type' => 'radio',
        '#name' => 'pay_method',
        '#title' => $info['title'],
        '#description' => $info['description'],
        '#return_value' => $name,
      );
    }
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save values'),
  );

  // Vertical tab-ify this form if vertical_tabs module is installed.
  $form['#pre_render'][] = 'vertical_tabs_form_pre_render';
  return $form;
}

/**
 * Submit handler for pay_method_settings.
 */
function pay_admin_method_form_submit($form, &$form_state) {
  if (!$form['#pay_method']) {
    if ($form_state['values']['pay_method']) {
      if (!count($form_state['storage'])) {
        $form_state['storage'] = $form_state['values'];
        $form_state['rebuild'] = TRUE;
        return;
      }
    }
  }
  else {
    $form_state['redirect'] = 'admin/settings/pay';
    unset($form_state['rebuild'], $form_state['storage']);
  }
}

function pay_form_settings(&$form_state, $pay_form, $destination = NULL) {
  if (!is_object($pay_form)) $pay_form = pay_form_load($pay_form);

  $pay_form->settings_form($form, $form_state);

  // Allow destination to be specified in hook_menu().
  if (isset($destination)) {
    $form['destination'] = array(
      '#type' => 'hidden',
      '#value' => $destination,
    );
  }
  return $form;
}
