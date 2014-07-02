<?php
/**
 * @file
 * devtrac7_questionnaire_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function devtrac7_questionnaire_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-questionnaire_question-field_question_subject'
  $field_instances['node-questionnaire_question-field_question_subject'] = array(
    'bundle' => 'questionnaire_question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Used to group Questions. Select the most appropriate one.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_question_subject',
    'label' => 'Sub-Category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-questionnaire_question-questionnaire_question_options'
  $field_instances['node-questionnaire_question-questionnaire_question_options'] = array(
    'bundle' => 'questionnaire_question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The different Options of the Question (Note; Mind about the type of Question you selected).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'questionnaire_question_options',
    'label' => 'Options',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'type' => 'text',
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-questionnaire_question-questionnaire_question_type'
  $field_instances['node-questionnaire_question-questionnaire_question_type'] = array(
    'bundle' => 'questionnaire_question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the type of the Question. This is going to determin how this Question will look like.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'questionnaire_question_type',
    'label' => 'The type of question.',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-questionnaire_question-taxonomy_vocabulary_1'
  $field_instances['node-questionnaire_question-taxonomy_vocabulary_1'] = array(
    'bundle' => 'questionnaire_question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the appropriate Location Type.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_1',
    'label' => 'Location Type',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-questionnaire_question-taxonomy_vocabulary_8'
  $field_instances['node-questionnaire_question-taxonomy_vocabulary_8'] = array(
    'bundle' => 'questionnaire_question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide the correct sector. You may select more than one sector. You can read more about the codes we use on the <a href="/node/6184">OECD Sector Codes</a> page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'ds',
        'settings' => array(),
        'type' => 'taxonomy_sector_code_icon',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_8',
    'label' => 'Sector',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Choose the type of the Question. This is going to determin how this Question will look like.');
  t('Location Type');
  t('Options');
  t('Provide the correct sector. You may select more than one sector. You can read more about the codes we use on the <a href="/node/6184">OECD Sector Codes</a> page.');
  t('Sector');
  t('Select the appropriate Location Type.');
  t('Sub-Category');
  t('The different Options of the Question (Note; Mind about the type of Question you selected).');
  t('The type of question.');
  t('Used to group Questions. Select the most appropriate one.');

  return $field_instances;
}
