<?php
/**
 * @file
 * epract_retos.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function epract_retos_default_rules_configuration() {
  $items = array();
  $items['rules_dar_10_puntos_al_usuario_que_comenta'] = entity_import('rules_config', '{ "rules_dar_10_puntos_al_usuario_que_comenta" : {
      "LABEL" : "Dar 10 puntos al usuario que comenta",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "epract" ],
      "REQUIRES" : [ "userpoints_rules", "comment" ],
      "ON" : { "comment_insert" : [] },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "comment:author" ],
            "points" : "10",
            "tid" : "0",
            "entity" : [ "comment" ],
            "description" : "Crear comentario",
            "operation" : "Agregar",
            "display" : "1",
            "moderate" : "approved"
          }
        }
      ]
    }
  }');
  $items['rules_dar_15_puntos_al_usuario_que_crea_un_debate'] = entity_import('rules_config', '{ "rules_dar_15_puntos_al_usuario_que_crea_un_debate" : {
      "LABEL" : "Dar 15 puntos al usuario que crea un debate",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "epract" ],
      "REQUIRES" : [ "userpoints_rules", "rules" ],
      "ON" : { "node_insert--debate" : { "bundle" : "debate" } },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "node:author" ],
            "points" : "15",
            "tid" : "0",
            "entity" : [ "node" ],
            "description" : "Crear un debate",
            "operation" : "Agregar",
            "display" : "1",
            "moderate" : "approved"
          }
        }
      ]
    }
  }');
  $items['rules_dar_5_puntos_al_usuario_que_vota'] = entity_import('rules_config', '{ "rules_dar_5_puntos_al_usuario_que_vota" : {
      "LABEL" : "Dar 5 puntos al usuario que vota",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "epract" ],
      "REQUIRES" : [ "userpoints_rules", "voting_rules" ],
      "ON" : { "voting_rules_insert_comment" : [] },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "vote:user" ],
            "points" : "5",
            "tid" : "0",
            "entity" : [ "comment" ],
            "description" : "Votar comentario",
            "operation" : "Agregar",
            "display" : "0",
            "moderate" : "approved"
          }
        }
      ]
    }
  }');
  $items['rules_mentions_enviar_email_a_usuario_mencionado'] = entity_import('rules_config', '{ "rules_mentions_enviar_email_a_usuario_mencionado" : {
      "LABEL" : "Mentions: Enviar email a usuario mencionado",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "mentions" ],
      "REQUIRES" : [ "rules", "mentions" ],
      "ON" : { "mentions_insert" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "mention:entity" ], "field" : "comment_body" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "mention:uid:mail" ],
            "subject" : "[mention:auid:name] te ha mencionado en [site:name]",
            "message" : "Hola [mention:uid:name],\\r\\n\\r\\n[mention:auid:name] te ha mencionado en [site:name]:\\r\\n\\r\\n[mention:entity:comment-body:value]\\r\\n\\r\\nPor favor, visita este enlace para responderle: \\u003Ca href=\\u0022[mention:entity:url]\\u0022\\u003Eeste enlace\\u003C\\/a\\u003E.\\r\\n",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_redirigir_a_la_p_gina_de_inicio_a_los_usuarios_an_nimos'] = entity_import('rules_config', '{ "rules_redirigir_a_la_p_gina_de_inicio_a_los_usuarios_an_nimos" : {
      "LABEL" : "Redirigir a la p\\u00e1gina de inicio a los usuarios an\\u00f3nimos",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "epract" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "init" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "1" : "1" } }
          }
        },
        { "NOT text_matches" : {
            "text" : [ "site:current-page:path" ],
            "match" : "^user\\/",
            "operation" : "regex"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "user\\/login" } } ]
    }
  }');
  $items['rules_redirigir_al_dashboard_cuando_el_usuario_se_loguea'] = entity_import('rules_config', '{ "rules_redirigir_al_dashboard_cuando_el_usuario_se_loguea" : {
      "LABEL" : "Redirigir al dashboard cuando el usuario se loguea",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "epract" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "NOT text_matches" : {
            "text" : [ "site:current-page:path" ],
            "match" : "^user\\/reset\\/",
            "operation" : "regex"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "community2\\/e-mpodera" } } ]
    }
  }');
  return $items;
}
