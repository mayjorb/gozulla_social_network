<?php
/**
 * @file
 * social_network_links.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function social_network_links_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function social_network_links_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function social_network_links_node_info() {
  $items = array(
    'social_network' => array(
      'name' => t('Social Network'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
