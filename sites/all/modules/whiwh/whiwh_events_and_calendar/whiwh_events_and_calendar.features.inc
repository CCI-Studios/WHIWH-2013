<?php
/**
 * @file
 * whiwh_events_and_calendar.features.inc
 */

/**
 * Implements hook_views_api().
 */
function whiwh_events_and_calendar_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function whiwh_events_and_calendar_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Calendar Event'),
      'base' => 'node_content',
      'description' => t('Event that appears in the calendar and the Upcoming Events block'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
