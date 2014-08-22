<?php
/**
 * @file
 * paris_main.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function paris_main_user_default_roles() {
  $roles = array();

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 4,
  );

  // Exported role: Writer.
  $roles['Writer'] = array(
    'name' => 'Writer',
    'weight' => 3,
  );

  return $roles;
}
