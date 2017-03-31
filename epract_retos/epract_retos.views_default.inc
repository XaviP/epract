<?php
/**
 * @file
 * epract_retos.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function epract_retos_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'epract_all_recursos_del_grupo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'epract All Recursos del grupo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recursos del grupo';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todo -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relación: Suscripción OG: Suscripción OG de Nodo */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Campo: Contenido: Palabras clave para contenido */
  $handler->display->display_options['fields']['field_palabras_clave_para_conten']['id'] = 'field_palabras_clave_para_conten';
  $handler->display->display_options['fields']['field_palabras_clave_para_conten']['table'] = 'field_data_field_palabras_clave_para_conten';
  $handler->display->display_options['fields']['field_palabras_clave_para_conten']['field'] = 'field_palabras_clave_para_conten';
  $handler->display->display_options['fields']['field_palabras_clave_para_conten']['label'] = '';
  $handler->display->display_options['fields']['field_palabras_clave_para_conten']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_palabras_clave_para_conten']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_palabras_clave_para_conten']['delta_offset'] = '0';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Enlace a recurso */
  $handler->display->display_options['fields']['field_enlace_a_recurso']['id'] = 'field_enlace_a_recurso';
  $handler->display->display_options['fields']['field_enlace_a_recurso']['table'] = 'field_data_field_enlace_a_recurso';
  $handler->display->display_options['fields']['field_enlace_a_recurso']['field'] = 'field_enlace_a_recurso';
  $handler->display->display_options['fields']['field_enlace_a_recurso']['label'] = 'Enlace';
  $handler->display->display_options['fields']['field_enlace_a_recurso']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_enlace_a_recurso']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_a_recurso']['click_sort_column'] = 'url';
  /* Campo: Contenido: Documento */
  $handler->display->display_options['fields']['field_documento']['id'] = 'field_documento';
  $handler->display->display_options['fields']['field_documento']['table'] = 'field_data_field_documento';
  $handler->display->display_options['fields']['field_documento']['field'] = 'field_documento';
  $handler->display->display_options['fields']['field_documento']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_documento']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_documento']['click_sort_column'] = 'fid';
  /* Criterio de ordenación: Contenido: Fecha de publicación */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtro contextual: Contenido: Grupo (og_group_retos_ref) */
  $handler->display->display_options['arguments']['og_group_retos_ref_target_id']['id'] = 'og_group_retos_ref_target_id';
  $handler->display->display_options['arguments']['og_group_retos_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_retos_ref_target_id']['field'] = 'og_group_retos_ref_target_id';
  $handler->display->display_options['arguments']['og_group_retos_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_retos_ref_target_id']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['og_group_retos_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['og_group_retos_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_retos_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_retos_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_retos_ref_target_id']['specify_validation'] = TRUE;
  /* Criterio de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recursos_del_grupo' => 'recursos_del_grupo',
  );
  /* Criterio de filtrado: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Buscar por título';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Criterio de filtrado: Contenido: Palabras clave para contenido (field_palabras_clave_para_conten) */
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['id'] = 'field_palabras_clave_para_conten_tid';
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['table'] = 'field_data_field_palabras_clave_para_conten';
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['field'] = 'field_palabras_clave_para_conten_tid';
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['value'] = '';
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['expose']['operator_id'] = 'field_palabras_clave_para_conten_tid_op';
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['expose']['label'] = 'Buscar por palabra clave';
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['expose']['operator'] = 'field_palabras_clave_para_conten_tid_op';
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['vocabulary'] = 'palabras_clave_para_contenido';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'community2/%/recursos';
  $translatables['epract_all_recursos_del_grupo'] = array(
    t('Master'),
    t('Recursos del grupo'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Elementos por página'),
    t('- Todo -'),
    t('Desplazamiento'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Suscripción OG de node'),
    t('Enlace'),
    t('Documento'),
    t('Todo'),
    t('Buscar por título'),
    t('Buscar por palabra clave'),
    t('Page'),
  );
  $export['epract_all_recursos_del_grupo'] = $view;

  $view = new view();
  $view->name = 'epract_all_users';
  $view->description = 'Muestra todos los usuarios del site';
  $view->tag = 'epract';
  $view->base_table = 'users';
  $view->human_name = 'epract All Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Usuarios';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Todos los usuarios';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Usuario: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Campo: Userpoints total: Current total puntos */
  $handler->display->display_options['fields']['points']['id'] = 'points';
  $handler->display->display_options['fields']['points']['table'] = 'userpoints_total';
  $handler->display->display_options['fields']['points']['field'] = 'points';
  $handler->display->display_options['fields']['points']['label'] = '';
  $handler->display->display_options['fields']['points']['exclude'] = TRUE;
  $handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Imagen */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['text'] = '<a title="[name]" href="/user/[uid]">[picture]</a><br/><span>[points]</span>';
  $handler->display->display_options['fields']['picture']['alter']['path'] = '/users/[name]';
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['picture']['alter']['alt'] = 'Imagen usuario [name]';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<a title="[name]" href="/user/[uid]"><img width="30" height="30" alt="" src="/sites/all/themes/epract_theme/images/userimage-mini.png" typeof="foaf:Image"></a><br/><span>[points]</span>';
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'mini-avatar';
  /* Criterio de ordenación: Userpoints total: Current total puntos */
  $handler->display->display_options['sorts']['points']['id'] = 'points';
  $handler->display->display_options['sorts']['points']['table'] = 'userpoints_total';
  $handler->display->display_options['sorts']['points']['field'] = 'points';
  $handler->display->display_options['sorts']['points']['order'] = 'DESC';
  /* Filtro contextual: Suscripción OG: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Criterio de filtrado: Usuario: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
    4 => '4',
    3 => '3',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  /* Criterio de filtrado: Usuario: Aprobado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio de filtrado: Global: Combinar los campos de filtro */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Combinar los campos de filtro';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'Combinar los campos de filtro';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Página */
  $handler = $view->new_display('page', 'Página', 'page_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Ver todos';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Usuario: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Usuario: Imagen */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['path'] = '/users/[name]';
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['picture']['alter']['alt'] = 'Imagen usuario [name]';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<a title="Imagen usuario [name]" href="/user/[uid]/contact"><img width="30" height="30" alt="" src="/sites/all/themes/epract_theme/images/userimage-mini.png" typeof="foaf:Image"></a>';
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'mini-avatar';
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a title="Imagen usuario [name]" href="/user/[uid]/contact">[picture]</a><a href="/user/[uid]/contact"> [name]</a>';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio de ordenación: Usuario: Nombre */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio de filtrado: Usuario: Aprobado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio de filtrado: Global: Combinar los campos de filtro */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Buscar por nombre';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'Combinar los campos de filtro';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_nombre' => 'field_nombre',
    'field_apellidos' => 'field_apellidos',
    'name' => 'name',
  );
  /* Criterio de filtrado: Usuario: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'empty';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['path'] = 'allusers';
  $translatables['epract_all_users'] = array(
    t('Master'),
    t('Usuarios'),
    t('Todos los usuarios'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('.'),
    t(','),
    t('<a title="[name]" href="/user/[uid]">[picture]</a><br/><span>[points]</span>'),
    t('Imagen usuario [name]'),
    t('<a title="[name]" href="/user/[uid]"><img width="30" height="30" alt="" src="/sites/all/themes/epract_theme/images/userimage-mini.png" typeof="foaf:Image"></a><br/><span>[points]</span>'),
    t('Todo'),
    t('Combinar los campos de filtro'),
    t('Block'),
    t('más'),
    t('Página'),
    t('Ver todos'),
    t('Elementos por página'),
    t('- Todos -'),
    t('Desplazamiento'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('<a title="Imagen usuario [name]" href="/user/[uid]/contact"><img width="30" height="30" alt="" src="/sites/all/themes/epract_theme/images/userimage-mini.png" typeof="foaf:Image"></a>'),
    t('<a title="Imagen usuario [name]" href="/user/[uid]/contact">[picture]</a><a href="/user/[uid]/contact"> [name]</a>'),
    t('Buscar por nombre'),
  );
  $export['epract_all_users'] = $view;

  $view = new view();
  $view->name = 'epract_attachment_to_grupo_de_retos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'epract attachment to grupo de retos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todo -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Encabezado: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['label'] = 'boton Abrir debate';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php $group=og_context(); ?>
<a id="epract-abrir-debate-link" href="/node/add/debate?og_group_retos_ref=<?php echo $group[\'gid\']; ?>&destination=node/<?php echo $group[\'gid\']; ?>">Abrir debate</a>
';
  /* Pie de página: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['label'] = 'columnas.js';
  $handler->display->display_options['footer']['php']['php_output'] = '<?php drupal_add_js(drupal_get_path(\'theme\', \'epract_theme\') . \'/js/columnas.js\');?>
';
  /* Relación: Suscripción OG: Nodo de la suscripción OG */
  $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  $handler->display->display_options['relationships']['og_membership_related_node']['required'] = TRUE;
  /* Relación: Comentario: Último Comentario */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_nodo_del_reto_goal']['id'] = 'reverse_field_nodo_del_reto_goal';
  $handler->display->display_options['relationships']['reverse_field_nodo_del_reto_goal']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_nodo_del_reto_goal']['field'] = 'reverse_field_nodo_del_reto_goal';
  /* Relación: Goal: Goal Image (goal_img:fid) */
  $handler->display->display_options['relationships']['goal_img_fid']['id'] = 'goal_img_fid';
  $handler->display->display_options['relationships']['goal_img_fid']['table'] = 'field_data_goal_img';
  $handler->display->display_options['relationships']['goal_img_fid']['field'] = 'goal_img_fid';
  $handler->display->display_options['relationships']['goal_img_fid']['relationship'] = 'reverse_field_nodo_del_reto_goal';
  /* Campo: Contenido: Imagen portada grupo */
  $handler->display->display_options['fields']['field_imagen_portada_grupo']['id'] = 'field_imagen_portada_grupo';
  $handler->display->display_options['fields']['field_imagen_portada_grupo']['table'] = 'field_data_field_imagen_portada_grupo';
  $handler->display->display_options['fields']['field_imagen_portada_grupo']['field'] = 'field_imagen_portada_grupo';
  $handler->display->display_options['fields']['field_imagen_portada_grupo']['label'] = '';
  $handler->display->display_options['fields']['field_imagen_portada_grupo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_portada_grupo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen_portada_grupo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Campo: Contenido: Tiene contenido nuevo */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['hide_empty'] = TRUE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [timestamp]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Palabras clave para contenido */
  $handler->display->display_options['fields']['field_palabras_clave_para_conten']['id'] = 'field_palabras_clave_para_conten';
  $handler->display->display_options['fields']['field_palabras_clave_para_conten']['table'] = 'field_data_field_palabras_clave_para_conten';
  $handler->display->display_options['fields']['field_palabras_clave_para_conten']['field'] = 'field_palabras_clave_para_conten';
  $handler->display->display_options['fields']['field_palabras_clave_para_conten']['label'] = '';
  $handler->display->display_options['fields']['field_palabras_clave_para_conten']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_palabras_clave_para_conten']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_palabras_clave_para_conten']['delta_offset'] = '0';
  /* Campo: Goal: Goal Image */
  $handler->display->display_options['fields']['goal_img']['id'] = 'goal_img';
  $handler->display->display_options['fields']['goal_img']['table'] = 'field_data_goal_img';
  $handler->display->display_options['fields']['goal_img']['field'] = 'goal_img';
  $handler->display->display_options['fields']['goal_img']['relationship'] = 'reverse_field_nodo_del_reto_goal';
  $handler->display->display_options['fields']['goal_img']['label'] = '';
  $handler->display->display_options['fields']['goal_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['goal_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['goal_img']['settings'] = array(
    'image_style' => 'goal_image',
    'image_link' => '',
  );
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '170';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Campo: Contenido: Comentarios nuevos */
  $handler->display->display_options['fields']['new_comments']['id'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['table'] = 'node';
  $handler->display->display_options['fields']['new_comments']['field'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['label'] = '';
  $handler->display->display_options['fields']['new_comments']['exclude'] = TRUE;
  $handler->display->display_options['fields']['new_comments']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['new_comments']['alter']['text'] = '([new_comments] nuevos)';
  $handler->display->display_options['fields']['new_comments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['new_comments']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['new_comments']['empty_zero'] = TRUE;
  /* Campo: Contenido: Cantidad de comentarios */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '[comment_count] comentarios [new_comments]';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['empty'] = 'No hay comentarios';
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = TRUE;
  /* Criterio de ordenación: Contenido: Promovido a la portada */
  $handler->display->display_options['sorts']['promote']['id'] = 'promote';
  $handler->display->display_options['sorts']['promote']['table'] = 'node';
  $handler->display->display_options['sorts']['promote']['field'] = 'promote';
  $handler->display->display_options['sorts']['promote']['order'] = 'DESC';
  /* Criterio de ordenación: Contenido: Fecha de actualización o comentario */
  $handler->display->display_options['sorts']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['order'] = 'DESC';
  /* Filtro contextual: Suscripción OG: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filtro contextual: Contenido: Palabras clave para contenido (field_palabras_clave_para_conten) */
  $handler->display->display_options['arguments']['field_palabras_clave_para_conten_tid']['id'] = 'field_palabras_clave_para_conten_tid';
  $handler->display->display_options['arguments']['field_palabras_clave_para_conten_tid']['table'] = 'field_data_field_palabras_clave_para_conten';
  $handler->display->display_options['arguments']['field_palabras_clave_para_conten_tid']['field'] = 'field_palabras_clave_para_conten_tid';
  $handler->display->display_options['arguments']['field_palabras_clave_para_conten_tid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['field_palabras_clave_para_conten_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_palabras_clave_para_conten_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_palabras_clave_para_conten_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_palabras_clave_para_conten_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_palabras_clave_para_conten_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_palabras_clave_para_conten_tid']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['field_palabras_clave_para_conten_tid']['validate']['fail'] = 'ignore';
  /* Criterio de filtrado: Suscripción OG: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'node';
  $handler->display->display_options['filters']['entity_type']['group'] = 1;
  /* Criterio de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'debate' => 'debate',
    'documento_colaborativo' => 'documento_colaborativo',
    'webform' => 'webform',
    'quiz' => 'quiz',
    'h5p_content' => 'h5p_content',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Criterio de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio de filtrado: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Buscar por título';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Criterio de filtrado: Contenido: Palabras clave para contenido (field_palabras_clave_para_conten) */
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['id'] = 'field_palabras_clave_para_conten_tid';
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['table'] = 'field_data_field_palabras_clave_para_conten';
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['field'] = 'field_palabras_clave_para_conten_tid';
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['value'] = '';
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['expose']['operator_id'] = 'field_palabras_clave_para_conten_tid_op';
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['expose']['label'] = 'Buscar por palabra clave';
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['expose']['operator'] = 'field_palabras_clave_para_conten_tid_op';
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_palabras_clave_para_conten_tid']['vocabulary'] = 'palabras_clave_para_contenido';

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'grupo_con_retos',
  );
  $translatables['epract_attachment_to_grupo_de_retos'] = array(
    t('Master'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Elementos por página'),
    t('- Todo -'),
    t('Desplazamiento'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('boton Abrir debate'),
    t('columnas.js'),
    t('node de la suscripción OG'),
    t('Último Comentario'),
    t('Goal referenciando Contenido desde field_nodo_del_reto'),
    t('Imagen de goal_img'),
    t('[title] [timestamp]'),
    t('([new_comments] nuevos)'),
    t('.'),
    t(','),
    t('[comment_count] comentarios [new_comments]'),
    t('No hay comentarios'),
    t('Todo'),
    t('Buscar por título'),
    t('Buscar por palabra clave'),
    t('EVA Field'),
  );
  $export['epract_attachment_to_grupo_de_retos'] = $view;

  $view = new view();
  $view->name = 'epract_user_flags_alertas_email_contenido_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'epract User Flags Alertas Email (Contenido)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Alertas via email de contenido nuevo';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Encabezado: Global: Área de vista */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'epract_user_flags_alertas_email_grupo_:default';
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>&nbsp;</p>
Tienes activadas las alertas por email de comentarios nuevos en los contenidos:';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No tienes programada ninguna alerta por email de comentarios nuevos para ningún contenido.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relación: Marcas: subscribe_node */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'subscribe_node';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Título del contenido';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Marcas: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Alertas instantáneas de comentarios';
  /* Criterio de ordenación: Contenido: Fecha de publicación */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterio de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'debate' => 'debate',
    'h5p_content' => 'h5p_content',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'epract/alertas-email';
  $translatables['epract_user_flags_alertas_email_contenido_'] = array(
    t('Master'),
    t('Alertas via email de contenido nuevo'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('<p>&nbsp;</p>
Tienes activadas las alertas por email de comentarios nuevos en los contenidos:'),
    t('No tienes programada ninguna alerta por email de comentarios nuevos para ningún contenido.'),
    t('marca'),
    t('Título del contenido'),
    t('Alertas instantáneas de comentarios'),
    t('Page'),
  );
  $export['epract_user_flags_alertas_email_contenido_'] = $view;

  $view = new view();
  $view->name = 'epract_user_flags_alertas_email_grupo_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'epract User Flags Alertas Email (Grupo)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todo -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'ops' => 'ops',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Tienes activadas las alertas por email de contenidos nuevos en los grupos: ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No tienes programada ninguna alerta por email de contenido nuevo para ningún grupo.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relación: Marcas: subscribe_og */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'marca groups';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'subscribe_og';
  /* Relación: Marcas: resumenes_semanales_de_grupo */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'marca resúmenes semanales';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'resumenes_semanales_de_grupo';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Grupo';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Marcas: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Alertas instantáneas';
  /* Campo: Marcas: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = 'Resúmenes semanales';
  /* Criterio de ordenación: Contenido: Fecha de publicación */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterio de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'grupo_con_retos' => 'grupo_con_retos',
  );
  $translatables['epract_user_flags_alertas_email_grupo_'] = array(
    t('Master'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Elementos por página'),
    t('- Todo -'),
    t('Desplazamiento'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Tienes activadas las alertas por email de contenidos nuevos en los grupos: '),
    t('No tienes programada ninguna alerta por email de contenido nuevo para ningún grupo.'),
    t('marca groups'),
    t('marca resúmenes semanales'),
    t('Grupo'),
    t('Alertas instantáneas'),
    t('Resúmenes semanales'),
  );
  $export['epract_user_flags_alertas_email_grupo_'] = $view;

  return $export;
}
