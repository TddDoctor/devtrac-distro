<?php
/**
 * @file
 * devtrac7_solr_search_location_feature.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function devtrac7_solr_search_location_feature_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'locations_info';
  $template->title = 'Locations';
  $template->plugin = 'text';
  $template->description = 'Introductory information about Locations.';
  $template->configuration = '';
  $export['locations_info'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function devtrac7_solr_search_location_feature_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'locations_info_und';
  $template->container = 'locations_info';
  $template->lang = 'und';
  $template->data = array(
    'value' => 'These are the locations where UNICEF has carried out its activities and which locations have been visited by UNICEF staff. These locations are differentiated by their place types as seen on the map. Site reports are filled out for a specific location',
    'format' => '1',
    'title' => '',
  );
  $export['locations_info_und'] = $template;

  return $export;
}
