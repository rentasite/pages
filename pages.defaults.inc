<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _pages_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _pages_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer menu
  $permissions[] = array(
    'name' => 'administer menu',
    'roles' => array(
      '0' => 'pages',
    ),
  );

  // Exported permission: create page content
  $permissions[] = array(
    'name' => 'create page content',
    'roles' => array(
      '0' => 'pages',
    ),
  );

  // Exported permission: create url aliases
  $permissions[] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'pages',
    ),
  );

  // Exported permission: delete any page content
  $permissions[] = array(
    'name' => 'delete any page content',
    'roles' => array(
      '0' => 'pages',
    ),
  );

  // Exported permission: delete own page content
  $permissions[] = array(
    'name' => 'delete own page content',
    'roles' => array(
      '0' => 'pages',
    ),
  );

  // Exported permission: edit any page content
  $permissions[] = array(
    'name' => 'edit any page content',
    'roles' => array(
      '0' => 'pages',
    ),
  );

  // Exported permission: edit own page content
  $permissions[] = array(
    'name' => 'edit own page content',
    'roles' => array(
      '0' => 'pages',
    ),
  );

  // Exported permission: use admin toolbar
  $permissions[] = array(
    'name' => 'use admin toolbar',
    'roles' => array(
      '0' => 'pages',
    ),
  );

  return $permissions;
}
