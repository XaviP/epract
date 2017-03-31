<?php
/**
 * @file
 * epract_retos.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function epract_retos_contact_categories_defaults() {
  return array(
    'Sugerencias para mejorar la web' => array(
      'category' => 'Sugerencias para mejorar la web',
      'recipients' => 'e-pract@fadq.org,pezbaloo@riseup.net',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
