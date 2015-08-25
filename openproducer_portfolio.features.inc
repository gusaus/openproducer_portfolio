<?php
/**
 * @file
 * openproducer_portfolio.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openproducer_portfolio_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openproducer_portfolio_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function openproducer_portfolio_image_default_styles() {
  $styles = array();

  // Exported image style: screengrab.
  $styles['screengrab'] = array(
    'label' => 'Screengrab (600x600)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 600,
          'height' => 600,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function openproducer_portfolio_node_info() {
  $items = array(
    'portfolio' => array(
      'name' => t('Portfolio'),
      'base' => 'node_content',
      'description' => t('Add the portfolio here'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
