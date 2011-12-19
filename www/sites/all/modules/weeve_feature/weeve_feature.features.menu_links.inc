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
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
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
    'weight' => '-46',
  );
  // Exported menu link: menu-top-menu:project/terms
  $menu_links['menu-top-menu:project/terms'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'project/terms',
    'router_path' => 'project/terms',
    'link_title' => 'create project',
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
  // Exported menu link: menu-top-menu:user
  $menu_links['menu-top-menu:user'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'account',
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
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('account');
  t('create project');
  t('log out');
  t('organizations');


  return $menu_links;
}
