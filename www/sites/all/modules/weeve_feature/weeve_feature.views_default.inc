<?php

/**
 * Implementation of hook_views_default_views().
 */
function weeve_feature_views_default_views() {
  $views = array();

  // Exported view: author_projects
  $view = new view;
  $view->name = 'author_projects';
  $view->description = '';
  $view->tag = 'project';
  $view->base_table = 'node';
  $view->human_name = 'Author projects';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Argument: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['validate_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['restrict_roles'] = 0;
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['author_projects'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('All'),
    t('Block'),
  );

  $views[$view->name] = $view;

  // Exported view: author_proposals
  $view = new view;
  $view->name = 'author_proposals';
  $view->description = '';
  $view->tag = 'proposal';
  $view->base_table = 'node';
  $view->human_name = 'My proposals';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_proposal_project_funds_value' => 'field_proposal_project_funds_value',
    'field_proposal_back_value' => 'field_proposal_back_value',
    'field_proposal_links_value' => 'field_proposal_links_value',
    'field_proposal_status_value' => 'field_proposal_status_value',
  );
  $handler->display->display_options['style_options']['default'] = 'field_proposal_status_value';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_proposal_project_funds_value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_proposal_back_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_proposal_links_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_proposal_status_value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Project funds (field_proposal_project_funds) */
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['id'] = 'field_proposal_project_funds_value';
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['table'] = 'node_data_field_proposal_project_funds';
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['field'] = 'field_proposal_project_funds_value';
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['label'] = 'Project funds';
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['link_to_node'] = 0;
  /* Field: Content: Proposal back (field_proposal_back) */
  $handler->display->display_options['fields']['field_proposal_back_value']['id'] = 'field_proposal_back_value';
  $handler->display->display_options['fields']['field_proposal_back_value']['table'] = 'node_data_field_proposal_back';
  $handler->display->display_options['fields']['field_proposal_back_value']['field'] = 'field_proposal_back_value';
  $handler->display->display_options['fields']['field_proposal_back_value']['label'] = 'Proposal back';
  $handler->display->display_options['fields']['field_proposal_back_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_proposal_back_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_proposal_back_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_proposal_back_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_proposal_back_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_proposal_back_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_proposal_back_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_proposal_back_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_proposal_back_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_proposal_back_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_proposal_back_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_proposal_back_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_proposal_back_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_proposal_back_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_proposal_back_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_proposal_back_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_proposal_back_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_proposal_back_value']['link_to_node'] = 0;
  /* Field: Content: Proposal links (field_proposal_links) */
  $handler->display->display_options['fields']['field_proposal_links_value']['id'] = 'field_proposal_links_value';
  $handler->display->display_options['fields']['field_proposal_links_value']['table'] = 'node_data_field_proposal_links';
  $handler->display->display_options['fields']['field_proposal_links_value']['field'] = 'field_proposal_links_value';
  $handler->display->display_options['fields']['field_proposal_links_value']['label'] = 'Proposal links';
  $handler->display->display_options['fields']['field_proposal_links_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_proposal_links_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_proposal_links_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_proposal_links_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_proposal_links_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_proposal_links_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_proposal_links_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_proposal_links_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_proposal_links_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_proposal_links_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_proposal_links_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_proposal_links_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_proposal_links_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_proposal_links_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_proposal_links_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_proposal_links_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_proposal_links_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_proposal_links_value']['link_to_node'] = 0;
  /* Field: Content: Status (field_proposal_status) */
  $handler->display->display_options['fields']['field_proposal_status_value']['id'] = 'field_proposal_status_value';
  $handler->display->display_options['fields']['field_proposal_status_value']['table'] = 'node_data_field_proposal_status';
  $handler->display->display_options['fields']['field_proposal_status_value']['field'] = 'field_proposal_status_value';
  $handler->display->display_options['fields']['field_proposal_status_value']['label'] = 'Status';
  $handler->display->display_options['fields']['field_proposal_status_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_proposal_status_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_proposal_status_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_proposal_status_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_proposal_status_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_proposal_status_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_proposal_status_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_proposal_status_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_proposal_status_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_proposal_status_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_proposal_status_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_proposal_status_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_proposal_status_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_proposal_status_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_proposal_status_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_proposal_status_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_proposal_status_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_proposal_status_value']['link_to_node'] = 0;
  /* Argument: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project_request' => 'project_request',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argument: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['validate_type'] = 'php';
  $handler->display->display_options['arguments']['uid']['validate_options']['code'] = 'global $user;
return $user->uid == $argument;';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project_request' => 'project_request',
  );
  $handler->display->display_options['path'] = 'user/%/proposals';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Proposals';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['author_proposals'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Title'),
    t('Project funds'),
    t('Proposal back'),
    t('Proposal links'),
    t('Status'),
    t('All'),
    t('Page'),
    t('Block'),
  );

  $views[$view->name] = $view;

  // Exported view: featured_projects
  $view = new view;
  $view->name = 'featured_projects';
  $view->description = 'On landing page';
  $view->tag = 'project';
  $view->base_table = 'node';
  $view->human_name = 'Featured project';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Nodes authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Project image (field_project_image) */
  $handler->display->display_options['fields']['field_project_image_fid']['id'] = 'field_project_image_fid';
  $handler->display->display_options['fields']['field_project_image_fid']['table'] = 'node_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image_fid']['field'] = 'field_project_image_fid';
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_image_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_image_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_project_image_fid']['format'] = 'scale_crop_215x150_linked';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  /* Field: Content: Amount pledged (field_project_amount_pledge) */
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['id'] = 'field_project_amount_pledge_amount';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['table'] = 'node_data_field_project_amount_pledge';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['field'] = 'field_project_amount_pledge_amount';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['empty'] = '$0';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['format'] = 'nozeros';
  /* Field: Content: Percent pledged (field_project_percent_pledge) */
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['id'] = 'field_project_percent_pledge_value';
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['table'] = 'node_data_field_project_percent_pledge';
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['field'] = 'field_project_percent_pledge_value';
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['format'] = 'computed_value';
  /* Field: Content: End date (field_project_end) */
  $handler->display->display_options['fields']['field_project_end_value']['id'] = 'field_project_end_value';
  $handler->display->display_options['fields']['field_project_end_value']['table'] = 'node_data_field_project_end';
  $handler->display->display_options['fields']['field_project_end_value']['field'] = 'field_project_end_value';
  $handler->display->display_options['fields']['field_project_end_value']['label'] = 'End date';
  $handler->display->display_options['fields']['field_project_end_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_end_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_end_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_end_value']['link_to_node'] = 0;
  /* Field: Content: Full Name (field_user_full_name) */
  $handler->display->display_options['fields']['field_user_full_name_value']['id'] = 'field_user_full_name_value';
  $handler->display->display_options['fields']['field_user_full_name_value']['table'] = 'node_data_field_user_full_name';
  $handler->display->display_options['fields']['field_user_full_name_value']['field'] = 'field_user_full_name_value';
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_user_full_name_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_full_name_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_user_full_name_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['label_type'] = 'none';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode']['id'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode']['label'] = '';
  $handler->display->display_options['fields']['phpcode']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['text'] = '[phpcode]
