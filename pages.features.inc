<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function pages_ctools_plugin_api() {
  module_load_include('inc', 'pages', 'pages.defaults');
  $args = func_get_args();
  return call_user_func_array('_pages_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function pages_node_info() {
  module_load_include('inc', 'pages', 'pages.features.node');
  $args = func_get_args();
  return call_user_func_array('_pages_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function pages_user_default_permissions() {
  module_load_include('inc', 'pages', 'pages.defaults');
  $args = func_get_args();
  return call_user_func_array('_pages_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function pages_strongarm() {
  module_load_include('inc', 'pages', 'pages.defaults');
  $args = func_get_args();
  return call_user_func_array('_pages_strongarm', $args);
}
