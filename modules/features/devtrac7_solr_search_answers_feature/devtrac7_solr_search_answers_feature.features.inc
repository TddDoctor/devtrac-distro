<?php
/**
 * @file
 * devtrac7_solr_search_answers_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac7_solr_search_answers_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function devtrac7_solr_search_answers_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function devtrac7_solr_search_answers_feature_default_search_api_index() {
  $items = array();
  $items['answers'] = entity_import('search_api_index', '{
    "name" : "answers",
    "machine_name" : "answers",
    "description" : null,
    "server" : "devtrac_solr_server",
    "item_type" : "questionnaire_answer",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "created" : { "type" : "date" },
        "questionnaire_answer_number" : { "type" : "decimal" },
        "questionnaire_answer_question" : { "type" : "integer", "entity_type" : "node" },
        "questionnaire_answer_text" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "taxonomy_vocabulary_1" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_6" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "uid" : { "type" : "integer", "entity_type" : "user" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "taxonomy_vocabulary_6:parents_all" : "taxonomy_vocabulary_6:parents_all" } }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : false } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "date_processor" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "default" : "0", "fields" : { "created" : true } }
        },
        "search_api_case_ignore" : { "status" : 1, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : [],
            "spaces" : "[^\\\\p{L}\\\\p{N}^\\u0027]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}
