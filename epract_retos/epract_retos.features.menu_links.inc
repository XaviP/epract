<?php
/**
 * @file
 * epract_retos.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function epract_retos_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_editar-mi-perfil-de-usuario:epract/user/edit.
  $menu_links['user-menu_editar-mi-perfil-de-usuario:epract/user/edit'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'epract/user/edit',
    'router_path' => 'epract/user/edit',
    'link_title' => 'Editar mi perfil de usuario',
    'options' => array(
      'attributes' => array(
        'title' => 'Editar mi perfil de usuario',
      ),
      'identifier' => 'user-menu_editar-mi-perfil-de-usuario:epract/user/edit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: user-menu_mis-alertas-por-email:epract/alertas-email.
  $menu_links['user-menu_mis-alertas-por-email:epract/alertas-email'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'epract/alertas-email',
    'router_path' => 'epract/alertas-email',
    'link_title' => 'Mis alertas por email',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_mis-alertas-por-email:epract/alertas-email',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_my-points:myuserpoints.
  $menu_links['user-menu_my-points:myuserpoints'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'myuserpoints',
    'router_path' => 'myuserpoints',
    'link_title' => 'My !points',
    'options' => array(
      'identifier' => 'user-menu_my-points:myuserpoints',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Editar mi perfil de usuario');
  t('Log out');
  t('Mis alertas por email');
  t('My !points');
  t('User account');

  return $menu_links;
}
