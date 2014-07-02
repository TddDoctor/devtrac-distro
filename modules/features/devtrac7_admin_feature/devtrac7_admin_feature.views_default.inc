<?php
/**
 * @file
 * devtrac7_admin_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_admin_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_taxonomy_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Admin Taxonomy View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Admin Taxonomy View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;

  /* Display: OECD Codes */
  $handler = $view->new_display('page', 'OECD Codes', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sectors';
  $handler->display->display_options['display_description'] = 'A view that will display all the oecd codes (sectors) with their respective icons';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['label'] = 'Icon';
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Term Icon (field_term_icon:fid) */
  $handler->display->display_options['sorts']['field_term_icon_fid']['id'] = 'field_term_icon_fid';
  $handler->display->display_options['sorts']['field_term_icon_fid']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['sorts']['field_term_icon_fid']['field'] = 'field_term_icon_fid';
  $handler->display->display_options['sorts']['field_term_icon_fid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_8' => 'vocabulary_8',
  );
  $handler->display->display_options['path'] = 'admin/devtrac7/dq/oecd-code-icons';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'OECD codes Icons';
  $handler->display->display_options['menu']['description'] = 'This view tells the progress of the OECD code icons';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: PlaceTypes */
  $handler = $view->new_display('page', 'PlaceTypes', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PT';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'A view that will display all the PlaceTypes with their respective icons';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Location Type */
  $handler->display->display_options['relationships']['reverse_taxonomy_vocabulary_1_node']['id'] = 'reverse_taxonomy_vocabulary_1_node';
  $handler->display->display_options['relationships']['reverse_taxonomy_vocabulary_1_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_taxonomy_vocabulary_1_node']['field'] = 'reverse_taxonomy_vocabulary_1_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_taxonomy_vocabulary_1_node';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_taxonomy_vocabulary_1_node';
  /* Field: Field: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['relationship'] = 'reverse_taxonomy_vocabulary_1_node';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Term Icon (field_term_icon:fid) */
  $handler->display->display_options['sorts']['field_term_icon_fid']['id'] = 'field_term_icon_fid';
  $handler->display->display_options['sorts']['field_term_icon_fid']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['sorts']['field_term_icon_fid']['field'] = 'field_term_icon_fid';
  $handler->display->display_options['sorts']['field_term_icon_fid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_1' => 'vocabulary_1',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_taxonomy_vocabulary_1_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'place' => 'place',
  );
  $handler->display->display_options['path'] = 'admin/devtrac7/dq/pacetype';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Location Type Icons';
  $handler->display->display_options['menu']['description'] = 'Shows the Placetypes with their respective icons';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Edit districts */
  $handler = $view->new_display('page', 'Edit districts', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Edit Districts';
  $handler->display->display_options['display_description'] = 'A view that will help editors to easily find and edit districts esp add categories';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_term_icon' => 'field_term_icon',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_term_icon' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'No.';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'District';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: UNICEF Category */
  $handler->display->display_options['fields']['field_district_category']['id'] = 'field_district_category';
  $handler->display->display_options['fields']['field_district_category']['table'] = 'field_data_field_district_category';
  $handler->display->display_options['fields']['field_district_category']['field'] = 'field_district_category';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Term Icon (field_term_icon:fid) */
  $handler->display->display_options['sorts']['field_term_icon_fid']['id'] = 'field_term_icon_fid';
  $handler->display->display_options['sorts']['field_term_icon_fid']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['sorts']['field_term_icon_fid']['field'] = 'field_term_icon_fid';
  $handler->display->display_options['sorts']['field_term_icon_fid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_6' => 'vocabulary_6',
  );
  /* Filter criterion: Taxonomy term: UNICEF Category (field_district_category) */
  $handler->display->display_options['filters']['field_district_category_tid']['id'] = 'field_district_category_tid';
  $handler->display->display_options['filters']['field_district_category_tid']['table'] = 'field_data_field_district_category';
  $handler->display->display_options['filters']['field_district_category_tid']['field'] = 'field_district_category_tid';
  $handler->display->display_options['filters']['field_district_category_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_district_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_district_category_tid']['expose']['operator_id'] = 'field_district_category_tid_op';
  $handler->display->display_options['filters']['field_district_category_tid']['expose']['label'] = 'UNICEF Category';
  $handler->display->display_options['filters']['field_district_category_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_district_category_tid']['expose']['operator'] = 'field_district_category_tid_op';
  $handler->display->display_options['filters']['field_district_category_tid']['expose']['identifier'] = 'field_district_category_tid';
  $handler->display->display_options['filters']['field_district_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_district_category_tid']['vocabulary'] = 'district_category';
  $handler->display->display_options['path'] = 'admin/devtrac7/dq/edit-districts';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Edit districts';
  $handler->display->display_options['menu']['description'] = 'This view helps UNICEF Editors to easily locate and edit districts';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $export['admin_taxonomy_view'] = $view;

  $view = new view();
  $view->name = 'district_check';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'District Check';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'District Check';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'field_data_field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'centroid',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_6' => 'vocabulary_6',
  );
  /* Filter criterion: Taxonomy term: Geo (field_district_geo:lat) */
  $handler->display->display_options['filters']['field_district_geo_lat']['id'] = 'field_district_geo_lat';
  $handler->display->display_options['filters']['field_district_geo_lat']['table'] = 'field_data_field_district_geo';
  $handler->display->display_options['filters']['field_district_geo_lat']['field'] = 'field_district_geo_lat';
  $handler->display->display_options['filters']['field_district_geo_lat']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_district_geo_lat']['expose']['operator_id'] = 'field_district_geo_lat_op';
  $handler->display->display_options['filters']['field_district_geo_lat']['expose']['label'] = 'Geo (field_district_geo:lat)';
  $handler->display->display_options['filters']['field_district_geo_lat']['expose']['operator'] = 'field_district_geo_lat_op';
  $handler->display->display_options['filters']['field_district_geo_lat']['expose']['identifier'] = 'field_district_geo_lat';

  /* Display: District Check */
  $handler = $view->new_display('page', 'District Check', 'page');
  $handler->display->display_options['display_description'] = 'Shows if districts have lat+lon';
  $handler->display->display_options['path'] = 'admin/devtrac7/district-check';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Check District';
  $handler->display->display_options['menu']['description'] = 'Checks if districts have a valid Geo field';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['district_check'] = $view;

  return $export;
}