<div class="days-left">days left</div>';
  $handler->display->display_options['fields']['phpcode']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['external'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['phpcode']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['phpcode']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['phpcode']['value'] = '<?php
$dateTime = date_parse_from_format(\'Y-m-d\\TH:i:s\', $data->node_data_field_project_image_field_project_end_value);
$timestamp = mktime((int)$dateTime[\'hour\'], (int)$dateTime[\'minute\'], (int)$dateTime[\'second\'], (int)$dateTime[\'month\'], (int)$dateTime[\'day\'], (int)$dateTime[\'year\']);

return round(($timestamp - time()) / 86400);
?>';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter: Content: Status (field_project_status) - Allowed values */
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['id'] = 'field_project_status_value_many_to_one';
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['table'] = 'node_data_field_project_status';
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['field'] = 'field_project_status_value_many_to_one';
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['value'] = array(
    'accept' => 'accept',
  );
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['reduce_duplicates'] = 0;
  /* Filter: Node: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'front-page';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Nodes authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project image (field_project_image) */
  $handler->display->display_options['fields']['field_project_image_fid']['id'] = 'field_project_image_fid';
  $handler->display->display_options['fields']['field_project_image_fid']['table'] = 'node_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image_fid']['field'] = 'field_project_image_fid';
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_image_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_image_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_project_image_fid']['format'] = 'scale_crop_215x150_linked';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  /* Field: Content: Full Name (field_user_full_name) */
  $handler->display->display_options['fields']['field_user_full_name_value']['id'] = 'field_user_full_name_value';
  $handler->display->display_options['fields']['field_user_full_name_value']['table'] = 'node_data_field_user_full_name';
  $handler->display->display_options['fields']['field_user_full_name_value']['field'] = 'field_user_full_name_value';
  $handler->display->display_options['fields']['field_user_full_name_value']['label'] = 'by';
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_user_full_name_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_full_name_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_user_full_name_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_user_full_name_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_user_full_name_value']['label_type'] = 'custom';
  /* Field: Content: Percent pledged (field_project_percent_pledge) */
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['id'] = 'field_project_percent_pledge_value';
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['table'] = 'node_data_field_project_percent_pledge';
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['field'] = 'field_project_percent_pledge_value';
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['text'] = '[field_project_percent_pledge_value]%
<div>funded</div>';
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['empty'] = '0';
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['format'] = 'computed_value';
  /* Field: Content: Amount pledged (field_project_amount_pledge) */
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['id'] = 'field_project_amount_pledge_amount';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['table'] = 'node_data_field_project_amount_pledge';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['field'] = 'field_project_amount_pledge_amount';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['text'] = '[field_project_amount_pledge_amount]
<div class="raised">raised</div>';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['empty'] = '$0';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['format'] = 'nozeros';
  /* Field: Content: End date (field_project_end) */
  $handler->display->display_options['fields']['field_project_end_value']['id'] = 'field_project_end_value';
  $handler->display->display_options['fields']['field_project_end_value']['table'] = 'node_data_field_project_end';
  $handler->display->display_options['fields']['field_project_end_value']['field'] = 'field_project_end_value';
  $handler->display->display_options['fields']['field_project_end_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_end_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_end_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_end_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_end_value']['label_type'] = 'none';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode']['id'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode']['label'] = '';
  $handler->display->display_options['fields']['phpcode']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['text'] = '[phpcode]
<div class="days-left">days left</div>';
  $handler->display->display_options['fields']['phpcode']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['external'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['phpcode']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['phpcode']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['phpcode']['value'] = '<?php
$dateTime = date_parse_from_format(\'Y-m-d\\TH:i:s\', $data->node_data_field_project_image_field_project_end_value);
$timestamp = mktime((int)$dateTime[\'hour\'], (int)$dateTime[\'minute\'], (int)$dateTime[\'second\'], (int)$dateTime[\'month\'], (int)$dateTime[\'day\'], (int)$dateTime[\'year\']);

return round(($timestamp - time()) / 86400);
?>';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter: Content: Status (field_project_status) - Allowed values */
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['id'] = 'field_project_status_value_many_to_one';
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['table'] = 'node_data_field_project_status';
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['field'] = 'field_project_status_value_many_to_one';
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['value'] = array(
    'accept' => 'accept',
  );
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['reduce_duplicates'] = 0;
  /* Filter: Node: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'home';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'front-page';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter: Content: Status (field_project_status) - Allowed values */
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['id'] = 'field_project_status_value_many_to_one';
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['table'] = 'node_data_field_project_status';
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['field'] = 'field_project_status_value_many_to_one';
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['value'] = array(
    'accept' => 'accept',
  );
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['reduce_duplicates'] = 0;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'projects';
  $translatables['featured_projects'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('nodes'),
    t('$0'),
    t('End date'),
    t('[phpcode]
<div class="days-left">days left</div>'),
    t('Page'),
    t('by'),
    t('[field_project_percent_pledge_value]%
<div>funded</div>'),
    t('[field_project_amount_pledge_amount]
<div class="raised">raised</div>'),
  );

  $views[$view->name] = $view;

  // Exported view: project_comments
  $view = new view;
  $view->name = 'project_comments';
  $view->description = '';
  $view->tag = 'project';
  $view->base_table = 'node';
  $view->human_name = 'Project comments';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  /* Relationship: Comment: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'comments';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'User comment';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Field: Comment: Body */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'comments';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  $handler->display->display_options['fields']['comment']['relationship'] = 'nid';
  $handler->display->display_options['fields']['comment']['label'] = '';
  $handler->display->display_options['fields']['comment']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['comment']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['comment']['alter']['external'] = 0;
  $handler->display->display_options['fields']['comment']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['comment']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['comment']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['comment']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['comment']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['comment']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['comment']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['comment']['alter']['html'] = 0;
  $handler->display->display_options['fields']['comment']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['comment']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['comment']['hide_empty'] = 0;
  $handler->display->display_options['fields']['comment']['empty_zero'] = 0;
  $handler->display->display_options['fields']['comment']['hide_alter_empty'] = 1;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comments';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'nid';
  $handler->display->display_options['fields']['name']['label'] = 'by ';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 1;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'comments';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['relationship'] = 'nid';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['external'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['timestamp']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['timestamp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['timestamp']['empty_zero'] = 0;
  $handler->display->display_options['fields']['timestamp']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time span';
  $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'd j Y';
  /* Sort criterion: Comment: Post date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'comments';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['relationship'] = 'nid';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['wildcard'] = '';
  $handler->display->display_options['arguments']['nid']['wildcard_substitution'] = '';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['validate_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = 0;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'project-comments-page';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['path'] = 'project/%/comments';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = '';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<?php
  $view = views_get_current_view();
  return weeve_project_menu_html($view->args[0]);
?>';
  $handler->display->display_options['footer']['area']['format'] = '3';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page_1' => 0,
  );
  $translatables['project_comments'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Text area'),
    t('User comment'),
    t('by '),
    t('Page'),
    t('Attachment'),
    t('<?php
  $view = views_get_current_view();
  return weeve_project_menu_html($view->args[0]);
?>'),
  );

  $views[$view->name] = $view;

  // Exported view: project_updates
  $view = new view;
  $view->name = 'project_updates';
  $view->description = '';
  $view->tag = 'project';
  $view->base_table = 'node';
  $view->human_name = 'Project Updates';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = '';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No updates for the project';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Relationship: Content: Project (field_update_project) */
  $handler->display->display_options['relationships']['field_update_project_nid']['id'] = 'field_update_project_nid';
  $handler->display->display_options['relationships']['field_update_project_nid']['table'] = 'node_data_field_update_project';
  $handler->display->display_options['relationships']['field_update_project_nid']['field'] = 'field_update_project_nid';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'time span';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd j Y';
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project_update' => 'project_update',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'project-updates-page';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Project (field_update_project) */
  $handler->display->display_options['relationships']['field_update_project_nid']['id'] = 'field_update_project_nid';
  $handler->display->display_options['relationships']['field_update_project_nid']['table'] = 'node_data_field_update_project';
  $handler->display->display_options['relationships']['field_update_project_nid']['field'] = 'field_update_project_nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_update_project_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['validate_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = 0;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['path'] = 'project/%/updates';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Updates';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = '';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<?php
  $view = views_get_current_view();
  return weeve_project_menu_html($view->args[0]);
?>';
  $handler->display->display_options['footer']['area']['format'] = '3';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_update_project_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page_1' => 0,
  );
  $translatables['project_updates'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('No updates for the project'),
    t('Project'),
    t('Page'),
    t('All'),
    t('Attachment'),
    t('<?php
  $view = views_get_current_view();
  return weeve_project_menu_html($view->args[0]);
?>'),
  );

  $views[$view->name] = $view;

  return $views;
}
