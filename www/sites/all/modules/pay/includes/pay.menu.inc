<?php // $Id$

/**
 * @file
 * Menu callbacks and supporting functinos for the Payment API.
 */

/**
 * Implementation of hook_menu().
 */
function pay_menu_menu() {
  return array(
    'admin/settings/pay' => array(
      'title' => 'Payment settings',
      'page callback' => 'pay_admin_overview',
      'access arguments' => array('administer pay'),
      'file' => 'pay.admin.inc',
      'file path' => drupal_get_path('module', 'pay') .'/includes',
      'description' => 'Configure payment methods and administer payment settings.',
    ),
    'admin/settings/pay/overview' => array(
      'title' => 'Overview',
      'type' => MENU_DEFAULT_LOCAL_TASK,
      'weight' => -10,
    ),
    'admin/settings/pay/add' => array(
      'title' => 'Add a payment method',
      'page callback' => 'drupal_get_form',
      'page arguments' => array('pay_admin_method_form'),
      'access arguments' => array('administer pay'),
      'file' => 'pay.admin.inc',
      'file path' => drupal_get_path('module', 'pay') .'/includes',
      'type' => MENU_LOCAL_TASK,
    ),
    'admin/settings/pay/%pay_method/edit' => array(
      'title' => 'Edit payment method',
      'page callback' => 'drupal_get_form',
      'page arguments' => array('pay_admin_method_form', 3),
      'access arguments' => array('administer pay'),
      'file' => 'pay.admin.inc',
      'file path' => drupal_get_path('module', 'pay') .'/includes',
    ),
    'pay/transaction/%pay_transaction' => array(
      'title' => 'Transaction details',
      'page callback' => 'theme',
      'page arguments' => array('pay_transaction', 2),
      'access arguments' => array('administer payments for any form'),
    ),
    'pay/transaction/%pay_transaction/%' => array(
      'title callback' => 'pay_transaction_action_title',
      'title arguments' => array(2, 3),
      'page callback' => 'pay_transaction_do_action',
      'page arguments' => array(2, 3, TRUE),
      'access callback' => 'pay_transaction_valid_action',
      'access arguments' => array(2, 3),
    ),
    'pay/gateway/response/%pay_activity' => array(
      'title' => 'Transaction activity response',
      'page callback' => 'pay_gateway_response',
      'page arguments' => array(3),
      'access arguments' => array('access content'),
    ),
    'user/%user_category/edit/pay' => array(
      'title' => 'Payment settings',
      'page callback' => 'pay_user_settings_page',
      'page arguments' => array(1),
      'access callback' => 'pay_user_settings_access',
      'access arguments' => array(1),
      'load arguments' => array('%map', '%index'),
      'type' => MENU_LOCAL_TASK,
      'weight' => 20,
    ),
  );
}
