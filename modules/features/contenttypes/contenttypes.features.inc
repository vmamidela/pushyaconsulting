<?php
/**
 * @file
 * contenttypes.features.inc
 */

/**
 * Implements hook_node_info().
 */
function contenttypes_node_info() {
  $items = array(
    'frontpage_slideshow' => array(
      'name' => t('frontpage_slideshow'),
      'base' => 'node_content',
      'description' => t('This content type is used for front page  picture slideshow.'),
      'has_title' => '1',
      'title_label' => t('FrontPage_Slideshow'),
      'help' => '',
    ),
    'frontpageview' => array(
      'name' => t('frontpageview'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'jobs' => array(
      'name' => t('jobs'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Job Role'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
