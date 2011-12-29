<?php

function CheckAuthentication() {
  static $authenticated;

  if (!isset($authenticated)) {
    if (!empty($_SERVER['SCRIPT_FILENAME'])) {
      $drupal_path = dirname($_SERVER['SCRIPT_FILENAME']);
      if (!file_exists($drupal_path . '/includes/bootstrap.inc')) {
        $drupal_path = dirname(dirname(dirname($_SERVER['SCRIPT_FILENAME'])));
        $depth = 2;
        do {
          $drupal_path = dirname($drupal_path);
          $depth++;
        } while (!($bootstrap_file_found = file_exists($drupal_path . '/includes/bootstrap.inc')) && $depth < 10);
      }
    }

    if (!isset($bootstrap_file_found) || !$bootstrap_file_found) {
      //$drupal_path = '';
      if (!file_exists($drupal_path . '/includes/bootstrap.inc')) {
        $drupal_path = '../..';
        do {
          $drupal_path .= '/..';
          $depth = substr_count($drupal_path, '..');
        } while (!($bootstrap_file_found = file_exists($drupal_path . '/includes/bootstrap.inc')) && $depth < 10);
      }
    }
    
    if (!isset($bootstrap_file_found) || $bootstrap_file_found) {
      $current_cwd = getcwd();
      chdir($drupal_path);
      
      require_once './includes/bootstrap.inc';
      drupal_bootstrap(8);
      $authenticated = user_access('upload files');
      chdir($current_cwd);
    }
  }
  return $authenticated;
}

$auth = CheckAuthentication();

global $user;

if ($auth) {
  $callback = $_GET['CKEditorFuncNum'];
  $file_name = $_FILES['upload']['name'];
  $file_name_tmp = $_FILES['upload']['tmp_name'];
  $file_new_name = trim($_SERVER['DOCUMENT_ROOT'], '/') . '/sites/default/files/npo_projects/' . $user->uid . '/files/';

  if (!is_dir(trim($_SERVER['DOCUMENT_ROOT'], '/') . '/sites/default/files/npo_projects/' . $user->uid . '/')) {
    mkdir($file_new_name, 0777, true);
  }

  if (!is_dir($file_new_name)) {
    mkdir($file_new_name, 0777);
  }

  $full_path = $file_new_name . $file_name;
  $http_path = base_path() . 'sites/default/files/npo_projects/' . $user->uid . '/files/' . $file_name;
  $error = '';
  if (move_uploaded_file($file_name_tmp, $full_path)) {

  } else {
    $error = 'Some error occured please try again later';
    $http_path = '';
  }
} else {
  $error = 'You are not authorized to do this operation';
  $http_path = '';
}
echo "<script type=\"text/javascript\">window.parent.CKEDITOR.tools.callFunction(" . $callback . ",  \"" . $http_path . "\", \"" . $error . "\" );</script>";