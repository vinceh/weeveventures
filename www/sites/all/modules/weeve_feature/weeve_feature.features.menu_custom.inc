<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function weeve_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: features
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
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
  t('Features');
  t('Menu items for any enabled features.');
  t('Top menu');


  return $menus;
}
