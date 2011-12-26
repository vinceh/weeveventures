<?php

/**
 * Implementation of hook_user_default_roles().
 */
function weeve_feature_user_default_roles() {
  $roles = array();

  // Exported role: admin
  $roles['admin'] = array(
    'name' => 'admin',
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  // Exported role: corporate
  $roles['corporate'] = array(
    'name' => 'corporate',
  );

  // Exported role: npo
  $roles['npo'] = array(
    'name' => 'npo',
  );

  // Exported role: user
  $roles['user'] = array(
    'name' => 'user',
  );

  return $roles;
}
