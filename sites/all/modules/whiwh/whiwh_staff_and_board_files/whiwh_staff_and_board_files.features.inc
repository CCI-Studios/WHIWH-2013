<?php
/**
 * @file
 * whiwh_staff_and_board_files.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function whiwh_staff_and_board_files_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function whiwh_staff_and_board_files_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function whiwh_staff_and_board_files_node_info() {
  $items = array(
    'board_private_file' => array(
      'name' => t('Board Private File'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'staff_private_file' => array(
      'name' => t('Staff Private File'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
