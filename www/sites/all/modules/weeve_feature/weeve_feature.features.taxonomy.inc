<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function weeve_feature_taxonomy_default_vocabularies() {
  return array(
    'project_categories' => array(
      'name' => 'Project categories',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_project_categories',
      'weight' => '0',
      'nodes' => array(
        'project' => 'project',
        'project_request' => 'project_request',
      ),
    ),
  );
}
