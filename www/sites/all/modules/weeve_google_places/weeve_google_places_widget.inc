<?php

/**
* Implementation of hook_widget_info().
*/
function weeve_google_places_widget_info() {
  return array(
    'weeve_google_places_autocomplete' => array(
      'label' => t('Google Places Autocomplete'),
      'field types' => array('text'),
      'multiple values' => CONTENT_HANDLE_CORE,
      'callbacks' => array(
        'default value' => CONTENT_CALLBACK_DEFAULT,
      ),
    ),
  );
}

/**
* Implementation of hook_widget().
*/
function weeve_google_places_widget(&$form, &$form_state, $field, $items, $delta = NULL) {
  $element = array(
    '#type' => $field['widget']['type'],
    '#default_value' => isset($items[$delta]) ? $items[$delta] : '',
  );
  return $element;
}

/**
* Implementation of hook_elements().
*/
function weeve_google_places_elements() {
  $elements = array(
    'weeve_google_places_autocomplete' => array(
      '#input' => TRUE,
      '#columns' => array('name'),
      '#delta' => 0,
      '#process' => array('weeve_google_places_autocomplete_process'),
    ),
  );
  return $elements;
}

function weeve_google_places_autocomplete_process($element, $edit, &$form_state, $form) {
  $field = $form['#field_info'][$element['#field_name']];
  $field_key = $element['#columns'][0];
  $delta = $element['#delta'];
  $element[$field_key] = array(
    '#type' => 'textfield',
    '#default_value' => isset($element['#value'][$field_key]) ? $element['#value'][$field_key] : NULL,
    '#autocomplete_path' => 'autocomplete/places',
    '#size' => !empty($field['widget']['size']) ? $field['widget']['size'] : 60,
    '#attributes' => array('class' => 'text'),
    // The following values were set by the content module and need
    // to be passed down to the nested element.
    '#title' => $element['#title'],
    '#description' => $element['#description'],
    '#required' => $element['#required'],
    '#field_name' => $element['#field_name'],
    '#type_name' => $element['#type_name'],
    '#delta' => $element['#delta'],
    '#columns' => $element['#columns'],
  );

  $element[$field_key]['#maxlength'] = !empty($field['max_length']) ? $field['max_length'] : NULL;

  if (!empty($field['text_processing'])) {
    $filter_key = $element['#columns'][1];
    $format = isset($element['#value'][$filter_key]) ? $element['#value'][$filter_key] : FILTER_FORMAT_DEFAULT;
    $parents = array_merge($element['#parents'] , array($filter_key));
    $element[$filter_key] = filter_form($format, 1, $parents);
  }

  // Used so that hook_field('validate') knows where to flag an error.
  $element['_error_element'] = array(
    '#type' => 'value',
    '#value' => implode('][', array_merge($element['#parents'], array($field_key))),
  );

  return $element;
}

function theme_weeve_google_places_autocomplete($element) {
  return $element['#children'];
}