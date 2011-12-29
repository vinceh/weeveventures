<?php

/**
 * @file
 */

class pay_method_direct_paypal extends pay_method_direct {
  var $paypal_account = '';
  var $paypal_sandbox = '';

  // Always assume this is a 'paypal' payment, since we won't get more specific.
  var $payment_type = 'paypal';

  /**
   * A list of all currencies supported by PayPal.
   */
  function available_currencies() {
    return paypal_currencies();
  }

  function direct_request() {
    $host = $this->paypal_sandbox ? 'www.sandbox' : 'www';
    $host = 'https://' . $host . '.paypal.com/cgi-bin/webscr';

    // Map pay actions to PayPal paymentaction types.
    $txntypes = array(
      'complete'  => 'sale',
      'authorize' => 'authorization',
    );

    // Set the transaction type based on requested activity.
    if (!$txntype = $txntypes[$this->activity->action]) {
      drupal_set_message(t("Payment activity '!action' is unsupported. Not processing transaction", array('!action' => $this->activity->action)), 'error');
      return FALSE;
    }

    $data = array(
      'cmd'           => '_xclick',
      'paymentaction' => $txntype,
      'business'      => $this->paypal_account,
      'charset'       => 'utf-8',
      'amount'        => $this->total,
      'first_name'    => $this->first_name,
      'last_name'     => $this->last_name,
      'address1'      => $this->billto['street1'],
      'address2'      => $this->billto['street2'],
      'city'          => $this->billto['city'],
      'state'         => $this->billto['state'],
      'zip'           => $this->billto['zip'],
      'country'       => isset($this->billto['country']) ? $this->billto['country'] : 'us',
      'currencycode'  => $this->activity->currency(),
      //'DESC' => $this->note,
      'INVNUM' => $this->pxid,
      //'BUTTONSOURCE' => 'Ubercart_ShoppingCart_DP_US',
      'notify_url'    => url('pay/gateway/response/'. $this->activity->paid, array('absolute' => TRUE)),
      'email'         => $this->mail,
      //'PHONENUM' => $this->billto['phone'],
    );

    $req = '';
    foreach ($data as $key => $val) {
      if ($val = trim($val)) $req .= check_plain($key) .'='. urlencode($val) .'&';
    }
    return $host . '?' . $req;
  }

  function direct_response($response = array()) {
    $this->activity->result = FALSE;

    switch ($response['payment_status']) {
      case 'Canceled_Reversal':
      case 'Created':
      case 'Denied':
      case 'Expired':
      case 'Failed':
      case 'Refunded':
      case 'Reversed':
      case 'Voided':
        // TODO could probably expand these better.
        $this->activity->result = FALSE;
        break;

      case 'Pending':
        if ($this->activity->action == 'authorize') {
          if ($response['pending_reason'] == 'authorization') {
            $this->activity->result = TRUE;
          }
        }
        break;

      case 'Processed':
      case 'Completed':
        $this->activity->result = TRUE;
        $this->activity->action = 'complete';
        $this->activity->transaction_total = $response['mc_gross'];
        break;
    }

    $this->activity->total = $response['mc_gross'];
    $this->activity->identifier = $response['txn_id'];
    $this->activity->data[] = $response;

    return $this->activity->result;
  }

  function settings_form(&$form, &$form_state) {
    parent::settings_form($form, $form_state);
    $group = $this->handler();

    $form[$group]['pp']['#type'] = 'fieldset';
    $form[$group]['pp']['#collapsible'] = FALSE;
    $form[$group]['pp']['#title'] = t('PayPal Website Payments Standard settings');
    $form[$group]['pp']['#group'] = $group;

    $form[$group]['pp']['paypal_account'] = array(
      '#type' => 'textfield',
      '#title' => t('PayPal Account e-mail address'),
      '#default_value' => $this->paypal_account,
      '#required' => TRUE,
      '#parents' => array($group, 'paypal_account'),
    );
    $form[$group]['pp']['paypal_sandbox'] = array(
      '#type' => 'checkbox',
      '#title' => t('This is a sandbox test account'),
      '#description' => t('You can obtain a developer test account from https://www.x.com (The PayPal Develper Network) and use those credentials for development and testing. If the above values belong to a developer test account and not a real merchant account, check this box.'),
      '#default_value' => $this->paypal_sandbox,
      '#parents' => array($group, 'paypal_sandbox'),
    );
  }
}
