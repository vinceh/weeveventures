<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function weeve_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-featured-projects
  $menus['menu-featured-projects'] = array(
    'menu_name' => 'menu-featured-projects',
    'title' => 'Featured menu',
    'description' => '',
  );
  // Exported menu: menu-top-menu
  $menus['menu-top-menu'] = array(
    'menu_name' => 'menu-top-menu',
    'title' => 'Top menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Featured menu');
  t('Top menu');


  return $menus;
}
