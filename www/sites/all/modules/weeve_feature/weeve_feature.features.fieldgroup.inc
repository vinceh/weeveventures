<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function weeve_feature_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_project_date
  $groups['project-group_project_date'] = array(
    'group_type' => 'standard',
    'type_name' => 'project',
    'group_name' => 'group_project_date',
    'label' => 'Date',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '33',
    'fields' => array(
      '0' => 'field_project_start',
      '1' => 'field_project_end',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Date');

  return $groups;
}
