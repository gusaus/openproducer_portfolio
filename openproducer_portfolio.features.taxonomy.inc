<?php
/**
 * @file
 * openproducer_portfolio.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openproducer_portfolio_taxonomy_default_vocabularies() {
  return array(
    'category' => array(
      'name' => 'Category',
      'machine_name' => 'category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'skills' => array(
      'name' => 'Skills',
      'machine_name' => 'skills',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'type' => array(
      'name' => 'Type',
      'machine_name' => 'type',
      'description' => 'Type of project',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
