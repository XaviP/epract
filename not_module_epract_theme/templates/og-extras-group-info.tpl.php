<?php
/**
 * @file og-extras-group-info.tpl.php
 * OG Extras group info template
 *
 * Variables available:
 * - $gid: group id.
 * - $group_type: group type.
 * - $group_node: group node.
 * - $group_node_links: formatted links to create group content.
 * - $manager_uids: array of uids of group managers.
 * - $managers: array of formatted links to the group managers.
 * - $subscriber_count: number of group subscribers.
 * - $subscriber_link: formatted link with number of subscribers.
 * - $created: formatted creation date of group.
 * - $subscribe_link: formatted link to subscribe to the group.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($gid)): ?>
  <ul>
    <li>
      <a href="/node/<?php print $group_node->nid ?>"><?php print $group_node->title ?></a>
    </li>
    <?php if ($group_node->type == 'grupo_con_retos'): ?>
      <li>
        <a href="/community2/<?php print $gid ?>/recursos">Recursos del grupo</a>
      </li>
      <li>
        <a href="/node/add/debate?og_group_retos_ref=<?php print $group_node->nid ?>&destination=node/<?php print $group_node->nid ?>">Abrir Debate</a>
      </li>
    <?php endif; ?>
    <?php if ($group_node->type == 'grupo'): ?>
      <li>
        <?php print t('Creado: @date', array('@date' => $created)); ?>
      </li>
      <li>
        <?php print l('Información de referencia', '/community/' . $group_node->nid . '/contenido-de-grupo'); ?>
      </li>
      <li>
        <?php print format_plural(count($manager_uids), 'Moderador', 'Moderadores') . '<br />'; ?>
        <?php foreach ($managers as $manager_link): ?>
          <span><?php print $manager_link . ' '; ?></span>
        <?php endforeach; ?>
      </li>
    <?php endif; ?>
    <li>
      <?php print $subscriber_link ?>
    </li>
<!--
    <li>
      <a href="/goals/goal/add?og_group_ref=<?php print $group_node->nid ?>&destination=node/<?php print $group_node->nid ?>">Crear Reto</a>
    </li>
-->
    <?php if ($group_node->type == 'grupo'): ?>
      <li>
        <a href="/node/add/subgrupo-o-tema?og_group_ref=<?php print $group_node->nid ?>&destination=node/<?php print $group_node->nid ?>">Crear Subgrupo o Tema</a>
      </li>
    <?php endif; ?>
    <li class="grupo-info-subscribe">
      <?php print $subscribe_link; ?>
    </li>
<!--     <li>
      <?php print $group_node_links; ?>
    </li> -->
    <?php if ($group_node->type == 'grupo_con_retos'): ?>
      <?php $role = user_role_load_by_name('editor'); ?>
      <?php $role_admin = user_role_load_by_name('administrator'); ?>
      <?php if (user_has_role($role->rid) || user_has_role($role_admin->rid)): ?>
        <li><b>Menu edición:</b></li>
        <li>
          <a href="/node/add/h5p-content?og_group_retos_ref=<?php print $group_node->nid ?>&destination=node/<?php print $group_node->nid ?>">Nuevo contenido interactivo</a>
        </li>
        <li>
          <a href="/epract/new-goal">Crear reto de contenido interativo</a>
        </li>
        <li>
          <a href="/node/add/recursos-del-grupo?og_group_retos_ref=<?php print $group_node->nid ?>&destination=node/<?php print $group_node->nid ?>">Nuevo recurso del grupo</a>
        </li>
        <li>
          <a href="/node/add/webform?og_group_retos_ref=<?php print $group_node->nid ?>">Nuevo formulario</a>
        </li>
        <li>
          <a href="/node/add/documento-colaborativo?og_group_retos_ref=<?php print $group_node->nid ?>">Nuevo documento colaborativo</a>
        </li>
        <li>
          <a href="/node/add/quiz?og_group_retos_ref=<?php print $group_node->nid ?>">Nuevo test</a>
        </li>
        <li>
          <a href="/admin/content">Editar contenidos</a>
        </li>
        <li>
          <a href="/admin/config/goals/main">Editar retos</a>
        </li>
        <li>
          <a href="/epract/digest/<?php print $group_node->nid ?>/edit?destination=node/<?php print $group_node->nid ?>">Resúmenes semanales</a>
        </li>
      <?php endif; ?>
    <?php endif; ?>
  </ul>
<?php endif; ?>