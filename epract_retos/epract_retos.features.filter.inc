<?php
/**
 * @file
 * epract_retos.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function epract_retos_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML in comments.
  $formats['filtered_html_c'] = array(
    'format' => 'filtered_html_c',
    'name' => 'Filtered HTML in comments',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_mentions' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <br /> <i>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 1,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
