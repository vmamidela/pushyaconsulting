<?php
/**
 * @file
 * menulinks_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menulinks_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-us:http://www.pushyaconsulting.com/about-us
  $menu_links['main-menu_about-us:http://www.pushyaconsulting.com/about-us'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.pushyaconsulting.com/about-us',
    'router_path' => '',
    'link_title' => 'ABOUT US',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about-us:http://www.pushyaconsulting.com/about-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact-us:node/21
  $menu_links['main-menu_contact-us:node/21'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'CONTACT US',
    'options' => array(
      'identifier' => 'main-menu_contact-us:node/21',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_home:http://www.pushyaconsulting.com
  $menu_links['main-menu_home:http://www.pushyaconsulting.com'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.pushyaconsulting.com',
    'router_path' => '',
    'link_title' => 'HOME',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:http://www.pushyaconsulting.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_jobs:http://www.pushyaconsulting.com/jobs
  $menu_links['main-menu_jobs:http://www.pushyaconsulting.com/jobs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.pushyaconsulting.com/jobs',
    'router_path' => '',
    'link_title' => 'JOBS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_jobs:http://www.pushyaconsulting.com/jobs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_resources:node/13
  $menu_links['main-menu_resources:node/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'RESOURCES',
    'options' => array(
      'identifier' => 'main-menu_resources:node/13',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_services:http://www.pushyaconsulting.com/services',
  );
  // Exported menu link: main-menu_services:http://www.pushyaconsulting.com/services
  $menu_links['main-menu_services:http://www.pushyaconsulting.com/services'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.pushyaconsulting.com/services',
    'router_path' => '',
    'link_title' => 'SERVICES',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_services:http://www.pushyaconsulting.com/services',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('ABOUT US');
  t('CONTACT US');
  t('HOME');
  t('JOBS');
  t('RESOURCES');
  t('SERVICES');


  return $menu_links;
}
