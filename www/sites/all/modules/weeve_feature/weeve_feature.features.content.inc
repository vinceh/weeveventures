<?php

/**
 * Implementation of hook_content_default_fields().
 */
function weeve_feature_content_default_fields() {
  $fields = array();

  // Exported field: field_account_type
  $fields['profile-field_account_type'] = array(
    'field_name' => 'field_account_type',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'user|User
npo|NPO
corp|Corporate',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Account type',
      'weight' => '3',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_location
  $fields['profile-field_location'] = array(
    'field_name' => 'field_location',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_location][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Location',
      'weight' => '34',
      'description' => '',
      'type' => 'weeve_google_places_autocomplete',
      'module' => 'weeve_google_places',
    ),
  );

  // Exported field: field_npo_about
  $fields['profile-field_npo_about'] = array(
    'field_name' => 'field_npo_about',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_npo_about][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'About',
      'weight' => '33',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_npo_bio
  $fields['profile-field_npo_bio'] = array(
    'field_name' => 'field_npo_bio',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '300',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_npo_bio][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Bio',
      'weight' => '32',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_npo_code
  $fields['profile-field_npo_code'] = array(
    'field_name' => 'field_npo_code',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_npo_code][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Business Code',
      'weight' => '6',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_npo_name
  $fields['profile-field_npo_name'] = array(
    'field_name' => 'field_npo_name',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_npo_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Organization Name',
      'weight' => '5',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_npo_number
  $fields['profile-field_npo_number'] = array(
    'field_name' => 'field_npo_number',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_npo_number][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Business Number',
      'weight' => '7',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_npo_representative_name
  $fields['profile-field_npo_representative_name'] = array(
    'field_name' => 'field_npo_representative_name',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_npo_representative_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Representative Name',
      'weight' => '9',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_npo_website
  $fields['profile-field_npo_website'] = array(
    'field_name' => 'field_npo_website',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Business Website',
      'weight' => '8',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_payment_paypal_email
  $fields['profile-field_payment_paypal_email'] = array(
    'field_name' => 'field_payment_paypal_email',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_payment_paypal_email][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Paypal email',
      'weight' => '35',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_payment_paypal_verified
  $fields['profile-field_payment_paypal_verified'] = array(
    'field_name' => 'field_payment_paypal_verified',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '0|Not verified
1|Verified',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Admin paypal verified',
      'weight' => '36',
      'description' => 'Is paypal email verified?',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_user_full_name
  $fields['profile-field_user_full_name'] = array(
    'field_name' => 'field_user_full_name',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_user_full_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Full Name',
      'weight' => '4',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_node_weight
  $fields['project-field_node_weight'] = array(
    'field_name' => 'field_node_weight',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
          '_error_element' => 'default_value_widget][field_node_weight][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Weight',
      'weight' => '16',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_project_amount_need
  $fields['project-field_project_amount_need'] = array(
    'field_name' => 'field_project_amount_need',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'money',
    'required' => '1',
    'multiple' => '0',
    'module' => 'money',
    'active' => '1',
    'precision' => '10',
    'decimals' => '2',
    'widget' => array(
      'currency_select_mode' => 'code',
      'currency_display_mode' => 's|a',
      'decimals_display_mode' => 'field',
      'allowed_currencies' => array(
        'USD' => 'USD',
        'AFN' => 0,
        'ALL' => 0,
        'DZD' => 0,
        'ARS' => 0,
        'AWG' => 0,
        'AUD' => 0,
        'AZN' => 0,
        'BSD' => 0,
        'BHD' => 0,
        'BDT' => 0,
        'BBD' => 0,
        'BYR' => 0,
        'BZD' => 0,
        'BMD' => 0,
        'BTN' => 0,
        'BOB' => 0,
        'BAM' => 0,
        'BWP' => 0,
        'BRL' => 0,
        'GBP' => 0,
        'BND' => 0,
        'BGN' => 0,
        'BIF' => 0,
        'KHR' => 0,
        'CAD' => 0,
        'CVE' => 0,
        'KYD' => 0,
        'XOF' => 0,
        'XAF' => 0,
        'CLP' => 0,
        'CNY' => 0,
        'COP' => 0,
        'KMF' => 0,
        'CRC' => 0,
        'HRK' => 0,
        'CUP' => 0,
        'CYP' => 0,
        'CZK' => 0,
        'DKK' => 0,
        'DJF' => 0,
        'DOP' => 0,
        'XCD' => 0,
        'EGP' => 0,
        'SVC' => 0,
        'ERN' => 0,
        'EEK' => 0,
        'ETB' => 0,
        'EUR' => 0,
        'FKP' => 0,
        'FJD' => 0,
        'GMD' => 0,
        'GHC' => 0,
        'GIP' => 0,
        'XAU' => 0,
        'GTQ' => 0,
        'GGP' => 0,
        'GNF' => 0,
        'GYD' => 0,
        'HTG' => 0,
        'HNL' => 0,
        'HKD' => 0,
        'HUF' => 0,
        'ISK' => 0,
        'INR' => 0,
        'IDR' => 0,
        'IRR' => 0,
        'IQD' => 0,
        'ILS' => 0,
        'JMD' => 0,
        'JPY' => 0,
        'JOD' => 0,
        'KZT' => 0,
        'KES' => 0,
        'KRW' => 0,
        'KWD' => 0,
        'KGS' => 0,
        'LAK' => 0,
        'LVL' => 0,
        'LBP' => 0,
        'LSL' => 0,
        'LRD' => 0,
        'LYD' => 0,
        'LTL' => 0,
        'MOP' => 0,
        'MKD' => 0,
        'MGA' => 0,
        'MWK' => 0,
        'MYR' => 0,
        'MVR' => 0,
        'MTL' => 0,
        'MRO' => 0,
        'MUR' => 0,
        'MXN' => 0,
        'MDL' => 0,
        'MNT' => 0,
        'MAD' => 0,
        'MZM' => 0,
        'MMK' => 0,
        'NAD' => 0,
        'NPR' => 0,
        'ANG' => 0,
        'TRY' => 0,
        'NZD' => 0,
        'NIO' => 0,
        'NGN' => 0,
        'KPW' => 0,
        'NOK' => 0,
        'OMR' => 0,
        'XPF' => 0,
        'PKR' => 0,
        'XPD' => 0,
        'PAB' => 0,
        'PGK' => 0,
        'PYG' => 0,
        'PEN' => 0,
        'PHP' => 0,
        'XPT' => 0,
        'PLN' => 0,
        'QAR' => 0,
        'RON' => 0,
        'RUB' => 0,
        'RWF' => 0,
        'WST' => 0,
        'STD' => 0,
        'SAR' => 0,
        'SCR' => 0,
        'RSD' => 0,
        'SLL' => 0,
        'XAG' => 0,
        'SGD' => 0,
        'SKK' => 0,
        'SBD' => 0,
        'SOS' => 0,
        'ZAR' => 0,
        'LKR' => 0,
        'SHP' => 0,
        'SDD' => 0,
        'SRD' => 0,
        'SZL' => 0,
        'SEK' => 0,
        'CHF' => 0,
        'SYP' => 0,
        'TWD' => 0,
        'TZS' => 0,
        'THB' => 0,
        'TOP' => 0,
        'TTD' => 0,
        'TND' => 0,
        'AED' => 0,
        'UGX' => 0,
        'UAH' => 0,
        'UYU' => 0,
        'UZS' => 0,
        'VUV' => 0,
        'VEB' => 0,
        'VND' => 0,
        'YER' => 0,
        'YUM' => 0,
        'ZMK' => 0,
        'ZWD' => 0,
      ),
      'default_value' => array(
        '0' => array(
          'amount' => '',
          'currency' => '',
          '_error_element' => 'default_value_widget][field_project_amount_need][0][amount',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Amount needed',
      'weight' => '8',
      'description' => '',
      'type' => 'money_widget',
      'module' => 'money',
    ),
  );

  // Exported field: field_project_amount_pledge
  $fields['project-field_project_amount_pledge'] = array(
    'field_name' => 'field_project_amount_pledge',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'money',
    'required' => '0',
    'multiple' => '0',
    'module' => 'money',
    'active' => '1',
    'precision' => '10',
    'decimals' => '2',
    'widget' => array(
      'currency_select_mode' => 'code',
      'currency_display_mode' => 's|a',
      'decimals_display_mode' => 'field',
      'allowed_currencies' => array(
        'USD' => 'USD',
        'AFN' => 0,
        'ALL' => 0,
        'DZD' => 0,
        'ARS' => 0,
        'AWG' => 0,
        'AUD' => 0,
        'AZN' => 0,
        'BSD' => 0,
        'BHD' => 0,
        'BDT' => 0,
        'BBD' => 0,
        'BYR' => 0,
        'BZD' => 0,
        'BMD' => 0,
        'BTN' => 0,
        'BOB' => 0,
        'BAM' => 0,
        'BWP' => 0,
        'BRL' => 0,
        'GBP' => 0,
        'BND' => 0,
        'BGN' => 0,
        'BIF' => 0,
        'KHR' => 0,
        'CAD' => 0,
        'CVE' => 0,
        'KYD' => 0,
        'XOF' => 0,
        'XAF' => 0,
        'CLP' => 0,
        'CNY' => 0,
        'COP' => 0,
        'KMF' => 0,
        'CRC' => 0,
        'HRK' => 0,
        'CUP' => 0,
        'CYP' => 0,
        'CZK' => 0,
        'DKK' => 0,
        'DJF' => 0,
        'DOP' => 0,
        'XCD' => 0,
        'EGP' => 0,
        'SVC' => 0,
        'ERN' => 0,
        'EEK' => 0,
        'ETB' => 0,
        'EUR' => 0,
        'FKP' => 0,
        'FJD' => 0,
        'GMD' => 0,
        'GHC' => 0,
        'GIP' => 0,
        'XAU' => 0,
        'GTQ' => 0,
        'GGP' => 0,
        'GNF' => 0,
        'GYD' => 0,
        'HTG' => 0,
        'HNL' => 0,
        'HKD' => 0,
        'HUF' => 0,
        'ISK' => 0,
        'INR' => 0,
        'IDR' => 0,
        'IRR' => 0,
        'IQD' => 0,
        'ILS' => 0,
        'JMD' => 0,
        'JPY' => 0,
        'JOD' => 0,
        'KZT' => 0,
        'KES' => 0,
        'KRW' => 0,
        'KWD' => 0,
        'KGS' => 0,
        'LAK' => 0,
        'LVL' => 0,
        'LBP' => 0,
        'LSL' => 0,
        'LRD' => 0,
        'LYD' => 0,
        'LTL' => 0,
        'MOP' => 0,
        'MKD' => 0,
        'MGA' => 0,
        'MWK' => 0,
        'MYR' => 0,
        'MVR' => 0,
        'MTL' => 0,
        'MRO' => 0,
        'MUR' => 0,
        'MXN' => 0,
        'MDL' => 0,
        'MNT' => 0,
        'MAD' => 0,
        'MZM' => 0,
        'MMK' => 0,
        'NAD' => 0,
        'NPR' => 0,
        'ANG' => 0,
        'TRY' => 0,
        'NZD' => 0,
        'NIO' => 0,
        'NGN' => 0,
        'KPW' => 0,
        'NOK' => 0,
        'OMR' => 0,
        'XPF' => 0,
        'PKR' => 0,
        'XPD' => 0,
        'PAB' => 0,
        'PGK' => 0,
        'PYG' => 0,
        'PEN' => 0,
        'PHP' => 0,
        'XPT' => 0,
        'PLN' => 0,
        'QAR' => 0,
        'RON' => 0,
        'RUB' => 0,
        'RWF' => 0,
        'WST' => 0,
        'STD' => 0,
        'SAR' => 0,
        'SCR' => 0,
        'RSD' => 0,
        'SLL' => 0,
        'XAG' => 0,
        'SGD' => 0,
        'SKK' => 0,
        'SBD' => 0,
        'SOS' => 0,
        'ZAR' => 0,
        'LKR' => 0,
        'SHP' => 0,
        'SDD' => 0,
        'SRD' => 0,
        'SZL' => 0,
        'SEK' => 0,
        'CHF' => 0,
        'SYP' => 0,
        'TWD' => 0,
        'TZS' => 0,
        'THB' => 0,
        'TOP' => 0,
        'TTD' => 0,
        'TND' => 0,
        'AED' => 0,
        'UGX' => 0,
        'UAH' => 0,
        'UYU' => 0,
        'UZS' => 0,
        'VUV' => 0,
        'VEB' => 0,
        'VND' => 0,
        'YER' => 0,
        'YUM' => 0,
        'ZMK' => 0,
        'ZWD' => 0,
      ),
      'default_value' => array(
        '0' => array(
          'amount' => '0.00',
          'currency' => 'USD',
          '_error_element' => 'default_value_widget][field_project_amount_pledge][0][amount',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Amount pledged',
      'weight' => '9',
      'description' => '',
      'type' => 'money_widget',
      'module' => 'money',
    ),
  );

  // Exported field: field_project_cancel_notes
  $fields['project-field_project_cancel_notes'] = array(
    'field_name' => 'field_project_cancel_notes',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_project_cancel_notes][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Cancel notes',
      'weight' => '19',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_project_donors
  $fields['project-field_project_donors'] = array(
    'field_name' => 'field_project_donors',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
          '_error_element' => 'default_value_widget][field_project_donors][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Donors',
      'weight' => '15',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_project_end
  $fields['project-field_project_end'] = array(
    'field_name' => 'field_project_end',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'j M Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-1:+1',
      'label_position' => 'above',
      'label' => 'What is end date of your project to be funded?',
      'weight' => '10',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_project_image
  $fields['project-field_project_image'] = array(
    'field_name' => 'field_project_image',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'project/images/[uid]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '3M',
      'max_filesize_per_node' => '',
      'max_resolution' => '1024x1024',
      'min_resolution' => '215x150',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Project image',
      'weight' => '-3',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_project_location
  $fields['project-field_project_location'] = array(
    'field_name' => 'field_project_location',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_project_location][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Location',
      'weight' => '18',
      'description' => '',
      'type' => 'weeve_google_places_autocomplete',
      'module' => 'weeve_google_places',
    ),
  );

  // Exported field: field_project_payed_out
  $fields['project-field_project_payed_out'] = array(
    'field_name' => 'field_project_payed_out',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|No
1|Yes',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Payed out',
      'weight' => '20',
      'description' => 'Is this project payed out?',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_project_percent_pledge
  $fields['project-field_project_percent_pledge'] = array(
    'field_name' => 'field_project_percent_pledge',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '$node_field[0][\'value\'] = 0;

if ($node->field_project_amount_need[0][\'amount\'] > 0) {
  $ratio = ((int)$node->field_project_amount_pledge[0][\'amount\']) / ((int)$node->field_project_amount_need[0][\'amount\']);
  $node_field[0][\'value\'] = round($ratio * 100);
}',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'int',
    'data_length' => '10',
    'data_not_NULL' => 0,
    'data_default' => '0',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Percent pledged',
      'weight' => '13',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_project_proposal
  $fields['project-field_project_proposal'] = array(
    'field_name' => 'field_project_proposal',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'project_request' => 'project_request',
      'page' => 0,
      'profile' => 0,
      'project' => 0,
    ),
    'advanced_view' => 'author_proposals',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_project_proposal][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Proposal',
      'weight' => '11',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_project_staff_pick
  $fields['project-field_project_staff_pick'] = array(
    'field_name' => 'field_project_staff_pick',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '0|No
1|Yes',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Staff pick',
      'weight' => '17',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_project_status
  $fields['project-field_project_status'] = array(
    'field_name' => 'field_project_status',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'review|In review
decline|Declined
accept|Accepted
archive|Archived
cancel|Cancelled',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'review',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Status',
      'weight' => '12',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_project_updates
  $fields['project-field_project_updates'] = array(
    'field_name' => 'field_project_updates',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'project_update' => 'project_update',
      'page' => 0,
      'profile' => 0,
      'project' => 0,
      'project_request' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_project_updates][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Updates',
      'weight' => '14',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_project_video
  $fields['project-field_project_video'] = array(
    'field_name' => 'field_project_video',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'video_upload',
    'required' => '0',
    'multiple' => '0',
    'module' => 'video_upload',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'mov avi mp4 mpa mpe mpg mpeg qt wmv',
      'file_path' => 'youtube_videos/[uid]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '100M',
      'max_filesize_per_node' => '',
      'video_category' => 'Entertainment',
      'auto_delete_rejected_videos' => 1,
      'remove_deleted_videos' => 0,
      'use_browser_upload_method' => FALSE,
      'default_title' => '[title]',
      'default_description' => '',
      'default_keywords' => 'weeve',
      'developer_tags' => '',
      'display' => array(
        'default_width' => '580',
        'default_height' => '295',
        'small_width' => '240',
        'small_height' => '148',
        'thumb_width' => '128',
        'thumb_height' => '72',
        'related_videos' => 0,
        'autoplay' => 0,
        'fullscreen' => 1,
      ),
      'default_title_sync' => '1',
      'default_description_sync' => '2',
      'default_keyword_sync' => '2',
      'label' => 'Video',
      'weight' => '-2',
      'description' => '',
      'type' => 'video_upload_widget',
      'module' => 'video_upload',
    ),
  );

  // Exported field: field_project_video_embed
  $fields['project-field_project_video_embed'] = array(
    'field_name' => 'field_project_video_embed',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '0',
    'multiple' => '0',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '425',
      'video_height' => '350',
      'video_autoplay' => 0,
      'preview_width' => '425',
      'preview_height' => '350',
      'preview_autoplay' => 0,
      'thumbnail_width' => '120',
      'thumbnail_height' => '90',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'See video',
      'meta_fields' => array(
        'title' => 0,
        'description' => 0,
      ),
      'providers' => array(
        'youtube' => 'youtube',
      ),
      'emthumb' => 0,
      'emthumb_label' => 'Video URL custom thumbnail',
      'emthumb_description' => 'If you upload a custom thumbnail, then this will be displayed when the Video URL thumbnail is called for, overriding any automatic thumbnails by custom providers.',
      'emthumb_max_resolution' => '0',
      'emimport_image_path' => '',
      'emthumb_custom_alt' => 0,
      'emthumb_custom_title' => 0,
      'emthumb_store_local_thumbnail' => 1,
      'emthumb_start_collapsed' => 0,
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video URL',
      'weight' => '-1',
      'description' => '',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Exported field: field_node_weight
  $fields['project_request-field_node_weight'] = array(
    'field_name' => 'field_node_weight',
    'type_name' => 'project_request',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
          '_error_element' => 'default_value_widget][field_node_weight][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Weight',
      'weight' => '32',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_proposal_back
  $fields['project_request-field_proposal_back'] = array(
    'field_name' => 'field_proposal_back',
    'type_name' => 'project_request',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_proposal_back][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Project reward',
      'weight' => '3',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_proposal_body
  $fields['project_request-field_proposal_body'] = array(
    'field_name' => 'field_proposal_body',
    'type_name' => 'project_request',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_proposal_body][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Project Proposal',
      'weight' => '2',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_proposal_links
  $fields['project_request-field_proposal_links'] = array(
    'field_name' => 'field_proposal_links',
    'type_name' => 'project_request',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_proposal_links][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Proposal links',
      'weight' => '4',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_proposal_project
  $fields['project_request-field_proposal_project'] = array(
    'field_name' => 'field_proposal_project',
    'type_name' => 'project_request',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'project' => 'project',
      'page' => 0,
      'profile' => 0,
      'project_request' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_proposal_project][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Project reference',
      'weight' => '7',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_proposal_project_funds
  $fields['project_request-field_proposal_project_funds'] = array(
    'field_name' => 'field_proposal_project_funds',
    'type_name' => 'project_request',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '10 | $10-100
100 | $100-500
500 | $500-2000
2000 | $2000-5000
5000 | $5000-10000
10000 | $10000-20000
20000 | $20000+',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Project funds',
      'weight' => '5',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_proposal_status
  $fields['project_request-field_proposal_status'] = array(
    'field_name' => 'field_proposal_status',
    'type_name' => 'project_request',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'new|New
review|In review
cancel|Cancelled
approve|Approved
running|Approved and Running
decline|Declined
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'new',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Status',
      'weight' => '6',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_update_project
  $fields['project_update-field_update_project'] = array(
    'field_name' => 'field_update_project',
    'type_name' => 'project_update',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'project' => 'project',
      'page' => 0,
      'profile' => 0,
      'project_request' => 0,
      'project_update' => 0,
    ),
    'advanced_view' => 'author_projects',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Project',
      'weight' => '31',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Account type');
  t('Admin paypal verified');
  t('Amount needed');
  t('Amount pledged');
  t('Bio');
  t('Business Code');
  t('Business Number');
  t('Business Website');
  t('Cancel notes');
  t('Donors');
  t('Full Name');
  t('Location');
  t('Organization Name');
  t('Payed out');
  t('Paypal email');
  t('Percent pledged');
  t('Project');
  t('Project Proposal');
  t('Project funds');
  t('Project image');
  t('Project reference');
  t('Project reward');
  t('Proposal');
  t('Proposal links');
  t('Representative Name');
  t('Staff pick');
  t('Status');
  t('Updates');
  t('Video');
  t('Video URL');
  t('Weight');
  t('What is end date of your project to be funded?');

  return $fields;
}
