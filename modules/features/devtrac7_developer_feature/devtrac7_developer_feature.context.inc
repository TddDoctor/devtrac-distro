<?php
/**
 * @file
 * devtrac7_developer_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac7_developer_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac7_developers';
  $context->description = 'This is a Context only for Devs';
  $context->tag = 'developers';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'diff-inline' => array(
          'module' => 'diff',
          'delta' => 'inline',
          'region' => 'footer_first',
          'weight' => '89',
        ),
        'context_ui-devel' => array(
          'module' => 'context_ui',
          'delta' => 'devel',
          'region' => 'footer_first',
          'weight' => '89',
        ),
        'devel_node_access-dna_user' => array(
          'module' => 'devel_node_access',
          'delta' => 'dna_user',
          'region' => 'footer_second',
          'weight' => '89',
        ),
        'devel_node_access-dna_node' => array(
          'module' => 'devel_node_access',
          'delta' => 'dna_node',
          'region' => 'footer_second',
          'weight' => '89',
        ),
      ),
    ),
    'debug' => array(
      'debug' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is a Context only for Devs');
  t('developers');
  $export['devtrac7_developers'] = $context;

  return $export;
}
