<?php

/**
 * Implementation of hook_views_default_views().
 */
function weeve_feature_views_default_views() {
  $views = array();

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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Nodes authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Amount needed (field_project_amount_need) */
  $handler->display->display_options['fields']['field_project_amount_need_amount']['id'] = 'field_project_amount_need_amount';
  $handler->display->display_options['fields']['field_project_amount_need_amount']['table'] = 'node_data_field_project_amount_need';
  $handler->display->display_options['fields']['field_project_amount_need_amount']['field'] = 'field_project_amount_need_amount';
  $handler->display->display_options['fields']['field_project_amount_need_amount']['label'] = 'Amount needed';
  $handler->display->display_options['fields']['field_project_amount_need_amount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_amount_need_amount']['link_to_node'] = 0;
  /* Field: Content: Amount pledged (field_project_amount_pledge) */
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['id'] = 'field_project_amount_pledge_amount';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['table'] = 'node_data_field_project_amount_pledge';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['field'] = 'field_project_amount_pledge_amount';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['label'] = 'Amount pledged';
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
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['link_to_node'] = 0;
  /* Field: Node: Teaser */
  $handler->display->display_options['fields']['teaser']['id'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['teaser']['field'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['label'] = '';
  $handler->display->display_options['fields']['teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['external'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['teaser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['teaser']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['teaser']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['teaser']['hide_empty'] = 0;
  $handler->display->display_options['fields']['teaser']['empty_zero'] = 0;
  $handler->display->display_options['fields']['teaser']['hide_alter_empty'] = 1;
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
  /* Field: Content: Full Name (field_user_full_name) */
  $handler->display->display_options['fields']['field_user_full_name_value']['id'] = 'field_user_full_name_value';
  $handler->display->display_options['fields']['field_user_full_name_value']['table'] = 'node_data_field_user_full_name';
  $handler->display->display_options['fields']['field_user_full_name_value']['field'] = 'field_user_full_name_value';
  /* Field: Content: Organization Name (field_npo_name) */
  $handler->display->display_options['fields']['field_npo_name_value']['id'] = 'field_npo_name_value';
  $handler->display->display_options['fields']['field_npo_name_value']['table'] = 'node_data_field_npo_name';
  $handler->display->display_options['fields']['field_npo_name_value']['field'] = 'field_npo_name_value';
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

  /* Display: Projects by user */
  $handler = $view->new_display('block', 'Projects by user', 'npo_projects');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
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
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['label_type'] = 'custom';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['format'] = 'unformatted';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argument: Node: User posted or commented */
  $handler->display->display_options['arguments']['uid_touch']['id'] = 'uid_touch';
  $handler->display->display_options['arguments']['uid_touch']['table'] = 'node';
  $handler->display->display_options['arguments']['uid_touch']['field'] = 'uid_touch';
  $handler->display->display_options['arguments']['uid_touch']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['uid_touch']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_touch']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid_touch']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid_touch']['validate_type'] = 'user';
  $handler->display->display_options['arguments']['uid_touch']['validate_options']['restrict_roles'] = 0;
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
    t('Amount needed'),
    t('Amount pledged'),
    t('Page'),
    t('by'),
    t('[field_project_percent_pledge_value]%
<div>funded</div>'),
    t('[field_project_amount_pledge_amount]
<div class="raised">raised</div>'),
    t('$0'),
    t('[phpcode]
<div class="days-left">days left</div>'),
    t('Projects by user'),
    t('All'),
  );

  $views[$view->name] = $view;

  return $views;
}
