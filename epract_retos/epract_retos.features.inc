<?php
/**
 * @file
 * epract_retos.features.inc
 */

/**
 * Implements hook_views_api().
 */
function epract_retos_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function epract_retos_flag_default_flags() {
  $flags = array();
  // Exported flag: "Resúmenes semanales de grupo".
  $flags['resumenes_semanales_de_grupo'] = array(
    'entity_type' => 'node',
    'title' => 'Resúmenes semanales de grupo',
    'global' => 0,
    'types' => array(
      0 => 'grupo_con_retos',
    ),
    'flag_short' => 'Activa resúmenes',
    'flag_long' => 'Recibe resúmenes semanales por email del grupo [node:title]',
    'flag_message' => 'Recibirás resúmenes semanales por email del grupo [node:title]',
    'unflag_short' => 'Desactiva resúmenes',
    'unflag_long' => 'Deja de recibir resúmenes semanales por email del grupo [node:title]',
    'unflag_message' => 'Ya no recibirás resúmenes semanales por email del grupo [node:title]',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'epract_retos',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function epract_retos_image_default_styles() {
  $styles = array();

  // Exported image style: goal_image.
  $styles['goal_image'] = array(
    'label' => 'goal_image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 30,
          'height' => 30,
          'upscale' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: mini-avatar.
  $styles['mini-avatar'] = array(
    'label' => 'mini-avatar',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 30,
          'height' => 30,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_message_type().
 */
function epract_retos_default_message_type() {
  $items = array();
  $items['epract_og_nuevo_contenido_en_grupo'] = entity_import('message_type', '{
    "name" : "epract_og_nuevo_contenido_en_grupo",
    "description" : "epract OG Nuevo contenido en grupo",
    "argument_keys" : [ "!groups" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "es",
    "arguments" : null,
    "message_text" : { "es" : [
        {
          "value" : "\\u0026#91;epract\\u0026#93; Nuevo contenido en el grupo [message:field-node-ref:og_group_retos_ref]\\r\\n",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E[epract] Nuevo contenido en el grupo [message:field-node-ref:og_group_retos_ref]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003ENuevo [message:field-node-ref:content-type] en el grupo [message:field-node-ref:og_group_retos_ref] por [message:field-node-ref:author].\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-node-ref:url:absolute]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EHas recibido este correo electr\\u00f3nico porque est\\u00e1s subscrito a las alertas del grupo [message:field-node-ref:og_group_retos_ref].\\u003Cbr \\/\\u003E\\r\\nPara editar las preferencias de tus alertas por email, sigue \\u003Ca href=\\u0022http:\\/\\/[site:url-brief]\\/epract\\/alertas-email\\u0022\\u003Eeste enlace\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEpract - [message:field-node-ref:og_group_retos_ref]\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003ENuevo [message:field-node-ref:content-type] en el grupo [message:field-node-ref:og_group_retos_ref] por [message:field-node-ref:author].\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-node-ref:url:absolute]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u00a0\\u003C\\/p\\u003E\\n\\u003Cp\\u003EHas recibido este correo electr\\u00f3nico porque est\\u00e1s subscrito a las alertas del grupo [message:field-node-ref:og_group_retos_ref].\\u003Cbr \\/\\u003E\\nPara editar las preferencias de tus alertas por email, sigue \\u003Ca href=\\u0022http:\\/\\/[site:url-brief]\\/epract\\/alertas-email\\u0022\\u003Eeste enlace\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n\\u003Cp\\u003EEpract - [message:field-node-ref:og_group_retos_ref]\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['epract_og_nuevo_mensaje_en_contenido_del_grupo'] = entity_import('message_type', '{
    "name" : "epract_og_nuevo_mensaje_en_contenido_del_grupo",
    "description" : "epract OG Nuevo mensaje en contenido del grupo",
    "argument_keys" : [ "!teaser" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "es",
    "arguments" : null,
    "message_text" : { "es" : [
        {
          "value" : "\\u0026#91;epract\\u0026#93; Nuevo comentario en [message:field-comment-node-ref:title]\\r\\n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E[epract] Nuevo comentario en [message:field-comment-node-ref:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003ENuevo comentario en \\u003Ci\\u003E[message:field-comment-node-ref:title]\\u003C\\/i\\u003E por \\u003Ci\\u003E[message:field-comment-ref:author:name]\\u003C\\/i\\u003E:\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022http:\\/\\/[message:field-comment-node-ref:url:brief]#comment-[message:field-comment-ref:cid]\\u0022\\u003EEnlace al comentario\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Cblockquote\\u003E[message:field-comment-ref:body]\\u003C\\/blockquote\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EHas recibido este correo electr\\u00f3nico porque est\\u00e1s subscrito a las alertas de [message:field-comment-node-ref:title].\\u003Cbr \\/\\u003E\\r\\nPara editar las preferencias de tus alertas por email, sigue \\u003Ca href=\\u0022http:\\/\\/[site:url-brief]\\/epract\\/alertas-email\\u0022\\u003Eeste enlace\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEpract - [message:field-comment-node-ref:og_group_retos_ref]\\u003C\\/p\\u003E",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003ENuevo comentario en \\u003Ci\\u003E[message:field-comment-node-ref:title]\\u003C\\/i\\u003E por \\u003Ci\\u003E[message:field-comment-ref:author:name]\\u003C\\/i\\u003E:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u003Ca href=\\u0022http:\\/\\/[message:field-comment-node-ref:url:brief]#comment-[message:field-comment-ref:cid]\\u0022\\u003EEnlace al comentario\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\n\\u003C\\/p\\u003E\\u003Cblockquote\\u003E[message:field-comment-ref:body]\\u003C\\/blockquote\\u003E\\n\\u003Cp\\u003E\\u00a0\\u003C\\/p\\u003E\\n\\u003Cp\\u003EHas recibido este correo electr\\u00f3nico porque est\\u00e1s subscrito a las alertas de [message:field-comment-node-ref:title].\\u003Cbr \\/\\u003E\\nPara editar las preferencias de tus alertas por email, sigue \\u003Ca href=\\u0022http:\\/\\/[site:url-brief]\\/epract\\/alertas-email\\u0022\\u003Eeste enlace\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n\\u003Cp\\u003EEpract - [message:field-comment-node-ref:og_group_retos_ref]\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function epract_retos_node_info() {
  $items = array(
    'debate' => array(
      'name' => t('Debate'),
      'base' => 'node_content',
      'description' => t('Este es un tipo de nodo asociado a un grupo con retos que abre un debate de sólo texto.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'documento_colaborativo' => array(
      'name' => t('Documento colaborativo'),
      'base' => 'node_content',
      'description' => t('Integrar en una página un documento colaborativo de gdocs o un etherpad.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => t('Para integrar un documento colaborativo en el site:<br />
- Abre un documento colaborativo en gdrive o un etherpad en titanpad o piratepad.<br />
- Obten el enlace para compartir el documento con permisos de edición.<br />
- Incluye el enlace en el campo "Iframe URL"'),
    ),
    'grupo_con_retos' => array(
      'name' => t('Grupo con retos'),
      'base' => 'node_content',
      'description' => t('Estos grupos contienen retos, debates y recursos como contenido de grupo.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'recursos_del_grupo' => array(
      'name' => t('Recursos del grupo'),
      'base' => 'node_content',
      'description' => t('Contenido de referencia para el grupo: enlaces, documentos, etc...'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
