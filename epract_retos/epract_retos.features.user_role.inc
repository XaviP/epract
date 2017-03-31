<?php
/**
 * @file
 * epract_retos.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function epract_retos_user_default_roles() {
  $roles = array();

  // Exported role: usuario autenticado oculto.
  $roles['usuario autenticado oculto'] = array(
    'name' => 'usuario autenticado oculto',
    'weight' => 2,
  );

  return $roles;
}
