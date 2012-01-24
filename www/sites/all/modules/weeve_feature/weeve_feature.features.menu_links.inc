<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function weeve_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-top-menu:<front>
  $menu_links['menu-top-menu:<front>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'organizations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-top-menu:account
  $menu_links['menu-top-menu:account'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'account',
    'router_path' => 'account',
    'link_title' => 'profile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-top-menu:logout
  $menu_links['menu-top-menu:logout'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'logout',
    'router_path' => 'logout',
    'link_title' => 'log out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-top-menu:projects
  $menu_links['menu-top-menu:projects'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'projects',
    'router_path' => 'projects',
    'link_title' => 'projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('log out');
  t('organizations');
  t('profile');
  t('projects');


  return $menu_links;
}
