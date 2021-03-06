<?php
/**
 * @file
 * devtrac7_solr_search_feature.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function devtrac7_solr_search_feature_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'devtrac_solr_sitevisits_map';
  $openlayers_maps->title = 'Solr Sitevisits Map';
  $openlayers_maps->description = 'Solr Sitevisits Map';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '500px',
    'image_path' => 'profiles/devtrac/themes/devtrac7_theme/openlayers/img/',
    'css_path' => 'profiles/devtrac/themes/devtrac7_theme/css/openlayers_dummy.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '32.34374998701986, 1.4061088423676873',
        'zoom' => '7',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '3255605.908139,-188340.837661,3901345.922977,484305.011128',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(
        'separator' => ' | ',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 0,
        'documentDrag' => 0,
      ),
      'openlayers_plus_behavior_blockpanel' => array(
        'olblockpanel' => array(
          'name' => 1,
          'fieldset' => array(
            'position' => 'left',
            'label' => '',
            'startstatus' => 'open',
            'slidetimer' => '500',
          ),
        ),
      ),
      'openlayers_plus_behavior_blockswitcher' => array(
        'enabled' => 1,
        'open' => 0,
        'overlay_style' => 'checkbox',
        'position' => 'ne',
      ),
      'openlayers_plus_behavior_maptext' => array(
        'olmaptext_rightuppercorner' => array(
          'name' => 1,
          'fieldset' => array(
            'showpanel' => 1,
            'panelfieldset' => array(
              'toggleindividually' => 0,
              'verticalposition' => 'top',
              'horizontalposition' => 'right',
            ),
            'verticalposition' => 'bottom',
            'horizontalposition' => 'right',
            'popup' => 1,
            'popupfieldset' => array(
              'layers' => array(
                'devtrac_solr_view_sitevisits_json' => 'devtrac_solr_view_sitevisits_json',
                'openlayers_searchresult_layer' => 0,
                'devtrac_solr_view_sitevisits_mapdata' => 0,
              ),
            ),
          ),
        ),
        'olmaptext_legend' => array(
          'name' => 0,
          'fieldset' => array(
            'showpanel' => 0,
            'panelfieldset' => array(
              'toggleindividually' => 0,
              'verticalposition' => 'top',
              'horizontalposition' => 'left',
            ),
            'verticalposition' => 'top',
            'horizontalposition' => 'left',
            'popup' => 0,
            'popupfieldset' => array(
              'layers' => array(
                'openlayers_searchresult_layer' => 0,
                'devtrac_solr_view_sitevisits_json' => 0,
                'devtrac_solr_view_sitevisits_mapdata' => 0,
              ),
            ),
          ),
        ),
        'olmaptext_currentsearch' => array(
          'name' => 0,
          'fieldset' => array(
            'showpanel' => 0,
            'panelfieldset' => array(
              'toggleindividually' => 0,
              'verticalposition' => 'top',
              'horizontalposition' => 'left',
            ),
            'verticalposition' => 'top',
            'horizontalposition' => 'left',
            'popup' => 0,
            'popupfieldset' => array(
              'layers' => array(
                'openlayers_searchresult_layer' => 0,
                'devtrac_solr_view_sitevisits_json' => 0,
                'devtrac_solr_view_sitevisits_mapdata' => 0,
              ),
            ),
          ),
        ),
        'olmaptext_1' => array(
          'name' => 0,
          'fieldset' => array(
            'showpanel' => 0,
            'panelfieldset' => array(
              'toggleindividually' => 0,
              'verticalposition' => 'top',
              'horizontalposition' => 'left',
            ),
            'verticalposition' => 'top',
            'horizontalposition' => 'left',
            'popup' => 0,
            'popupfieldset' => array(
              'layers' => array(
                'openlayers_searchresult_layer' => 0,
                'devtrac_solr_view_sitevisits_json' => 0,
                'devtrac_solr_view_sitevisits_mapdata' => 0,
              ),
            ),
          ),
        ),
      ),
      'openlayers_plus_behavior_permalink' => array(),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoompanel' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'devtrac_solr_view_sitevisits_json' => 'devtrac_solr_view_sitevisits_json',
          'uganda_basemap' => 0,
          'uganda_basemap_streets' => 0,
          'openlayers_searchresult_layer' => 0,
          'devtrac_solr_view_sitevisits_mapdata' => 0,
          'u_map_it_schools' => 0,
          'u_map_it_wash' => 0,
          'u_map_it_health' => 0,
        ),
        'point_zoom_level' => '11',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'uganda_basemap',
    'layers' => array(
      'uganda_basemap' => 'uganda_basemap',
      'uganda_basemap_streets' => 'uganda_basemap_streets',
      'openlayers_searchresult_layer' => 'openlayers_searchresult_layer',
      'devtrac_solr_view_sitevisits_json' => 'devtrac_solr_view_sitevisits_json',
      'devtrac_solr_view_sitevisits_mapdata' => 'devtrac_solr_view_sitevisits_mapdata',
      'u_map_it_schools' => 'u_map_it_schools',
      'u_map_it_health' => 'u_map_it_health',
      'u_map_it_wash' => 'u_map_it_wash',
    ),
    'layer_weight' => array(
      'openlayers_searchresult_layer' => '-10',
      'devtrac_solr_view_sitevisits_json' => '-5',
      'devtrac_solr_find_locations_geojson' => '0',
      'devtrac_zoom_distict_edit_pages_openlayers_1' => '0',
      'devtrac_solr_find_locations_mapdata' => '0',
      'dvtrc_maps_openlayers_1' => '0',
      'dvtrc_field_trip_openlayers_1' => '0',
      'devtrac_solr_view_locations_overlay' => '0',
      'devtrac_organisation_map_openlayers_1' => '0',
      'devtrac_solr_view_districts_openlayers_1' => '0',
      'dvtrc_maps_openlayers_2' => '0',
      'devtrac_activities_openlayers_1' => '0',
      'dvtrc_maps_openlayers_4' => '0',
      'dvtrc_user_openlayers_1' => '0',
      'site_reports_recent_site_reports_data' => '0',
      'devtrac_solr_view_sitevisits_mapdata' => '0',
      'dvtrc_maps_openlayers_8' => '0',
      'dvtrc_maps_openlayers_7' => '0',
      'u_map_it_washwms' => '0',
      'dvtrc_maps_openlayers_5' => '0',
      'dvtrc_maps_openlayers_6' => '0',
      'dvtrc_maps_openlayers_3' => '0',
      'ugandahealthwms' => '0',
      'funding_partner_sites_openlayers_1' => '0',
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'field_trip_report_items_openlayers_3' => '0',
      'field_trip_places_to_visit_openlayers_2' => '0',
      'devtrac_solr_view_districts_json' => '0',
      'devtrac_solr_view_locations_json' => '0',
      'field_trip_places_to_visit_openlayers_1' => '0',
      'u_map_it_schoolswms' => '0',
      'places_openlayers_1' => '0',
      'place_openlayers_1' => '0',
      'trip_reports_search_openlayers_4' => '0',
      'user_report_items_map_openlayers_1' => '0',
      'user_report_items_map_openlayers_3' => '0',
      'trip_reports_search_openlayers_2' => '0',
      'trip_reports_search_openlayers_3' => '0',
      'trip_reports_search_openlayers_1' => '0',
      'side_block_map_openlayers_2' => '0',
      'side_block_map_openlayers_1' => '0',
      'side_block_map_openlayers_3' => '0',
      'u_map_it_schools' => '6',
      'u_map_it_health' => '7',
      'u_map_it_wash' => '7',
    ),
    'layer_styles' => array(
      'devtrac_organisation_map_openlayers_1' => '0',
      'devtrac_solr_view_districts_json' => '0',
      'devtrac_solr_view_locations_json' => '0',
      'field_trip_places_to_visit_openlayers_1' => '0',
      'field_trip_places_to_visit_openlayers_2' => '0',
      'field_trip_report_items_openlayers_3' => '0',
      'funding_partner_sites_openlayers_1' => '0',
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'places_openlayers_1' => '0',
      'place_openlayers_1' => '0',
      'side_block_map_openlayers_1' => '0',
      'side_block_map_openlayers_2' => '0',
      'side_block_map_openlayers_3' => '0',
      'trip_reports_search_openlayers_1' => '0',
      'trip_reports_search_openlayers_2' => '0',
      'trip_reports_search_openlayers_3' => '0',
      'trip_reports_search_openlayers_4' => '0',
      'user_report_items_map_openlayers_1' => '0',
      'user_report_items_map_openlayers_3' => '0',
      'u_map_it_schoolswms' => '0',
      'u_map_it_washwms' => '0',
      'ugandahealthwms' => '0',
      'devtrac_solr_view_districts_openlayers_1' => '0',
      'devtrac_solr_view_locations_overlay' => '0',
      'devtrac_activities_openlayers_1' => '0',
      'devtrac_solr_find_locations_mapdata' => '0',
      'devtrac_solr_find_locations_geojson' => '0',
      'devtrac_zoom_distict_edit_pages_openlayers_1' => '0',
      'dvtrc_field_trip_openlayers_1' => '0',
      'dvtrc_maps_openlayers_1' => '0',
      'dvtrc_maps_openlayers_2' => '0',
      'dvtrc_maps_openlayers_3' => '0',
      'dvtrc_maps_openlayers_4' => '0',
      'dvtrc_maps_openlayers_5' => '0',
      'dvtrc_maps_openlayers_6' => '0',
      'dvtrc_maps_openlayers_7' => '0',
      'dvtrc_maps_openlayers_8' => '0',
      'dvtrc_user_openlayers_1' => '0',
      'site_reports_recent_site_reports_data' => '0',
      'openlayers_searchresult_layer' => 'devtrac_mapstyle_search_default',
      'devtrac_solr_view_sitevisits_json' => 'devtrac_mapstyle_placetype_default',
      'devtrac_solr_view_sitevisits_mapdata' => 'devtrac_mapstyle_placetype_default',
      'u_map_it_schools' => '0',
      'u_map_it_wash' => '0',
      'u_map_it_health' => '0',
    ),
    'layer_styles_select' => array(
      'devtrac_organisation_map_openlayers_1' => '0',
      'devtrac_solr_view_districts_json' => '0',
      'devtrac_solr_view_locations_json' => '0',
      'field_trip_places_to_visit_openlayers_1' => '0',
      'field_trip_places_to_visit_openlayers_2' => '0',
      'field_trip_report_items_openlayers_3' => '0',
      'funding_partner_sites_openlayers_1' => '0',
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'places_openlayers_1' => '0',
      'place_openlayers_1' => '0',
      'side_block_map_openlayers_1' => '0',
      'side_block_map_openlayers_2' => '0',
      'side_block_map_openlayers_3' => '0',
      'trip_reports_search_openlayers_1' => '0',
      'trip_reports_search_openlayers_2' => '0',
      'trip_reports_search_openlayers_3' => '0',
      'trip_reports_search_openlayers_4' => '0',
      'user_report_items_map_openlayers_1' => '0',
      'user_report_items_map_openlayers_3' => '0',
      'u_map_it_schoolswms' => '0',
      'u_map_it_washwms' => '0',
      'ugandahealthwms' => '0',
      'devtrac_solr_view_districts_openlayers_1' => '0',
      'devtrac_solr_view_locations_overlay' => '0',
      'devtrac_activities_openlayers_1' => '0',
      'devtrac_solr_find_locations_mapdata' => '0',
      'devtrac_solr_find_locations_geojson' => '0',
      'devtrac_zoom_distict_edit_pages_openlayers_1' => '0',
      'dvtrc_field_trip_openlayers_1' => '0',
      'dvtrc_maps_openlayers_1' => '0',
      'dvtrc_maps_openlayers_2' => '0',
      'dvtrc_maps_openlayers_3' => '0',
      'dvtrc_maps_openlayers_4' => '0',
      'dvtrc_maps_openlayers_5' => '0',
      'dvtrc_maps_openlayers_6' => '0',
      'dvtrc_maps_openlayers_7' => '0',
      'dvtrc_maps_openlayers_8' => '0',
      'dvtrc_user_openlayers_1' => '0',
      'site_reports_recent_site_reports_data' => '0',
      'openlayers_searchresult_layer' => 'devtrac_mapstyle_search_selected',
      'devtrac_solr_view_sitevisits_json' => 'devtrac_mapstyle_placetype_selected',
      'devtrac_solr_view_sitevisits_mapdata' => 'devtrac_mapstyle_placetype_selected',
      'u_map_it_schools' => '0',
      'u_map_it_wash' => '0',
      'u_map_it_health' => '0',
    ),
    'layer_styles_temporary' => array(
      'devtrac_organisation_map_openlayers_1' => '0',
      'devtrac_solr_view_districts_json' => '0',
      'devtrac_solr_view_locations_json' => '0',
      'field_trip_places_to_visit_openlayers_1' => '0',
      'field_trip_places_to_visit_openlayers_2' => '0',
      'field_trip_report_items_openlayers_3' => '0',
      'funding_partner_sites_openlayers_1' => '0',
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'places_openlayers_1' => '0',
      'place_openlayers_1' => '0',
      'side_block_map_openlayers_1' => '0',
      'side_block_map_openlayers_2' => '0',
      'side_block_map_openlayers_3' => '0',
      'trip_reports_search_openlayers_1' => '0',
      'trip_reports_search_openlayers_2' => '0',
      'trip_reports_search_openlayers_3' => '0',
      'trip_reports_search_openlayers_4' => '0',
      'user_report_items_map_openlayers_1' => '0',
      'user_report_items_map_openlayers_3' => '0',
      'u_map_it_schoolswms' => '0',
      'u_map_it_washwms' => '0',
      'ugandahealthwms' => '0',
      'devtrac_solr_view_districts_openlayers_1' => '0',
      'devtrac_solr_view_locations_overlay' => '0',
      'devtrac_activities_openlayers_1' => '0',
      'devtrac_solr_find_locations_mapdata' => '0',
      'devtrac_solr_find_locations_geojson' => '0',
      'devtrac_zoom_distict_edit_pages_openlayers_1' => '0',
      'dvtrc_field_trip_openlayers_1' => '0',
      'dvtrc_maps_openlayers_1' => '0',
      'dvtrc_maps_openlayers_2' => '0',
      'dvtrc_maps_openlayers_3' => '0',
      'dvtrc_maps_openlayers_4' => '0',
      'dvtrc_maps_openlayers_5' => '0',
      'dvtrc_maps_openlayers_6' => '0',
      'dvtrc_maps_openlayers_7' => '0',
      'dvtrc_maps_openlayers_8' => '0',
      'dvtrc_user_openlayers_1' => '0',
      'site_reports_recent_site_reports_data' => '0',
      'openlayers_searchresult_layer' => 'devtrac_mapstyle_search_active',
      'devtrac_solr_view_sitevisits_json' => 'devtrac_mapstyle_placetype_active',
      'devtrac_solr_view_sitevisits_mapdata' => 'devtrac_mapstyle_placetype_active',
      'u_map_it_schools' => '0',
      'u_map_it_wash' => '0',
      'u_map_it_health' => '0',
    ),
    'layer_activated' => array(
      'openlayers_searchresult_layer' => 'openlayers_searchresult_layer',
      'devtrac_solr_view_sitevisits_json' => 'devtrac_solr_view_sitevisits_json',
      'devtrac_solr_view_sitevisits_mapdata' => 'devtrac_solr_view_sitevisits_mapdata',
      'devtrac_organisation_map_openlayers_1' => 0,
      'devtrac_solr_view_districts_json' => 0,
      'devtrac_solr_view_locations_json' => 0,
      'field_trip_places_to_visit_openlayers_1' => 0,
      'field_trip_places_to_visit_openlayers_2' => 0,
      'field_trip_report_items_openlayers_3' => 0,
      'funding_partner_sites_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'openlayers_kml_example' => 0,
      'places_openlayers_1' => 0,
      'place_openlayers_1' => 0,
      'side_block_map_openlayers_1' => 0,
      'side_block_map_openlayers_2' => 0,
      'side_block_map_openlayers_3' => 0,
      'trip_reports_search_openlayers_1' => 0,
      'trip_reports_search_openlayers_2' => 0,
      'trip_reports_search_openlayers_3' => 0,
      'trip_reports_search_openlayers_4' => 0,
      'user_report_items_map_openlayers_1' => 0,
      'user_report_items_map_openlayers_3' => 0,
      'u_map_it_health' => 0,
      'u_map_it_schools' => 0,
      'u_map_it_schoolswms' => 0,
      'u_map_it_wash' => 0,
      'u_map_it_washwms' => 0,
      'ugandahealthwms' => 0,
      'devtrac_solr_view_districts_openlayers_1' => 0,
      'devtrac_solr_view_locations_overlay' => 0,
      'devtrac_activities_openlayers_1' => 0,
      'devtrac_solr_find_locations_mapdata' => 0,
      'devtrac_solr_find_locations_geojson' => 0,
      'devtrac_zoom_distict_edit_pages_openlayers_1' => 0,
      'dvtrc_field_trip_openlayers_1' => 0,
      'dvtrc_maps_openlayers_1' => 0,
      'dvtrc_maps_openlayers_2' => 0,
      'dvtrc_maps_openlayers_3' => 0,
      'dvtrc_maps_openlayers_4' => 0,
      'dvtrc_maps_openlayers_5' => 0,
      'dvtrc_maps_openlayers_6' => 0,
      'dvtrc_maps_openlayers_7' => 0,
      'dvtrc_maps_openlayers_8' => 0,
      'dvtrc_user_openlayers_1' => 0,
      'site_reports_recent_site_reports_data' => 0,
    ),
    'layer_switcher' => array(
      'devtrac_solr_view_sitevisits_json' => 'devtrac_solr_view_sitevisits_json',
      'u_map_it_schools' => 'u_map_it_schools',
      'u_map_it_wash' => 'u_map_it_wash',
      'u_map_it_health' => 'u_map_it_health',
      'devtrac_organisation_map_openlayers_1' => 0,
      'devtrac_solr_view_districts_json' => 0,
      'devtrac_solr_view_locations_json' => 0,
      'field_trip_places_to_visit_openlayers_1' => 0,
      'field_trip_places_to_visit_openlayers_2' => 0,
      'field_trip_report_items_openlayers_3' => 0,
      'funding_partner_sites_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_searchresult_layer' => 0,
      'places_openlayers_1' => 0,
      'place_openlayers_1' => 0,
      'side_block_map_openlayers_1' => 0,
      'side_block_map_openlayers_2' => 0,
      'side_block_map_openlayers_3' => 0,
      'trip_reports_search_openlayers_1' => 0,
      'trip_reports_search_openlayers_2' => 0,
      'trip_reports_search_openlayers_3' => 0,
      'trip_reports_search_openlayers_4' => 0,
      'user_report_items_map_openlayers_1' => 0,
      'user_report_items_map_openlayers_3' => 0,
      'u_map_it_schoolswms' => 0,
      'u_map_it_washwms' => 0,
      'ugandahealthwms' => 0,
      'devtrac_solr_view_districts_openlayers_1' => 0,
      'devtrac_solr_view_locations_overlay' => 0,
      'devtrac_activities_openlayers_1' => 0,
      'devtrac_solr_find_locations_mapdata' => 0,
      'devtrac_solr_find_locations_geojson' => 0,
      'devtrac_solr_view_sitevisits_mapdata' => 0,
      'devtrac_zoom_distict_edit_pages_openlayers_1' => 0,
      'dvtrc_field_trip_openlayers_1' => 0,
      'dvtrc_maps_openlayers_1' => 0,
      'dvtrc_maps_openlayers_2' => 0,
      'dvtrc_maps_openlayers_3' => 0,
      'dvtrc_maps_openlayers_4' => 0,
      'dvtrc_maps_openlayers_5' => 0,
      'dvtrc_maps_openlayers_6' => 0,
      'dvtrc_maps_openlayers_7' => 0,
      'dvtrc_maps_openlayers_8' => 0,
      'dvtrc_user_openlayers_1' => 0,
      'site_reports_recent_site_reports_data' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'devtrac_mapstyle_placetype_default',
      'select' => 'devtrac_mapstyle_placetype_selected',
      'temporary' => 'devtrac_mapstyle_placetype_default',
    ),
  );
  $export['devtrac_solr_sitevisits_map'] = $openlayers_maps;

  return $export;
}
