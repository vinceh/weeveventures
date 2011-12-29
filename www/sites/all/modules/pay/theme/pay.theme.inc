<?php // $Id$

/**
 * @file
 * Theme hooks and callbacks for the Payment API.
 */

/**
 * Implementation of hook_theme().
 */
function pay_theme_theme() {
  $path = drupal_get_path('module', 'pay') .'/theme';

  return array(
    // The all-purpose form renderer for payment forms.
    'pay_form' => array(
      'arguments' => array('form' => array()),
      'template' => 'pay_form',
      'pattern' => 'pay_form__',
      'path' => $path,
    ),
    'pay_form_default' => array(
      'arguments' => array('pay_form' => array()),
      'file' => 'pay.theme.inc',
      'path' => $path,
    ),
    'pay_form_amount' => array(
      'arguments' => array('pay_form' => array()),
      'template' => 'pay_form_amount',
      'pattern' => 'pay_form_amount__',
      'file' => 'pay.theme.inc',
      'path' => $path,
    ),
    'pay_form_link' => array(
      'arguments' => array('pay_form' => array()),
      'file' => 'pay.theme.inc',
      'path' => $path,
    ),
    'pay_transaction' => array(
      'arguments' => array('pay_transaction' => array()),
      'template' => 'pay_transaction',
      'pattern' => 'pay_transaction__',
      'file' => 'pay.theme.inc',
      'path' => $path,
    ),
    'pay_cc_form' => array(
      'arguments' => array('element' => array()),
      'template' => 'pay_cc_form',
      'pattern' => 'pay_cc_form__',
      'file' => 'pay.theme.inc',
      'path' => $path,
    ),
    'pay_money' => array(
      'arguments' => array('value' => 0, 'currency' => 'USD'),
      'file' => 'pay.theme.inc',
      'path' => $path,
    ),
    'pay_activity_list' => array(
      'arguments' => array('activity' => array()),
    )
  );
}

/**
 * Theme function for default form displays.
 */
function theme_pay_form_default($pay_form) {
  return drupal_get_form('pay_form', $pay_form);
}

/**
 * Theme function for links to payment forms.
 */
function theme_pay_form_link($pay_form, $text = 'Make a payment') {
  if ($path = $pay_form->menu_path()) {
    $link = array(
      'title' => $text,
      'href' => $path,
    );
    return l($link['title'], $link['href'], $link);
  }
}

/**
 * A preprocess function for theme('pay_transaction').
 *
 * The $variables array initially contains the following arguments:
 *
 */
function template_preprocess_pay_transaction(&$variables) {
  $pay_transaction = $variables['pay_transaction'];
  $variables['pay_form'] = pay_form_load($pay_transaction->pfid);

  $variables['date'] = format_date($pay_transaction->created, 'small');
  $variables['user'] = user_load($pay_transaction->uid);
  $variables['notes'] = $pay_transaction->notes();
  $variables['id'] = $pay_transaction->pxid;

  if ($actions = $pay_transaction->available_actions()) {
    $links = array();
    foreach ($actions as $name => $info) {
      $href = 'pay/transaction/' . $pay_transaction->pxid . '/' . $name;
      $links[$name] = array('href' => $href, 'title' => t($info['title']));
    }
    $variables['actions'] = theme_links($links, array('class' => 'pay-transaction-links'));
  }

  if ($activity = $pay_transaction->activity()) {
    $variables['activity'] = theme('pay_activity_list', $activity);
  }
}

/**
 * A preprocess function for theme('pay_cc_form').
 *
 * The $variables array initially contains the following arguments:
 *
 */
function template_preprocess_pay_cc_form(&$variables) {
  static $first_time = TRUE;

  $variables['pay'] = array();

  if ($variables['element']['cc_type']) {
    $path = drupal_get_path('module', 'pay') . '/theme/images/';
    foreach ($variables['element']['cc_type']['#options'] as $card => $label) {
      $variables['element']['cc_type'][$card]['#title'] = theme('image', $path. $card .'.png', $label);
    }
  }

  // Elements that will be specifically included by the theme template.
  $expected = array(
    'cc_type',
    'first_name',
    'last_name',
    'mail',
    'billto',
    'cc_number',
    'cc_ccv2',
    'cc_exp_month',
    'cc_exp_year',
  );

  $variables['pay']['prefix'] = $variables['pay']['suffix'] = array();
  foreach (element_children($variables['element']) as $item) {
    if (in_array($item, $expected)) {
      $variables['pay'][$item] = drupal_render($variables['element'][$item]);
      $printed = TRUE;
    }
    else {
      // Add unrecognized items to either the 'prefix' or 'suffix' array.
      // If we've seen any 'expected' elements, use suffix: else use prefix.
      $key = $printed ? 'suffix' : 'prefix';
      $variables['pay'][$key][] = drupal_render($variables['element'][$item]);
    }
  }

  if ($first_time) {
    $variables['setup'] = $first_time;
    $first_time = FALSE;  }
  else {
    $variables['setup'] = FALSE;
  }

  $variables['pay_form'] = join('', $variables['pay']);
}

/**
 * Theme function for default money format.
 */
function theme_pay_activity_list($activity_list) {

  $hdrs = array(
    t('Date'),
    t('User'),
    t('Method'),
    t('Total'),
    t('Balance'),
    t('Comment'),
  );

  $rows = array();
  foreach ($activity_list as $activity) {
    $account = $activity->user();
    $currency = $activity->pay_transaction()->currency;

    if ($activity->result) {
      $comment = t('Success');
    }
    else {
      $comment = t('Failed');
    }

    $row = array(
      format_date($activity->timestamp, 'small'),
      $account->uid ? l($account->name, 'user/'. $account->uid) : '-',
      $activity->pay_method()->title(),
      theme('pay_money', $activity->total, $currency),
      theme('pay_money', $activity->balance(), $currency),
      $comment,
    );

    $rows[] = $row;
  }
  return theme('table', $hdrs, $rows);
}

/**
 * Theme function for default money format.
 */
function theme_pay_money($value, $currency) {
  //@todo: Add some logic for handling currencies?
  if ($currency == 'USD' || (!$currency)) {
    $symbol = '$';
  }
  return $symbol . (float) $value;
}
