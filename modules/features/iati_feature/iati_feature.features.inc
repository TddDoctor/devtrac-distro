<?php
/**
 * @file
 * iati_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iati_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function iati_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function iati_feature_image_default_styles() {
  $styles = array();

  // Exported image style: activity_organisation_logo.
  $styles['activity_organisation_logo'] = array(
    'name' => 'activity_organisation_logo',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'activity_organisation_logo',
  );

  // Exported image style: sector_icon_smallest.
  $styles['sector_icon_smallest'] = array(
    'name' => 'sector_icon_smallest',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 16,
          'height' => 16,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'sector_icon_smallest',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function iati_feature_node_info() {
  $items = array(
    'iati_activity' => array(
      'name' => t('IATI Activity'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'iati_organisation' => array(
      'name' => t('IATI Organisation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
