<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function weeve_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: Media Mover delete own file
  $permissions['Media Mover delete own file'] = array(
    'name' => 'Media Mover delete own file',
    'roles' => array(),
  );

  // Exported permission: Use PHP input for field settings (dangerous - grant with care)
  $permissions['Use PHP input for field settings (dangerous - grant with care)'] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: access administration menu
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: access all webform results
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(),
  );

  // Exported permission: access backup and migrate
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: access backup files
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: access ckeditor
  $permissions['access ckeditor'] = array(
    'name' => 'access ckeditor',
    'roles' => array(
      '0' => 'admin',
      '1' => 'npo',
    ),
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: access devel information
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'corporate',
      '4' => 'npo',
      '5' => 'user',
    ),
  );

  // Exported permission: access own webform results
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(),
  );

  // Exported permission: access own webform submissions
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer backup and migrate
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer ckeditor
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer date tools
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer imageapi
  $permissions['administer imageapi'] = array(
    'name' => 'administer imageapi',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer imagecache
  $permissions['administer imagecache'] = array(
    'name' => 'administer imagecache',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer languages
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer media_mover
  $permissions['administer media_mover'] = array(
    'name' => 'administer media_mover',
    'roles' => array(),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer own media_mover files
  $permissions['administer own media_mover files'] = array(
    'name' => 'administer own media_mover files',
    'roles' => array(),
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer rules
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer taxonomy view integrator
  $permissions['administer taxonomy view integrator'] = array(
    'name' => 'administer taxonomy view integrator',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer uploaded videos
  $permissions['administer uploaded videos'] = array(
    'name' => 'administer uploaded videos',
    'roles' => array(),
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer video upload settings
  $permissions['administer video upload settings'] = array(
    'name' => 'administer video upload settings',
    'roles' => array(),
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: allow CKFinder file uploads
  $permissions['allow CKFinder file uploads'] = array(
    'name' => 'allow CKFinder file uploads',
    'roles' => array(
      '0' => 'admin',
      '1' => 'npo',
    ),
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: configure default number format
  $permissions['configure default number format'] = array(
    'name' => 'configure default number format',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(),
  );

  // Exported permission: create profile content
  $permissions['create profile content'] = array(
    'name' => 'create profile content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create project content
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(
      '0' => 'npo',
    ),
  );

  // Exported permission: create project_request content
  $permissions['create project_request content'] = array(
    'name' => 'create project_request content',
    'roles' => array(
      '0' => 'npo',
    ),
  );

  // Exported permission: create project_update content
  $permissions['create project_update content'] = array(
    'name' => 'create project_update content',
    'roles' => array(
      '0' => 'npo',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create webform content
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
  );

  // Exported permission: delete all webform submissions
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(),
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(),
  );

  // Exported permission: delete any profile content
  $permissions['delete any profile content'] = array(
    'name' => 'delete any profile content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete any project content
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(),
  );

  // Exported permission: delete any project_request content
  $permissions['delete any project_request content'] = array(
    'name' => 'delete any project_request content',
    'roles' => array(),
  );

  // Exported permission: delete backup files
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(),
  );

  // Exported permission: delete own profile content
  $permissions['delete own profile content'] = array(
    'name' => 'delete own profile content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own project content
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(),
  );

  // Exported permission: delete own project_request content
  $permissions['delete own project_request content'] = array(
    'name' => 'delete own project_request content',
    'roles' => array(
      '0' => 'npo',
    ),
  );

  // Exported permission: delete own webform submissions
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
  );

  // Exported permission: display drupal links
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: display source code
  $permissions['display source code'] = array(
    'name' => 'display source code',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit all webform submissions
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(),
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(),
  );

  // Exported permission: edit any profile content
  $permissions['edit any profile content'] = array(
    'name' => 'edit any profile content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit any project content
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(),
  );

  // Exported permission: edit any project_request content
  $permissions['edit any project_request content'] = array(
    'name' => 'edit any project_request content',
    'roles' => array(),
  );

  // Exported permission: edit field_account_type
  $permissions['edit field_account_type'] = array(
    'name' => 'edit field_account_type',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit field_location
  $permissions['edit field_location'] = array(
    'name' => 'edit field_location',
    'roles' => array(),
  );

  // Exported permission: edit field_node_weight
  $permissions['edit field_node_weight'] = array(
    'name' => 'edit field_node_weight',
    'roles' => array(),
  );

  // Exported permission: edit field_npo_about
  $permissions['edit field_npo_about'] = array(
    'name' => 'edit field_npo_about',
    'roles' => array(),
  );

  // Exported permission: edit field_npo_bio
  $permissions['edit field_npo_bio'] = array(
    'name' => 'edit field_npo_bio',
    'roles' => array(),
  );

  // Exported permission: edit field_npo_code
  $permissions['edit field_npo_code'] = array(
    'name' => 'edit field_npo_code',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit field_npo_name
  $permissions['edit field_npo_name'] = array(
    'name' => 'edit field_npo_name',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit field_npo_number
  $permissions['edit field_npo_number'] = array(
    'name' => 'edit field_npo_number',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit field_npo_representative_name
  $permissions['edit field_npo_representative_name'] = array(
    'name' => 'edit field_npo_representative_name',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit field_npo_website
  $permissions['edit field_npo_website'] = array(
    'name' => 'edit field_npo_website',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit field_project_amount_need
  $permissions['edit field_project_amount_need'] = array(
    'name' => 'edit field_project_amount_need',
    'roles' => array(
      '0' => 'admin',
      '1' => 'npo',
    ),
  );

  // Exported permission: edit field_project_amount_pledge
  $permissions['edit field_project_amount_pledge'] = array(
    'name' => 'edit field_project_amount_pledge',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit field_project_donors
  $permissions['edit field_project_donors'] = array(
    'name' => 'edit field_project_donors',
    'roles' => array(),
  );

  // Exported permission: edit field_project_end
  $permissions['edit field_project_end'] = array(
    'name' => 'edit field_project_end',
    'roles' => array(
      '0' => 'admin',
      '1' => 'npo',
    ),
  );

  // Exported permission: edit field_project_image
  $permissions['edit field_project_image'] = array(
    'name' => 'edit field_project_image',
    'roles' => array(
      '0' => 'admin',
      '1' => 'npo',
    ),
  );

  // Exported permission: edit field_project_location
  $permissions['edit field_project_location'] = array(
    'name' => 'edit field_project_location',
    'roles' => array(
      '0' => 'admin',
      '1' => 'npo',
    ),
  );

  // Exported permission: edit field_project_percent_pledge
  $permissions['edit field_project_percent_pledge'] = array(
    'name' => 'edit field_project_percent_pledge',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit field_project_proposal
  $permissions['edit field_project_proposal'] = array(
    'name' => 'edit field_project_proposal',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit field_project_staff_pick
  $permissions['edit field_project_staff_pick'] = array(
    'name' => 'edit field_project_staff_pick',
    'roles' => array(),
  );

  // Exported permission: edit field_project_status
  $permissions['edit field_project_status'] = array(
    'name' => 'edit field_project_status',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit field_project_updates
  $permissions['edit field_project_updates'] = array(
    'name' => 'edit field_project_updates',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit field_project_video
  $permissions['edit field_project_video'] = array(
    'name' => 'edit field_project_video',
    'roles' => array(
      '0' => 'admin',
      '1' => 'npo',
    ),
  );

  // Exported permission: edit field_project_video_embed
  $permissions['edit field_project_video_embed'] = array(
    'name' => 'edit field_project_video_embed',
    'roles' => array(
      '0' => 'admin',
      '1' => 'npo',
    ),
  );

  // Exported permission: edit field_proposal_back
  $permissions['edit field_proposal_back'] = array(
    'name' => 'edit field_proposal_back',
    'roles' => array(
      '0' => 'admin',
      '1' => 'npo',
    ),
  );

  // Exported permission: edit field_proposal_body
  $permissions['edit field_proposal_body'] = array(
    'name' => 'edit field_proposal_body',
    'roles' => array(
      '0' => 'admin',
      '1' => 'npo',
    ),
  );

  // Exported permission: edit field_proposal_links
  $permissions['edit field_proposal_links'] = array(
    'name' => 'edit field_proposal_links',
    'roles' => array(
      '0' => 'admin',
      '1' => 'npo',
    ),
  );

  // Exported permission: edit field_proposal_project
  $permissions['edit field_proposal_project'] = array(
    'name' => 'edit field_proposal_project',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit field_proposal_project_funds
  $permissions['edit field_proposal_project_funds'] = array(
    'name' => 'edit field_proposal_project_funds',
    'roles' => array(
      '0' => 'admin',
      '1' => 'npo',
    ),
  );

  // Exported permission: edit field_proposal_status
  $permissions['edit field_proposal_status'] = array(
    'name' => 'edit field_proposal_status',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit field_update_project
  $permissions['edit field_update_project'] = array(
    'name' => 'edit field_update_project',
    'roles' => array(
      '0' => 'admin',
      '1' => 'npo',
    ),
  );

  // Exported permission: edit field_user_full_name
  $permissions['edit field_user_full_name'] = array(
    'name' => 'edit field_user_full_name',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(),
  );

  // Exported permission: edit own profile content
  $permissions['edit own profile content'] = array(
    'name' => 'edit own profile content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit own project content
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(),
  );

  // Exported permission: edit own project_request content
  $permissions['edit own project_request content'] = array(
    'name' => 'edit own project_request content',
    'roles' => array(),
  );

  // Exported permission: edit own webform submissions
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(),
  );

  // Exported permission: execute php code
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: flush imagecache
  $permissions['flush imagecache'] = array(
    'name' => 'flush imagecache',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: perform backup
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: post comments without approval
  $permissions['post comments without approval'] = array(
    'name' => 'post comments without approval',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: restore from backup
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(),
  );

  // Exported permission: see media mover alerts
  $permissions['see media mover alerts'] = array(
    'name' => 'see media mover alerts',
    'roles' => array(),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: switch users
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: translate interface
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: upload files
  $permissions['upload files'] = array(
    'name' => 'upload files',
    'roles' => array(
      '0' => 'admin',
      '1' => 'npo',
    ),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: use currency
  $permissions['use currency'] = array(
    'name' => 'use currency',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: use views exporter
  $permissions['use views exporter'] = array(
    'name' => 'use views exporter',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view date repeats
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view field_account_type
  $permissions['view field_account_type'] = array(
    'name' => 'view field_account_type',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_location
  $permissions['view field_location'] = array(
    'name' => 'view field_location',
    'roles' => array(),
  );

  // Exported permission: view field_node_weight
  $permissions['view field_node_weight'] = array(
    'name' => 'view field_node_weight',
    'roles' => array(),
  );

  // Exported permission: view field_npo_about
  $permissions['view field_npo_about'] = array(
    'name' => 'view field_npo_about',
    'roles' => array(),
  );

  // Exported permission: view field_npo_bio
  $permissions['view field_npo_bio'] = array(
    'name' => 'view field_npo_bio',
    'roles' => array(),
  );

  // Exported permission: view field_npo_code
  $permissions['view field_npo_code'] = array(
    'name' => 'view field_npo_code',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_npo_name
  $permissions['view field_npo_name'] = array(
    'name' => 'view field_npo_name',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_npo_number
  $permissions['view field_npo_number'] = array(
    'name' => 'view field_npo_number',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_npo_representative_name
  $permissions['view field_npo_representative_name'] = array(
    'name' => 'view field_npo_representative_name',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_npo_website
  $permissions['view field_npo_website'] = array(
    'name' => 'view field_npo_website',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_project_amount_need
  $permissions['view field_project_amount_need'] = array(
    'name' => 'view field_project_amount_need',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_project_amount_pledge
  $permissions['view field_project_amount_pledge'] = array(
    'name' => 'view field_project_amount_pledge',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_project_donors
  $permissions['view field_project_donors'] = array(
    'name' => 'view field_project_donors',
    'roles' => array(),
  );

  // Exported permission: view field_project_end
  $permissions['view field_project_end'] = array(
    'name' => 'view field_project_end',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_project_image
  $permissions['view field_project_image'] = array(
    'name' => 'view field_project_image',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_project_location
  $permissions['view field_project_location'] = array(
    'name' => 'view field_project_location',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_project_percent_pledge
  $permissions['view field_project_percent_pledge'] = array(
    'name' => 'view field_project_percent_pledge',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_project_proposal
  $permissions['view field_project_proposal'] = array(
    'name' => 'view field_project_proposal',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_project_staff_pick
  $permissions['view field_project_staff_pick'] = array(
    'name' => 'view field_project_staff_pick',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view field_project_status
  $permissions['view field_project_status'] = array(
    'name' => 'view field_project_status',
    'roles' => array(
      '0' => 'npo',
    ),
  );

  // Exported permission: view field_project_updates
  $permissions['view field_project_updates'] = array(
    'name' => 'view field_project_updates',
    'roles' => array(),
  );

  // Exported permission: view field_project_video
  $permissions['view field_project_video'] = array(
    'name' => 'view field_project_video',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_project_video_embed
  $permissions['view field_project_video_embed'] = array(
    'name' => 'view field_project_video_embed',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_proposal_back
  $permissions['view field_proposal_back'] = array(
    'name' => 'view field_proposal_back',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_proposal_body
  $permissions['view field_proposal_body'] = array(
    'name' => 'view field_proposal_body',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_proposal_links
  $permissions['view field_proposal_links'] = array(
    'name' => 'view field_proposal_links',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_proposal_project
  $permissions['view field_proposal_project'] = array(
    'name' => 'view field_proposal_project',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_proposal_project_funds
  $permissions['view field_proposal_project_funds'] = array(
    'name' => 'view field_proposal_project_funds',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_proposal_status
  $permissions['view field_proposal_status'] = array(
    'name' => 'view field_proposal_status',
    'roles' => array(
      '0' => 'admin',
      '1' => 'npo',
    ),
  );

  // Exported permission: view field_update_project
  $permissions['view field_update_project'] = array(
    'name' => 'view field_update_project',
    'roles' => array(
      '0' => 'admin',
      '1' => 'npo',
    ),
  );

  // Exported permission: view field_user_full_name
  $permissions['view field_user_full_name'] = array(
    'name' => 'view field_user_full_name',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache scale_crop_200px
  $permissions['view imagecache scale_crop_200px'] = array(
    'name' => 'view imagecache scale_crop_200px',
    'roles' => array(),
  );

  // Exported permission: view imagecache scale_crop_215x150
  $permissions['view imagecache scale_crop_215x150'] = array(
    'name' => 'view imagecache scale_crop_215x150',
    'roles' => array(),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(),
  );

  // Exported permission: view uploaded files
  $permissions['view uploaded files'] = array(
    'name' => 'view uploaded files',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  return $permissions;
}
