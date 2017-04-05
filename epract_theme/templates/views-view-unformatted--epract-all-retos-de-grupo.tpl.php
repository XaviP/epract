<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<div class="epract-2-columnas-1a">
<?php for ($id=0; $id < count($rows); $id+=2) { ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $rows[$id] ?>
  </div>
<?php } ?>
</div>

<div class="epract-2-columnas-2a">
<?php for ($id=1; $id < count($rows); $id+=2) { ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $rows[$id] ?>
  </div>
<?php } ?>
</div>

