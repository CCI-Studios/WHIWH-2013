<?php
/**
 * @file
 * whiwh_staff_and_board_files.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function whiwh_staff_and_board_files_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu:board
  $menu_links['user-menu:board'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'board',
    'router_path' => 'board',
    'link_title' => 'Board',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: user-menu:staff-files
  $menu_links['user-menu:staff-files'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'staff-files',
    'router_path' => 'staff-files',
    'link_title' => 'Staff',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Board');
  t('Staff');


  return $menu_links;
}
