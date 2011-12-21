<?php
// $Id: views_exclude_previous.views.inc,v 1.2 2008/09/15 17:11:16 anselmheaton Exp $

/**
 * Implementation of hook_views_data()
 */
function views_exclude_previous_views_data_alter(&$cache) {
  $cache['node']['views_exclude_previous'] = array(
    'group' => t('Views'),
    'title' => t('Views Exclude Previous'),
    'help' => t('Excludes nodes that have already been loaded/viewed in the current page.'),
    'filter' => array(
      'handler' => 'views_exclude_previous_handler',
    ),
  );
}

/**
 * Implementation of hook_views_handlers
 */
function views_exclude_previous_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'views_exclude_previous'),
    ),
    'handlers' => array(
      'views_exclude_previous_handler' => array(
        'parent' => 'views_handler_filter_in_operator',
      ),
    ),
  );
}
