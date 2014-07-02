<?php
/**
 * @file
 * devtrac7_solr_search_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac7_solr_search_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'purl_method_search_api_key';
  $strongarm->value = array(
    'devtrac_solr_organisations_view' => 'devtrac_solr_organisations_view',
    'devtrac_solr_organisations_view:page' => 'devtrac_solr_organisations_view:page',
    'devtrac_solr_view_actionitems' => 'devtrac_solr_view_actionitems',
    'devtrac_solr_view_actionitems:list' => 'devtrac_solr_view_actionitems:list',
    'devtrac_solr_view_activity' => 'devtrac_solr_view_activity',
    'devtrac_solr_view_activity:page' => 'devtrac_solr_view_activity:page',
    'devtrac_solr_view_answers' => 'devtrac_solr_view_answers',
    'devtrac_solr_view_districts' => 'devtrac_solr_view_districts',
    'devtrac_solr_view_districts:map' => 'devtrac_solr_view_districts:map',
    'devtrac_solr_view_fieldtrips' => 'devtrac_solr_view_fieldtrips',
    'devtrac_solr_view_fieldtrips:list' => 'devtrac_solr_view_fieldtrips:list',
    'devtrac_solr_view_locations' => 'devtrac_solr_view_locations',
    'devtrac_solr_view_locations:page_1' => 'devtrac_solr_view_locations:page_1',
    'devtrac_solr_view_questions' => 'devtrac_solr_view_questions',
    'devtrac_solr_view_questions:stats' => 'devtrac_solr_view_questions:stats',
    'devtrac_solr_view_sitevisits' => 'devtrac_solr_view_sitevisits',
    'devtrac_solr_view_sitevisits:map' => 'devtrac_solr_view_sitevisits:map',
    'admin_taxonomy_view' => 0,
    'admin_taxonomy_view:page' => 0,
    'admin_taxonomy_view:page_1' => 0,
    'admin_taxonomy_view:page_2' => 0,
    'admin_view' => 0,
    'admin_view:page' => 0,
    'admin_view:page_2' => 0,
    'admin_view:page_1' => 0,
    'admin_view:page_3' => 0,
    'admin_view:page_4' => 0,
    'admin_view:page_5' => 0,
    'admin_view:page_6' => 0,
    'api_fieldtrips' => 0,
    'api_fieldtrips:page_1' => 0,
    'api_fieldtrips:sitevisits' => 0,
    'api_fieldtrips:current_trip' => 0,
    'api_fieldtrips:place' => 0,
    'api_fieldtrips:actionitems' => 0,
    'api_questions' => 0,
    'api_questions:questions' => 0,
    'api_user' => 0,
    'api_user:users' => 0,
    'api_vocabularies' => 0,
    'api_vocabularies:oecd' => 0,
    'api_vocabularies:placetypes' => 0,
    'devtrac7_solr_user_view' => 0,
    'devtrac7_solr_user_view:page' => 0,
    'devtrac_activities' => 0,
    'devtrac_admin_taxonomy' => 0,
    'devtrac_admin_taxonomy:page' => 0,
    'devtrac_admin_taxonomy:page_1' => 0,
    'devtrac_answers_barcharts' => 0,
    'devtrac_answers_piecharts' => 0,
    'devtrac_organisation' => 0,
    'devtrac_organisation_map' => 0,
    'devtrac_sitevisit_answer_subjects' => 0,
    'devtrac_sitevisit_answers' => 0,
    'devtrac_solr_find_locations' => 0,
    'devtrac_solr_find_locations:map' => 0,
    'devtrac_solr_find_locations:geojson' => 0,
    'devtrac_solr_view_answers:graphs' => 0,
    'devtrac_solr_view_districts:page_1' => 0,
    'devtrac_solr_view_locations:page_2' => 0,
    'devtrac_solr_view_sitevisits:json' => 0,
    'devtrac_zoom_distict_edit_pages' => 0,
    'district' => 0,
    'district:page_1' => 0,
    'district_check' => 0,
    'district_check:page' => 0,
    'dvtrc_action_items' => 0,
    'dvtrc_action_items:page' => 0,
    'dvtrc_field_trip' => 0,
    'dvtrc_field_trip:page' => 0,
    'dvtrc_field_trip:page_1' => 0,
    'dvtrc_field_trip:page_2' => 0,
    'dvtrc_locations' => 0,
    'dvtrc_maps' => 0,
    'dvtrc_maps:page' => 0,
    'dvtrc_site_visits' => 0,
    'dvtrc_site_visits:page' => 0,
    'dvtrc_user' => 0,
    'dvtrc_user:page_1' => 0,
    'edit_questions' => 0,
    'edit_questions:edit_questions_page' => 0,
    'feeds_log' => 0,
    'feeds_log:page_1' => 0,
    'feeds_log:page_2' => 0,
    'feeds_log:page_3' => 0,
    'iati_organisations_activities' => 0,
    'inbox' => 0,
    'media_default' => 0,
    'oecd_sector_code' => 0,
    'oecd_sector_code:page_1' => 0,
    'site_reports' => 0,
    'site_reports:recent_site_reports_map' => 0,
  );
  $export['purl_method_search_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'purl_method_views_modes';
  $strongarm->value = 'querystring';
  $export['purl_method_views_modes'] = $strongarm;

  return $export;
}
