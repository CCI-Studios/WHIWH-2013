<?php
/**
 * @file
 * whiwh_staff_and_board_files.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function whiwh_staff_and_board_files_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-board_private_file-field_board_file'
  $field_instances['node-board_private_file-field_board_file'] = array(
    'bundle' => 'board_private_file',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_file',
    'label' => 'Board Private File',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'board_files',
      'file_extensions' => 'txt pdf png jpg jpeg gif doc docx xls xlsx ppt pptx',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_filefield_widget',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_mfw',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-board_private_file-field_description'
  $field_instances['node-board_private_file-field_description'] = array(
    'bundle' => 'board_private_file',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-staff_private_file-field_description'
  $field_instances['node-staff_private_file-field_description'] = array(
    'bundle' => 'staff_private_file',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-staff_private_file-field_staff_file'
  $field_instances['node-staff_private_file-field_staff_file'] = array(
    'bundle' => 'staff_private_file',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_staff_file',
    'label' => 'staff_file',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'staff_files',
      'file_extensions' => 'txt pdf png jpg jpeg gif doc docx xls xlsx ppt pptx',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_filefield_widget',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_mfw',
      'weight' => 33,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Board Private File');
  t('Description');
  t('staff_file');

  return $field_instances;
}
