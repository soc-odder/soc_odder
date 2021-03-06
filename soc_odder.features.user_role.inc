<?php
/**
 * @file
 * soc_odder.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function soc_odder_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '3',
  );

  return $roles;
}
