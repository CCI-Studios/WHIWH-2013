<?php
/**
 * @file
 * whiwh_staff_and_board_files.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function whiwh_staff_and_board_files_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create board_private_file content'.
  $permissions['create board_private_file content'] = array(
    'name' => 'create board_private_file content',
    'roles' => array(
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create staff_private_file content'.
  $permissions['create staff_private_file content'] = array(
    'name' => 'create staff_private_file content',
    'roles' => array(
      'staff member' => 'staff member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any board_private_file content'.
  $permissions['delete any board_private_file content'] = array(
    'name' => 'delete any board_private_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any staff_private_file content'.
  $permissions['delete any staff_private_file content'] = array(
    'name' => 'delete any staff_private_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own board_private_file content'.
  $permissions['delete own board_private_file content'] = array(
    'name' => 'delete own board_private_file content',
    'roles' => array(
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own staff_private_file content'.
  $permissions['delete own staff_private_file content'] = array(
    'name' => 'delete own staff_private_file content',
    'roles' => array(
      'staff member' => 'staff member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any board_private_file content'.
  $permissions['edit any board_private_file content'] = array(
    'name' => 'edit any board_private_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any staff_private_file content'.
  $permissions['edit any staff_private_file content'] = array(
    'name' => 'edit any staff_private_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own board_private_file content'.
  $permissions['edit own board_private_file content'] = array(
    'name' => 'edit own board_private_file content',
    'roles' => array(
      'board member' => 'board member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own staff_private_file content'.
  $permissions['edit own staff_private_file content'] = array(
    'name' => 'edit own staff_private_file content',
    'roles' => array(
      'staff member' => 'staff member',
    ),
    'module' => 'node',
  );

  return $permissions;
}
