<?php
/**
 * @file
 * whiwh_in_the_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function whiwh_in_the_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function whiwh_in_the_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function whiwh_in_the_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('In The News'),
      'base' => 'node_content',
      'description' => t('In The News item'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
