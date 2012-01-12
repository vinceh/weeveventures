<?php

/**
 * Implementation of hook_views_default_views().
 */
function weeve_feature_views_default_views() {
  $views = array();

  // Exported view: admin_projects_proposals
  $view = new view;
  $view->name = 'admin_projects_proposals';
  $view->description = '';
  $view->tag = 'project';
  $view->base_table = 'node';
  $view->human_name = 'Admin project and proposals';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => 6,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
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
  /* Sort criterion: Content: Weight (field_node_weight) */
  $handler->display->display_options['sorts']['field_node_weight_value']['id'] = 'field_node_weight_value';
  $handler->display->display_options['sorts']['field_node_weight_value']['table'] = 'node_data_field_node_weight';
  $handler->display->display_options['sorts']['field_node_weight_value']['field'] = 'field_node_weight_value';
  /* Sort criterion: Node: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project_request' => 'project_request',
  );
  /* Filter: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'User: Name';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['reduce'] = 0;
  /* Filter: Content: Status (field_proposal_status) - Allowed values */
  $handler->display->display_options['filters']['field_proposal_status_value_many_to_one']['id'] = 'field_proposal_status_value_many_to_one';
  $handler->display->display_options['filters']['field_proposal_status_value_many_to_one']['table'] = 'node_data_field_proposal_status';
  $handler->display->display_options['filters']['field_proposal_status_value_many_to_one']['field'] = 'field_proposal_status_value_many_to_one';
  $handler->display->display_options['filters']['field_proposal_status_value_many_to_one']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_proposal_status_value_many_to_one']['expose']['operator'] = 'field_proposal_status_value_many_to_one_op';
  $handler->display->display_options['filters']['field_proposal_status_value_many_to_one']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['field_proposal_status_value_many_to_one']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_proposal_status_value_many_to_one']['expose']['identifier'] = 'field_proposal_status_value_many_to_one';
  $handler->display->display_options['filters']['field_proposal_status_value_many_to_one']['expose']['single'] = 0;
  $handler->display->display_options['filters']['field_proposal_status_value_many_to_one']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_proposal_status_value_many_to_one']['reduce_duplicates'] = 0;

  /* Display: Proposals */
  $handler = $view->new_display('page', 'Proposals', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Proposals';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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
  /* Field: Content: Project funds (field_proposal_project_funds) */
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['id'] = 'field_proposal_project_funds_value';
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['table'] = 'node_data_field_proposal_project_funds';
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['field'] = 'field_proposal_project_funds_value';
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['label'] = 'Money range';
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
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['label_type'] = 'custom';
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
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'account/[uid]';
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
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['path'] = 'admin/content/projects/proposals';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage proposals';
  $handler->display->display_options['menu']['weight'] = '-50';

  /* Display: Projects */
  $handler = $view->new_display('page', 'Projects', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Projects';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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
  /* Field: Content: Amount needed (field_project_amount_need) */
  $handler->display->display_options['fields']['field_project_amount_need_amount']['id'] = 'field_project_amount_need_amount';
  $handler->display->display_options['fields']['field_project_amount_need_amount']['table'] = 'node_data_field_project_amount_need';
  $handler->display->display_options['fields']['field_project_amount_need_amount']['field'] = 'field_project_amount_need_amount';
  $handler->display->display_options['fields']['field_project_amount_need_amount']['label'] = 'Money requested';
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
  $handler->display->display_options['fields']['field_project_amount_need_amount']['label_type'] = 'custom';
  /* Field: Content: What is end date of your project to be funded? (field_project_end) */
  $handler->display->display_options['fields']['field_project_end_value']['id'] = 'field_project_end_value';
  $handler->display->display_options['fields']['field_project_end_value']['table'] = 'node_data_field_project_end';
  $handler->display->display_options['fields']['field_project_end_value']['field'] = 'field_project_end_value';
  $handler->display->display_options['fields']['field_project_end_value']['label'] = 'End date';
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
  $handler->display->display_options['fields']['field_project_end_value']['label_type'] = 'custom';
  $handler->display->display_options['fields']['field_project_end_value']['format'] = 'short';
  /* Field: Content: Status (field_project_status) */
  $handler->display->display_options['fields']['field_project_status_value']['id'] = 'field_project_status_value';
  $handler->display->display_options['fields']['field_project_status_value']['table'] = 'node_data_field_project_status';
  $handler->display->display_options['fields']['field_project_status_value']['field'] = 'field_project_status_value';
  $handler->display->display_options['fields']['field_project_status_value']['label'] = 'Status';
  $handler->display->display_options['fields']['field_project_status_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_status_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_status_value']['empty'] = 'No status';
  $handler->display->display_options['fields']['field_project_status_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_project_status_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['link_to_node'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'account/[uid]';
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
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Weight (field_node_weight) */
  $handler->display->display_options['sorts']['field_node_weight_value']['id'] = 'field_node_weight_value';
  $handler->display->display_options['sorts']['field_node_weight_value']['table'] = 'node_data_field_node_weight';
  $handler->display->display_options['sorts']['field_node_weight_value']['field'] = 'field_node_weight_value';
  /* Sort criterion: Node: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'User: Name';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['reduce'] = 0;
  /* Filter: Content: Status (field_project_status) - Allowed values */
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['id'] = 'field_project_status_value_many_to_one';
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['table'] = 'node_data_field_project_status';
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['field'] = 'field_project_status_value_many_to_one';
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['expose']['operator'] = 'field_project_status_value_many_to_one_op';
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['expose']['identifier'] = 'field_project_status_value_many_to_one';
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['expose']['single'] = 0;
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['reduce_duplicates'] = 0;
  $handler->display->display_options['path'] = 'admin/content/projects';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage projects';
  $handler->display->display_options['menu']['weight'] = '-50';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $translatables['admin_projects_proposals'] = array(
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
    t('User: Name'),
    t('Status'),
    t('Proposals'),
    t('Manage Proposals'),
    t('Money range'),
    t('Edit link'),
    t('Edit'),
    t('Name'),
    t('account/[uid]'),
    t('Projects'),
    t('Manage Projects'),
    t('Money requested'),
    t('End date'),
    t('No status'),
  );

  $views[$view->name] = $view;

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
  /* Field: Content: Project reward (field_proposal_back) */
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
  $handler->display->display_options['css_class'] = 'front-page';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = '';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Explore Projects</h2>
<h3>Fund and follow your favourite projects. Start your discovery!</h3>
<h4>Featured</h3>';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = '';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="clear-block">&nbsp;</div>';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = '';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = '<h3>No projects in this category</h3>';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<br>';
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
  /* Field: Content: Location (field_project_location) */
  $handler->display->display_options['fields']['field_project_location_value']['id'] = 'field_project_location_value';
  $handler->display->display_options['fields']['field_project_location_value']['table'] = 'node_data_field_project_location';
  $handler->display->display_options['fields']['field_project_location_value']['field'] = 'field_project_location_value';
  $handler->display->display_options['fields']['field_project_location_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['label_type'] = 'none';
  /* Field: Content: Percent pledged (field_project_percent_pledge) */
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['id'] = 'field_project_percent_pledge_value_1';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['table'] = 'node_data_field_project_percent_pledge';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['field'] = 'field_project_percent_pledge_value';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['empty'] = '0';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['format'] = 'computed_value';
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
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['element_default_classes'] = 1;
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
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['empty'] = '$0';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['format'] = 'nozeros';
  /* Field: Content: What is end date of your project to be funded? (field_project_end) */
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

return round(($timestamp - time()) / 86400);;
?>';
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
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

  /* Display: Front page */
  $handler = $view->new_display('page', 'Front page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'front-page';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
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
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
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
  /* Field: Content: Location (field_project_location) */
  $handler->display->display_options['fields']['field_project_location_value']['id'] = 'field_project_location_value';
  $handler->display->display_options['fields']['field_project_location_value']['table'] = 'node_data_field_project_location';
  $handler->display->display_options['fields']['field_project_location_value']['field'] = 'field_project_location_value';
  $handler->display->display_options['fields']['field_project_location_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['label_type'] = 'none';
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
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['id'] = 'field_project_percent_pledge_value_1';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['table'] = 'node_data_field_project_percent_pledge';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['field'] = 'field_project_percent_pledge_value';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['empty'] = '0';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['format'] = 'computed_value';
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
  /* Field: Content: What is end date of your project to be funded? (field_project_end) */
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

  /* Display: Page projects featured */
  $handler = $view->new_display('page', 'Page projects featured', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'front-page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = '';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Explore Projects</h2>
<h3>Fund and follow your favourite projects. Start your discovery!</h3>
<h4>Featured</h3>';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
  /* Filter: Node: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['path'] = 'projects';

  /* Display: New projects block */
  $handler = $view->new_display('block', 'New projects block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = '';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h4>New</h4>';
  $handler->display->display_options['header']['area']['format'] = '3';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
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
  /* Filter: Views: Views Exclude Previous */
  $handler->display->display_options['filters']['views_exclude_previous']['id'] = 'views_exclude_previous';
  $handler->display->display_options['filters']['views_exclude_previous']['table'] = 'node';
  $handler->display->display_options['filters']['views_exclude_previous']['field'] = 'views_exclude_previous';
  $handler->display->display_options['filters']['views_exclude_previous']['value'] = array(
    'viewed_row' => 'viewed_row',
  );

  /* Display: Category projects */
  $handler = $view->new_display('page', 'Category projects', 'page_3');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = '';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Explore Projects</h2>
<h3>Fund and follow your favourite projects. Start your discovery!</h3>';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = '';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = '<h3>Sorry, no projects in this category</h3>';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argument: Taxonomy: Term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vids'] = array(
    1 => 1,
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
  $handler->display->display_options['path'] = 'projects/category/%';

  /* Display: User projects */
  $handler = $view->new_display('page', 'User projects', 'page_4');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = '';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['tokenize'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<br>';
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
  /* Field: Content: Location (field_project_location) */
  $handler->display->display_options['fields']['field_project_location_value']['id'] = 'field_project_location_value';
  $handler->display->display_options['fields']['field_project_location_value']['table'] = 'node_data_field_project_location';
  $handler->display->display_options['fields']['field_project_location_value']['field'] = 'field_project_location_value';
  $handler->display->display_options['fields']['field_project_location_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['label_type'] = 'none';
  /* Field: Content: Percent pledged (field_project_percent_pledge) */
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['id'] = 'field_project_percent_pledge_value_1';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['table'] = 'node_data_field_project_percent_pledge';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['field'] = 'field_project_percent_pledge_value';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['empty'] = '0';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['format'] = 'computed_value';
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
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['element_default_classes'] = 1;
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
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['empty'] = '$0';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['format'] = 'nozeros';
  /* Field: Content: What is end date of your project to be funded? (field_project_end) */
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
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argument: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['wildcard'] = '';
  $handler->display->display_options['arguments']['uid']['wildcard_substitution'] = '';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['validate_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['restrict_roles'] = 0;
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
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
    'archive' => 'archive',
  );
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['reduce_duplicates'] = 0;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'account/%/projects-list';

  /* Display: Recently Started */
  $handler = $view->new_display('page', 'Recently Started', 'page_5');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = '';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Explore Projects</h2>
<h3>Fund and follow your favourite projects. Start your discovery!</h3>
<h4>Recently started projects</h3>';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<br>';
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
  /* Field: Content: Location (field_project_location) */
  $handler->display->display_options['fields']['field_project_location_value']['id'] = 'field_project_location_value';
  $handler->display->display_options['fields']['field_project_location_value']['table'] = 'node_data_field_project_location';
  $handler->display->display_options['fields']['field_project_location_value']['field'] = 'field_project_location_value';
  $handler->display->display_options['fields']['field_project_location_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['label_type'] = 'none';
  /* Field: Content: Percent pledged (field_project_percent_pledge) */
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['id'] = 'field_project_percent_pledge_value_1';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['table'] = 'node_data_field_project_percent_pledge';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['field'] = 'field_project_percent_pledge_value';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['empty'] = '0';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['format'] = 'computed_value';
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
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['element_default_classes'] = 1;
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
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['empty'] = '$0';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['format'] = 'nozeros';
  /* Field: Content: What is end date of your project to be funded? (field_project_end) */
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

return round(($timestamp - time()) / 86400);;
?>';
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'projects/recent';

  /* Display: Ending soon */
  $handler = $view->new_display('page', 'Ending soon', 'page_6');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = '';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Explore Projects</h2>
<h3>Fund and follow your favourite projects. Start your discovery!</h3>
<h4>Ending soon projects</h3>';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<br>';
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
  /* Field: Content: Location (field_project_location) */
  $handler->display->display_options['fields']['field_project_location_value']['id'] = 'field_project_location_value';
  $handler->display->display_options['fields']['field_project_location_value']['table'] = 'node_data_field_project_location';
  $handler->display->display_options['fields']['field_project_location_value']['field'] = 'field_project_location_value';
  $handler->display->display_options['fields']['field_project_location_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['label_type'] = 'none';
  /* Field: Content: Percent pledged (field_project_percent_pledge) */
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['id'] = 'field_project_percent_pledge_value_1';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['table'] = 'node_data_field_project_percent_pledge';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['field'] = 'field_project_percent_pledge_value';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['empty'] = '0';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['format'] = 'computed_value';
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
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['element_default_classes'] = 1;
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
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['empty'] = '$0';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['format'] = 'nozeros';
  /* Field: Content: What is end date of your project to be funded? (field_project_end) */
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
$dateTime = date_parse_from_format(\'Y-m-d\\TH:i:s\', $data->node_data_field_project_end_field_project_end_value);
$timestamp = mktime((int)$dateTime[\'hour\'], (int)$dateTime[\'minute\'], (int)$dateTime[\'second\'], (int)$dateTime[\'month\'], (int)$dateTime[\'day\'], (int)$dateTime[\'year\']);

return round(($timestamp - time()) / 86400);;
?>';
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: What is end date of your project to be funded? (field_project_end) */
  $handler->display->display_options['sorts']['field_project_end_value']['id'] = 'field_project_end_value';
  $handler->display->display_options['sorts']['field_project_end_value']['table'] = 'node_data_field_project_end';
  $handler->display->display_options['sorts']['field_project_end_value']['field'] = 'field_project_end_value';
  $handler->display->display_options['path'] = 'projects/ending';

  /* Display: Small projects */
  $handler = $view->new_display('page', 'Small projects', 'page_7');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = '';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Explore Projects</h2>
<h3>Fund and follow your favourite projects. Start your discovery!</h3>
<h4>Small projects</h3>';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<br>';
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
  /* Field: Content: Location (field_project_location) */
  $handler->display->display_options['fields']['field_project_location_value']['id'] = 'field_project_location_value';
  $handler->display->display_options['fields']['field_project_location_value']['table'] = 'node_data_field_project_location';
  $handler->display->display_options['fields']['field_project_location_value']['field'] = 'field_project_location_value';
  $handler->display->display_options['fields']['field_project_location_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_location_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_location_value']['label_type'] = 'none';
  /* Field: Content: Percent pledged (field_project_percent_pledge) */
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['id'] = 'field_project_percent_pledge_value_1';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['table'] = 'node_data_field_project_percent_pledge';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['field'] = 'field_project_percent_pledge_value';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['empty'] = '0';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_project_percent_pledge_value_1']['format'] = 'computed_value';
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
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_percent_pledge_value']['element_default_classes'] = 1;
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
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['empty'] = '$0';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_project_amount_pledge_amount']['format'] = 'nozeros';
  /* Field: Content: What is end date of your project to be funded? (field_project_end) */
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
$dateTime = date_parse_from_format(\'Y-m-d\\TH:i:s\', $data->node_data_field_project_amount_need_field_project_end_value);
$timestamp = mktime((int)$dateTime[\'hour\'], (int)$dateTime[\'minute\'], (int)$dateTime[\'second\'], (int)$dateTime[\'month\'], (int)$dateTime[\'day\'], (int)$dateTime[\'year\']);

return round(($timestamp - time()) / 86400);;
?>';
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
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
  /* Filter: Content: Amount needed (field_project_amount_need) - amount */
  $handler->display->display_options['filters']['field_project_amount_need_amount']['id'] = 'field_project_amount_need_amount';
  $handler->display->display_options['filters']['field_project_amount_need_amount']['table'] = 'node_data_field_project_amount_need';
  $handler->display->display_options['filters']['field_project_amount_need_amount']['field'] = 'field_project_amount_need_amount';
  $handler->display->display_options['filters']['field_project_amount_need_amount']['operator'] = '<=';
  $handler->display->display_options['filters']['field_project_amount_need_amount']['value']['value'] = '1000';
  $handler->display->display_options['filters']['field_project_amount_need_amount']['allow_null'] = 1;
  $handler->display->display_options['path'] = 'projects/small';

  /* Display: Staff picks */
  $handler = $view->new_display('page', 'Staff picks', 'page_8');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = '';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Explore Projects</h2>
<h3>Fund and follow your favourite projects. Start your discovery!</h3>
<h4>Staff picks</h3>';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
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
  /* Filter: Content: Staff pick (field_project_staff_pick) - Allowed values */
  $handler->display->display_options['filters']['field_project_staff_pick_value_many_to_one']['id'] = 'field_project_staff_pick_value_many_to_one';
  $handler->display->display_options['filters']['field_project_staff_pick_value_many_to_one']['table'] = 'node_data_field_project_staff_pick';
  $handler->display->display_options['filters']['field_project_staff_pick_value_many_to_one']['field'] = 'field_project_staff_pick_value_many_to_one';
  $handler->display->display_options['filters']['field_project_staff_pick_value_many_to_one']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_project_staff_pick_value_many_to_one']['reduce_duplicates'] = 0;
  $handler->display->display_options['path'] = 'projects/picked';

  /* Display: Location projects */
  $handler = $view->new_display('page', 'Location projects', 'page_9');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = '';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Explore Projects</h2>
<h3>Fund and follow your favourite projects. Start your discovery!</h3>';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argument: Content: Location (field_project_location) */
  $handler->display->display_options['arguments']['field_project_location_value']['id'] = 'field_project_location_value';
  $handler->display->display_options['arguments']['field_project_location_value']['table'] = 'node_data_field_project_location';
  $handler->display->display_options['arguments']['field_project_location_value']['field'] = 'field_project_location_value';
  $handler->display->display_options['arguments']['field_project_location_value']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['field_project_location_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_project_location_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_project_location_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_project_location_value']['ignorecase'] = 0;
  $handler->display->display_options['arguments']['field_project_location_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_project_location_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_project_location_value']['break_phrase'] = 0;
  $handler->display->display_options['path'] = 'projects/location/%';
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
    t('<h2>Explore Projects</h2>
<h3>Fund and follow your favourite projects. Start your discovery!</h3>
<h4>Featured</h3>'),
    t('<div class="clear-block">&nbsp;</div>'),
    t('<h3>No projects in this category</h3>'),
    t('nodes'),
    t('[field_project_percent_pledge_value]%
<div>funded</div>'),
    t('[field_project_amount_pledge_amount]
<div class="raised">raised</div>'),
    t('$0'),
    t('End date'),
    t('[phpcode]
<div class="days-left">days left</div>'),
    t('Front page'),
    t('by'),
    t('Page projects featured'),
    t('New projects block'),
    t('<h4>New</h4>'),
    t('Category projects'),
    t('<h2>Explore Projects</h2>
<h3>Fund and follow your favourite projects. Start your discovery!</h3>'),
    t('<h3>Sorry, no projects in this category</h3>'),
    t('All'),
    t('User projects'),
    t('Recently Started'),
    t('<h2>Explore Projects</h2>
<h3>Fund and follow your favourite projects. Start your discovery!</h3>
<h4>Recently started projects</h3>'),
    t('Ending soon'),
    t('<h2>Explore Projects</h2>
<h3>Fund and follow your favourite projects. Start your discovery!</h3>
<h4>Ending soon projects</h3>'),
    t('Small projects'),
    t('<h2>Explore Projects</h2>
<h3>Fund and follow your favourite projects. Start your discovery!</h3>
<h4>Small projects</h3>'),
    t('Staff picks'),
    t('<h2>Explore Projects</h2>
<h3>Fund and follow your favourite projects. Start your discovery!</h3>
<h4>Staff picks</h3>'),
    t('Location projects'),
    t('<h2>Explore Projects</h2>
<h3>Fund and follow your favourite projects. Start your discovery!</h3>'),
  );

  $views[$view->name] = $view;

  // Exported view: npo_project_proposals
  $view = new view;
  $view->name = 'npo_project_proposals';
  $view->description = '';
  $view->tag = 'proposal';
  $view->base_table = 'node';
  $view->human_name = 'NPO Projects and proposals';
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
    'created' => 'created',
    'title' => 'title',
    'field_proposal_body_value' => 'field_proposal_body_value',
    'field_proposal_project_funds_value' => 'field_proposal_project_funds_value',
    'field_proposal_status_value' => 'field_proposal_status_value',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_proposal_body_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_proposal_project_funds_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_proposal_status_value' => array(
      'sortable' => 0,
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] <div class="created">[created]</div>';
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
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y';
  /* Field: Content: Project funds (field_proposal_project_funds) */
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['id'] = 'field_proposal_project_funds_value';
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['table'] = 'node_data_field_proposal_project_funds';
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['field'] = 'field_proposal_project_funds_value';
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
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['label_type'] = 'none';
  /* Field: Content: Project Proposal (field_proposal_body) */
  $handler->display->display_options['fields']['field_proposal_body_value']['id'] = 'field_proposal_body_value';
  $handler->display->display_options['fields']['field_proposal_body_value']['table'] = 'node_data_field_proposal_body';
  $handler->display->display_options['fields']['field_proposal_body_value']['field'] = 'field_proposal_body_value';
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['label_type'] = 'none';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title] [created]
[field_proposal_project_funds_value]
[field_proposal_body_value]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 1;
  /* Field: Content: Status (field_proposal_status) */
  $handler->display->display_options['fields']['field_proposal_status_value']['id'] = 'field_proposal_status_value';
  $handler->display->display_options['fields']['field_proposal_status_value']['table'] = 'node_data_field_proposal_status';
  $handler->display->display_options['fields']['field_proposal_status_value']['field'] = 'field_proposal_status_value';
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
  $handler->display->display_options['fields']['field_proposal_status_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_proposal_status_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_proposal_status_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_proposal_status_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_proposal_status_value']['label_type'] = 'none';
  /* Sort criterion: Content: Status (field_proposal_status) */
  $handler->display->display_options['sorts']['field_proposal_status_value']['id'] = 'field_proposal_status_value';
  $handler->display->display_options['sorts']['field_proposal_status_value']['table'] = 'node_data_field_proposal_status';
  $handler->display->display_options['sorts']['field_proposal_status_value']['field'] = 'field_proposal_status_value';
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
    'project_request' => 'project_request',
  );
  /* Filter: Content: Status (field_proposal_status) - Allowed values */
  $handler->display->display_options['filters']['field_proposal_status_value_many_to_one']['id'] = 'field_proposal_status_value_many_to_one';
  $handler->display->display_options['filters']['field_proposal_status_value_many_to_one']['table'] = 'node_data_field_proposal_status';
  $handler->display->display_options['filters']['field_proposal_status_value_many_to_one']['field'] = 'field_proposal_status_value_many_to_one';
  $handler->display->display_options['filters']['field_proposal_status_value_many_to_one']['value'] = array(
    'new' => 'new',
    'review' => 'review',
    'approve' => 'approve',
  );
  $handler->display->display_options['filters']['field_proposal_status_value_many_to_one']['reduce_duplicates'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'proposals';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = '';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No active proposals, you can create new one. <?php print l(t(\'Create proposal\'), \'project/terms\', array(\'attributes\' => array(\'class\' => \'title-link weeve-medium-button\'))); ?>';
  $handler->display->display_options['empty']['area']['format'] = '3';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
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
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] <div class="created">[created]</div>';
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
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y';
  /* Field: Content: Project funds (field_proposal_project_funds) */
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['id'] = 'field_proposal_project_funds_value';
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['table'] = 'node_data_field_proposal_project_funds';
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['field'] = 'field_proposal_project_funds_value';
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_proposal_project_funds_value']['label_type'] = 'none';
  /* Field: Content: Project Proposal (field_proposal_body) */
  $handler->display->display_options['fields']['field_proposal_body_value']['id'] = 'field_proposal_body_value';
  $handler->display->display_options['fields']['field_proposal_body_value']['table'] = 'node_data_field_proposal_body';
  $handler->display->display_options['fields']['field_proposal_body_value']['field'] = 'field_proposal_body_value';
  $handler->display->display_options['fields']['field_proposal_body_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['preserve_tags'] = '<p><br><div><span>';
  $handler->display->display_options['fields']['field_proposal_body_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value']['label_type'] = 'none';
  /* Field: Content: Project Proposal (field_proposal_body) */
  $handler->display->display_options['fields']['field_proposal_body_value_1']['id'] = 'field_proposal_body_value_1';
  $handler->display->display_options['fields']['field_proposal_body_value_1']['table'] = 'node_data_field_proposal_body';
  $handler->display->display_options['fields']['field_proposal_body_value_1']['field'] = 'field_proposal_body_value';
  $handler->display->display_options['fields']['field_proposal_body_value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_proposal_body_value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['alter']['preserve_tags'] = '<p><br><div><span>';
  $handler->display->display_options['fields']['field_proposal_body_value_1']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_proposal_body_value_1']['label_type'] = 'none';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="title">[title] <div class="created">[created]</div></div>
<div class="money">[field_proposal_project_funds_value]</div>
<div class="body_small">[field_proposal_body_value_1]</div>
<div class="body">[field_proposal_body_value]</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 1;
  /* Field: Content: Status (field_proposal_status) */
  $handler->display->display_options['fields']['field_proposal_status_value']['id'] = 'field_proposal_status_value';
  $handler->display->display_options['fields']['field_proposal_status_value']['table'] = 'node_data_field_proposal_status';
  $handler->display->display_options['fields']['field_proposal_status_value']['field'] = 'field_proposal_status_value';
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
  $handler->display->display_options['fields']['field_proposal_status_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_proposal_status_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_proposal_status_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_proposal_status_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_proposal_status_value']['label_type'] = 'none';
  $handler->display->display_options['path'] = 'my-projects';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'pending projects';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'projects';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = '';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h3>Pending Project Creations</h3>
This is the list of your projects that have been accepted as proposals and now are pending as official projects. We just need to verify the content before the project goes live! ';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = '';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<h3>Pending Project Proposals</h3>
This is the list of your project proposals. Once your project has been reviewed and accepted, you can go ahead and click on the \'Create Project\' button and get started! ';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] <div class="created">[created]</div>';
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
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y';
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p><br><div><span>';
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  /* Field: Trimmed body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['ui_name'] = 'Trimmed body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['preserve_tags'] = '<p><br><div><span>';
  $handler->display->display_options['fields']['body_1']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body_1']['hide_alter_empty'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="title">[title] <div class="created">[created]</div></div>
<div class="body_small">[body_1]</div>
<div class="body">[body]</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 1;
  /* Field: Content: Status (field_project_status) */
  $handler->display->display_options['fields']['field_project_status_value']['id'] = 'field_project_status_value';
  $handler->display->display_options['fields']['field_project_status_value']['table'] = 'node_data_field_project_status';
  $handler->display->display_options['fields']['field_project_status_value']['field'] = 'field_project_status_value';
  $handler->display->display_options['fields']['field_project_status_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_status_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_status_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_status_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_project_status_value']['label_type'] = 'none';
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
    'review' => 'review',
  );
  $handler->display->display_options['filters']['field_project_status_value_many_to_one']['reduce_duplicates'] = 0;
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );
  $translatables['npo_project_proposals'] = array(
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
    t('[title] <div class="created">[created]</div>'),
    t('[title] [created]
[field_proposal_project_funds_value]
[field_proposal_body_value]'),
    t('All'),
    t('Page'),
    t('No active proposals, you can create new one. <?php print l(t(\'Create proposal\'), \'project/terms\', array(\'attributes\' => array(\'class\' => \'title-link weeve-medium-button\'))); ?>'),
    t('<div class="title">[title] <div class="created">[created]</div></div>
<div class="money">[field_proposal_project_funds_value]</div>
<div class="body_small">[field_proposal_body_value_1]</div>
<div class="body">[field_proposal_body_value]</div>'),
    t('Attachment'),
    t('<h3>Pending Project Creations</h3>
This is the list of your projects that have been accepted as proposals and now are pending as official projects. We just need to verify the content before the project goes live! '),
    t('<h3>Pending Project Proposals</h3>
This is the list of your project proposals. Once your project has been reviewed and accepted, you can go ahead and click on the \'Create Project\' button and get started! '),
    t('<div class="title">[title] <div class="created">[created]</div></div>
<div class="body_small">[body_1]</div>
<div class="body">[body]</div>'),
  );

  $views[$view->name] = $view;

  // Exported view: project_categories
  $view = new view;
  $view->name = 'project_categories';
  $view->description = '';
  $view->tag = 'project';
  $view->base_table = 'term_data';
  $view->human_name = 'Project categories';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy: Term */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
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
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Filter: Taxonomy: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    1 => '1',
  );

  /* Display: Category listing */
  $handler = $view->new_display('block', 'Category listing', 'block_1');
  $translatables['project_categories'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Category listing'),
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
  /* Relationship: Comment: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'comments';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'User comment';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = '';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No comments yet';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['path'] = 'project/%/comments';
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
    t('User comment'),
    t('by '),
    t('Page'),
    t('No comments yet'),
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
  /* Sort criterion: Node: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = '';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<?php
$nid = arg(1);

$node = node_load($nid);

global $user;

if ($user->uid == $node->uid) {
  return l(t(\'Add update\'), \'node/add/project-update/\' . $nid, array(\'attributes\' => array(\'class\' => \'weeve-medium-button\')));
}
?>';
  $handler->display->display_options['header']['area']['format'] = '3';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
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
    t('<?php
$nid = arg(1);

$node = node_load($nid);

global $user;

if ($user->uid == $node->uid) {
  return l(t(\'Add update\'), \'node/add/project-update/\' . $nid, array(\'attributes\' => array(\'class\' => \'weeve-medium-button\')));
}
?>'),
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
