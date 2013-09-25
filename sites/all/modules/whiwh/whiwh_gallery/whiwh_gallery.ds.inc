<?php
/**
 * @file
 * whiwh_gallery.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function whiwh_gallery_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gallery_image|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gallery_image';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_gallery_image',
      ),
    ),
    'fields' => array(
      'field_gallery_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|gallery_image|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gallery_image|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gallery_image';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_gallery_image',
      ),
    ),
    'fields' => array(
      'field_gallery_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|gallery_image|teaser'] = $ds_layout;

  return $export;
}
