<?php
/**
 * @file
 * devtrac7_questionnaire_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function devtrac7_questionnaire_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_question_subject'
  $field_bases['field_question_subject'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_question_subject',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'question_subject',
          'parent' => 0,
          'depth' => '',
        ),
      ),
      'options_list_callback' => 'content_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'questionnaire_question_options'
  $field_bases['questionnaire_question_options'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'questionnaire_question_options',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'no_ui' => TRUE,
      'size' => 60,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'questionnaire_question_type'
  $field_bases['questionnaire_question_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'questionnaire_question_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_function' => 'questionnaire_question_getquestiontypes',
      'max_length' => 32,
      'no_ui' => TRUE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'taxonomy_vocabulary_1'
  $field_bases['taxonomy_vocabulary_1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'taxonomy_vocabulary_1',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'vocabulary_1',
          'parent' => 0,
          'depth' => '',
        ),
      ),
      'options_list_callback' => 'content_taxonomy_allowed_values',
      'required' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
