<?php

/**
 * @file
 */

class pay_method_gateway_paypal extends pay_method_gateway {
  var $paypal_username = '';
  var $paypal_password = '';
  var $paypal_signature = '';
  var $paypal_sandbox = '';

  var $gateway_supports_ach = TRUE;
  var $gateway_supports_cc = TRUE;
  var $gateway_supports_recurring = TRUE;

  /**
   * A list of all currencies supported by PayPal.
   */
  function available_currencies() {
    return paypal_currencies();
  }

  function payment_types($filter = NULL) {
    $payment_types = parent::payment_types($filter);
    $payment_types['express_checkout'] = t('PayPal Express Checkout');

    if ($filter) {
      foreach ($payment_types as $key => $label) {
        if (!$filter[$key]) unset($payment_types[$key]);
      }
    }

    return $payment_types;
  }

  function gateway_url() {
    $url = 'https://api-3t.paypal.com/nvp';
    if ($this->paypal_sandbox) {
      $url = 'https://api-3t.sandbox.paypal.com/nvp';
    }
    return $url;
  }

  function gateway_request() {
    // Set the transaction type based on requested activity.
    if (!$txntype = $this->paypal_trxtype($this->activity->activity)) {
      drupal_set_message("Payment activity '$this->activity->activity' is unsupp
orted. Not processing transaction", 'error');
      return FALSE;
    }

    $req = '';
    foreach ($this->gateway_request_values($txntype) as $key => $val) {
      if ($val = trim($val)) $req .= check_plain($key) .'='. urlencode($val) .'&';
    }
    return $req;
  }

  function gateway_response($result = NULL) {
    if (is_null($result)) {
      $result = $_GET;
    }
    $result = urldecode($result);
    $response_string = explode('&', ($result));
    $response = array();
    foreach($response_string as $key => $param) {
      list($key, $value) = explode('=', $param);
      $r[$key] = $value;
    }

    // Save the transaction ID for tracking and/or future operations.
    $this->activity->identifier = $r['TRANSACTIONID'];
    // TODO: need to figure this out

    $response_code = $r['ACK'];

    $this->activity->data = array(
      'response_string' => $r['ACK'],
      'approval_code'   => $r['TRANSACTIONID'],
      'avs_response'    => $r['AVSCODE'],
      'caav_response'   => $r['CVV2MATCH'],
      'transaction_total' => $r['AMT'],
    );
    if ($response_code <> 'Success') {
      watchdog('payment', "Error processing payment: PayPal gateway returned '@err'", array('@err' => $this->activity->data['response_string']));
      drupal_set_message("Error processing payment: PayPal gateway returned'". $this->activity->data['response_string']. "'");
    }

    return ($response_code == 'Success');
  }

  function settings_form(&$form, &$form_state) {
    parent::settings_form($form, $form_state);
    $group = $this->handler();

    $form[$group]['pp']['#type'] = 'fieldset';
    $form[$group]['pp']['#collapsible'] = FALSE;
    $form[$group]['pp']['#title'] = t('PayPal Website Payments Pro settings');
    $form[$group]['pp']['#group'] = $group;

    $form[$group]['pp']['paypal_username'] = array(
      '#type' => 'textfield',
      '#title' => t('PayPal API Username'),
      '#default_value' => $this->paypal_username,
      '#required' => TRUE,
      '#parents' => array($group, 'paypal_username'),
    );
    $form[$group]['pp']['paypal_password'] = array(
      '#type' => 'textfield',
      '#title' => t('PayPal API password'),
      '#default_value' => $this->paypal_password,
      '#required' => TRUE,
      '#parents' => array($group, 'paypal_password'),
    );
    $form[$group]['pp']['paypal_signature'] = array(
      '#type' => 'textfield',
      '#title' => t('PayPal API signature'),
      '#default_value' => $this->paypal_signature,
      '#required' => TRUE,
      '#parents' => array($group, 'paypal_signature'),
    );
    $form[$group]['pp']['paypal_sandbox'] = array(
      '#type' => 'checkbox',
      '#title' => t('This is a sandbox test account'),
      '#description' => t('You can obtain a developer test account from https://www.x.com (The PayPal Develper Network) and use those credentials for development and testing. If the above values belong to a developer test account and not a real merchant account, check this box.'),
      '#default_value' => $this->paypal_sandbox,
      '#parents' => array($group, 'paypal_sandbox'),
    );
  }

  function paypal_trxtype($activity) {
    $trxtypes = array(
      'complete'  => 'Sale',
      'authorize' => 'Authorization',
    );
    return $trxtypes[$activity];
  }

  // TODO
  function gateway_request_values($txntype) {
    $data = array(
      'METHOD'            => 'DoDirectPayment',
      'PAYMENTACTION'     => $txntype,
      'VERSION'           => '56.0',
      'USER'              => $this->paypal_username,
      'PWD'               => $this->paypal_password,
      'SIGNATURE'         => $this->paypal_signature,
      'AMT'               => $this->total(),
      'CREDITCARDTYPE'    => $this->cc_type,
      'ACCT'              => $this->cc_number,
      'EXPDATE'           => $this->cc_expiration(),
      'CVV2'              => $this->cc_ccv2,
      'INVNUM'            => $this->activity->pxid,
      'FIRSTNAME'         => $this->first_name,
      'LASTNAME'          => $this->last_name,
      'STREET'            => $this->billto['street1'],
      'CITY'              => $this->billto['city'],
      'STATE'             => $this->billto['state'],
      'ZIP'               => $this->billto['zip'],
      'COUNTRYCODE'       => $this->billto['country'],
      'DESC'              => $this->note,
      'PHONENUM'          => $this->billto['phone'],
      'EMAIL'             => $this->mail,
      'IPADDRESS'         => ip_address(),
    );

    if ($this->gateway_testmode) {
    }

    return $data;
  }

  function cc_expiration() {
    if ($this->cc_exp_month && $this->cc_exp_year) {
      $exp = str_pad( (int) $this->cc_exp_month, 2, '0', STR_PAD_LEFT);
      //TODO: Fix this by the year 2099
      $exp .= 20 . str_pad( (int) $this->cc_exp_year, 2, '0', STR_PAD_LEFT);
      return $exp;
    }
  }
}
