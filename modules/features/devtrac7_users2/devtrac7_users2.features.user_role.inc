<?php
/**
 * @file
 * devtrac7_users2.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function devtrac7_users2_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
//  $roles['administrator'] = array(
//    'name' => 'administrator',
//    'weight' => 0,
//  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 0,
  );

  // Exported role: unicef user.
  $roles['unicef user'] = array(
    'name' => 'unicef user',
    'weight' => 0,
  );

  // Exported role: unicef user (Mobile).
//  $roles['unicef user (Mobile)'] = array(
//    'name' => 'unicef user (Mobile)',
//    'weight' => 0,
//  );

  // Exported role: unicef user.
  $roles['usaid editor'] = array(
    'name' => 'usaid editor',
    'weight' => 0,
  );

  return $roles;
}
