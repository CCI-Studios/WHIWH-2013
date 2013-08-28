<?php
/**
 * @file
 * whiwh_staff_and_board_files.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function whiwh_staff_and_board_files_user_default_roles() {
  $roles = array();

  // Exported role: board member.
  $roles['board member'] = array(
    'name' => 'board member',
    'weight' => 2,
  );

  // Exported role: staff member.
  $roles['staff member'] = array(
    'name' => 'staff member',
    'weight' => 3,
  );

  return $roles;
}
