<?php

/**
 * Validate whether an argument is a valid user.
 *
 * This supports either numeric arguments (UID) or strings (username) and
 * converts either one into the user's UID.  This validator also sets the
 * argument's title to the username.
 */
class views_plugin_argument_validate_user extends views_plugin_argument_validate {
  function option_definition() {
    $options = parent::option_definition();
    $options['type'] = array('default' => 'uid');
    $options['restrict_roles'] = array('default' => FALSE);
    $options['roles'] = array('default' => array());

    return $options;
  }

  function options_form(&$form, &$form_state) {
    $form['type'] = array(
      '#type' => 'radios',
      '#title' => t('Type of user argument to allow'),
      '#options' => array(
        'uid' => t('Only allow numeric UIDs'),
        'name' => t('Only allow string usernames'),
        'either' => t('Allow both numeric UIDs and string usernames'),
      ),
      '#default_value' => $this->options['type'],
    );

    $form['restrict_roles'] = array(
      '#type' => 'checkbox',
      '#title' => t('Restrict user based on role'),
      '#default_value' => $this->options['restrict_roles'],
    );

    $form['roles'] = array(
      '#type' => 'checkboxes',
      '#prefix' => '<div id="edit-options-argument-validate-user-roles-wrapper">',
      '#suffix' => '</div>',
      '#title' => t('Restrict to the selected roles'),
      '#options' => user_roles(TRUE),
      '#default_value' => $this->options['roles'],
      '#description' => t('If no roles are selected, users from any role will be allowed.'),
      '#process' => array('expand_checkboxes', 'views_process_dependency'),
      '#dependency' => array(
        'edit-options-argument-validate-user-restrict-roles' => array(1),
      ),
    );
  }

  function options_submit($form, &$form_state, &$options) {
    // filter trash out of the options so we don't store giant unnecessary arrays
    $options['roles'] = array_filter($options['roles']);
  }

  function convert_options(&$options) {
    if (!isset($options['type']) && isset($this->argument->options['validate_user_argument_type'])) {
      $options['type'] = $this->argument->options['validate_user_argument_type'];
      $options['restrict_roles'] = $this->argument->options['validate_user_restrict_roles'];
      $options['roles'] = $this->argument->options['validate_user_roles'];
    }
  }

  function validate_argument($argument) {
    $type = $this->options['type'];
    // is_numeric() can return false positives, so we ensure it's an integer.
    // However, is_integer() will always fail, since $argument is a string.
    if (is_numeric($argument) && $argument == (int)$argument) {
      if ($type == 'uid' || $type == 'either') {
        if ($argument == $GLOBALS['user']->uid) {
          // If you assign an object to a variable in PHP, the variable
          // automatically acts as a reference, not a copy, so we use
          // drupal_clone() to ensure that we don't actually mess with the
          // real global $user object.
          $account = drupal_clone($GLOBALS['user']);
        }
        $where = 'uid = %d';
      }
    }
    else {
      if ($type == 'name' || $type == 'either') {
        if ($argument == $GLOBALS['user']->name) {
          $account = drupal_clone($GLOBALS['user']);
        }
        $where = "name = '%s'";
      }
    }

    // If we don't have a WHERE clause, the argument is invalid.
    if (empty($where)) {
      return FALSE;
    }

    if (!isset($account)) {
      $query = "SELECT uid, name FROM {users} WHERE $where";
      $account = db_fetch_object(db_query($query, $argument));
    }
    if (empty($account)) {
      // User not found.
      return FALSE;
    }

    // See if we're filtering users based on roles.
    if (!empty($this->options['restrict_roles']) && !empty($this->options['roles'])) {
      $roles = $this->options['roles'];
      $account->roles = array();
      $account->roles[] = $account->uid ? DRUPAL_AUTHENTICATED_RID : DRUPAL_ANONYMOUS_RID;
      $result = db_query('SELECT rid FROM {users_roles} WHERE uid = %d', $account->uid);
      while ($role = db_fetch_object($result)) {
        $account->roles[] = $role->rid;
      }
      if (!(bool) array_intersect($account->roles, $roles)) {
        return FALSE;
      }
    }

    $this->argument->argument = $account->uid;
    $this->argument->validated_title = isset($account->name) ? check_plain($account->name) : check_plain(variable_get('anonymous', t('Anonymous')));
    return TRUE;
  }
}

