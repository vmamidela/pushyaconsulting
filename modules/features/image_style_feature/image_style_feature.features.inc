<?php
/**
 * @file
 * image_style_feature.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function image_style_feature_image_default_styles() {
  $styles = array();

  // Exported image style: banner_slideshow.
  $styles['banner_slideshow'] = array(
    'name' => 'banner_slideshow',
    'label' => 'banner_slideshow',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 955,
          'height' => 300,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: fronpageblock.
  $styles['fronpageblock'] = array(
    'name' => 'fronpageblock',
    'label' => 'fronpageblock',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 110,
          'height' => 120,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
