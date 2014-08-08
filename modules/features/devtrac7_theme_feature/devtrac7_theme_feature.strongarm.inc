<?php
/**
 * @file
 * devtrac7_theme_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac7_theme_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'shiny';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_messages';
  $strongarm->value = array(
    'position' => 'center',
    'vertical' => '0',
    'horizontal' => '10',
    'fixed' => 1,
    'width' => '400px',
    'autoclose' => '5',
    'opendelay' => '0.3',
    'disable_autoclose' => 1,
    'show_countdown' => 1,
    'hover_autoclose' => 1,
    'popin' => array(
      'effect' => 'fadeIn',
      'duration' => 'slow',
    ),
    'popout' => array(
      'effect' => 'fadeIn',
      'duration' => 'slow',
    ),
    'jquery_ui' => array(
      'draggable' => 0,
      'resizable' => 0,
    ),
    'extra' => array(
      'pages' => '',
      'visibility' => '0',
    ),
  );
  $export['better_messages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blockify_blocks';
  $strongarm->value = array(
    'blockify-feed-icons' => 'blockify-feed-icons',
    'blockify-logo' => 0,
    'blockify-site-name' => 0,
    'blockify-site-slogan' => 0,
    'blockify-page-title' => 0,
    'blockify-breadcrumb' => 0,
    'blockify-tabs' => 0,
    'blockify-messages' => 0,
    'blockify-actions' => 0,
  );
  $export['blockify_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_caption_trim';
  $strongarm->value = '0';
  $export['colorbox_caption_trim'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_caption_trim_length';
  $strongarm->value = '75';
  $export['colorbox_caption_trim_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_compression_type';
  $strongarm->value = 'min';
  $export['colorbox_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_custom_settings_activate';
  $strongarm->value = '0';
  $export['colorbox_custom_settings_activate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_fixed';
  $strongarm->value = 1;
  $export['colorbox_fixed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_initialheight';
  $strongarm->value = '100';
  $export['colorbox_initialheight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_initialwidth';
  $strongarm->value = '300';
  $export['colorbox_initialwidth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_inline';
  $strongarm->value = 0;
  $export['colorbox_inline'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_load';
  $strongarm->value = 0;
  $export['colorbox_load'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_login';
  $strongarm->value = 1;
  $export['colorbox_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_login_links';
  $strongarm->value = '1';
  $export['colorbox_login_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_maxheight';
  $strongarm->value = '100%';
  $export['colorbox_maxheight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_maxwidth';
  $strongarm->value = '100%';
  $export['colorbox_maxwidth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_opacity';
  $strongarm->value = '0.85';
  $export['colorbox_opacity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_overlayclose';
  $strongarm->value = 1;
  $export['colorbox_overlayclose'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_pages';
  $strongarm->value = 'admin*
imagebrowser*
img_assist*
imce*
print/*
printpdf/*
system/ajax
system/ajax/*';
  $export['colorbox_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_path';
  $strongarm->value = 'profiles/devtrac/libraries/colorbox';
  $export['colorbox_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_scrolling';
  $strongarm->value = '1';
  $export['colorbox_scrolling'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_slideshow';
  $strongarm->value = '0';
  $export['colorbox_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_slideshowauto';
  $strongarm->value = 1;
  $export['colorbox_slideshowauto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_slideshowspeed';
  $strongarm->value = '2500';
  $export['colorbox_slideshowspeed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_style';
  $strongarm->value = 'default';
  $export['colorbox_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_close';
  $strongarm->value = 'Close';
  $export['colorbox_text_close'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_current';
  $strongarm->value = '{current} of {total}';
  $export['colorbox_text_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_next';
  $strongarm->value = 'Next »';
  $export['colorbox_text_next'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_previous';
  $strongarm->value = '« Prev';
  $export['colorbox_text_previous'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_start';
  $strongarm->value = 'start slideshow';
  $export['colorbox_text_start'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_stop';
  $strongarm->value = 'stop slideshow';
  $export['colorbox_text_stop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_transition_speed';
  $strongarm->value = '350';
  $export['colorbox_transition_speed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_transition_type';
  $strongarm->value = 'elastic';
  $export['colorbox_transition_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_visibility';
  $strongarm->value = '0';
  $export['colorbox_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_adjust_module_weights';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_adjust_module_weights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_append_bid_class';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_append_bid_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_append_page_title';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_append_page_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_append_page_title_no_link';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_append_page_title_no_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_even_odd_class';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_even_odd_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_exclude_list';
  $strongarm->value = 'admin/user/user,user';
  $export['custom_breadcrumbs_exclude_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_force_active_trail';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_force_active_trail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_menu_list';
  $strongarm->value = array();
  $export['custom_breadcrumbs_menu_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_none_span';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_none_span'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_parts_class';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_parts_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_paths_allow_wildcards';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_paths_allow_wildcards'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_set_global_home_breadcrumb';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_set_global_home_breadcrumb'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_set_menu_breadcrumb';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_set_menu_breadcrumb'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_show_form_table_ftritem';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_show_form_table_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_show_form_table_user_profile';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_show_form_table_user_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_sort';
  $strongarm->value = array(
    'direction' => array(
      'name' => 'asc',
      'breadcrumb_type' => 'asc',
      'language' => 'asc',
    ),
    'column' => 'name',
  );
  $export['custom_breadcrumbs_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_taxonomy_append_breadcrumb';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_taxonomy_append_breadcrumb'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_taxonomy_excluded_vocabs';
  $strongarm->value = array(
    4 => '4',
    5 => '5',
    2 => '2',
    10 => '10',
    1 => '1',
    9 => '9',
    7 => '7',
    6 => 0,
    8 => 0,
  );
  $export['custom_breadcrumbs_taxonomy_excluded_vocabs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_taxonomy_include_nodes';
  $strongarm->value = '0';
  $export['custom_breadcrumbs_taxonomy_include_nodes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_taxonomy_include_node_title';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_taxonomy_include_node_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_taxonomy_node_types';
  $strongarm->value = array(
    'actionitem' => 0,
    'fieldtrip' => 0,
    'ftritem' => 0,
    'iati_activity' => 0,
    'iati_organisation' => 0,
    'page' => 0,
    'place' => 0,
    'questionnaire_question' => 0,
    'story' => 0,
  );
  $export['custom_breadcrumbs_taxonomy_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_taxonomy_no_anon_sessions';
  $strongarm->value = FALSE;
  $export['custom_breadcrumbs_taxonomy_no_anon_sessions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_taxonomy_result_nodes';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_taxonomy_result_nodes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_taxonomy_session';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_taxonomy_session'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_taxonomy_show_current_term';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_taxonomy_show_current_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_taxonomy_show_current_term_term';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_taxonomy_show_current_term_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_taxonomy_show_vocabulary';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_taxonomy_show_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_taxonomy_uncache';
  $strongarm->value = FALSE;
  $export['custom_breadcrumbs_taxonomy_uncache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_taxonomy_use_hierarchy';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_taxonomy_use_hierarchy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_taxonomy_views';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_taxonomy_views'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_type_class';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_type_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_use_exclude_list';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_use_exclude_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_use_php_in_titles';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_use_php_in_titles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumb_home';
  $strongarm->value = 'Home';
  $export['custom_breadcrumb_home'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:actionitem:full:field_actionitem_due_date_fromto';
  $strongarm->value = 'both';
  $export['date:actionitem:full:field_actionitem_due_date_fromto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:actionitem:full:field_actionitem_due_date_multiple_from';
  $strongarm->value = '';
  $export['date:actionitem:full:field_actionitem_due_date_multiple_from'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:actionitem:full:field_actionitem_due_date_multiple_number';
  $strongarm->value = '';
  $export['date:actionitem:full:field_actionitem_due_date_multiple_number'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:actionitem:full:field_actionitem_due_date_multiple_to';
  $strongarm->value = '';
  $export['date:actionitem:full:field_actionitem_due_date_multiple_to'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:actionitem:full:field_actionitem_due_date_show_repeat_rule';
  $strongarm->value = 'show';
  $export['date:actionitem:full:field_actionitem_due_date_show_repeat_rule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:actionitem:teaser:field_actionitem_due_date_fromto';
  $strongarm->value = 'both';
  $export['date:actionitem:teaser:field_actionitem_due_date_fromto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:actionitem:teaser:field_actionitem_due_date_multiple_from';
  $strongarm->value = '';
  $export['date:actionitem:teaser:field_actionitem_due_date_multiple_from'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:actionitem:teaser:field_actionitem_due_date_multiple_number';
  $strongarm->value = '';
  $export['date:actionitem:teaser:field_actionitem_due_date_multiple_number'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:actionitem:teaser:field_actionitem_due_date_multiple_to';
  $strongarm->value = '';
  $export['date:actionitem:teaser:field_actionitem_due_date_multiple_to'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:actionitem:teaser:field_actionitem_due_date_show_repeat_rule';
  $strongarm->value = 'show';
  $export['date:actionitem:teaser:field_actionitem_due_date_show_repeat_rule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:fieldtrip:full:field_fieldtrip_start_end_date_fromto';
  $strongarm->value = 'both';
  $export['date:fieldtrip:full:field_fieldtrip_start_end_date_fromto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:fieldtrip:full:field_fieldtrip_start_end_date_multiple_from';
  $strongarm->value = '';
  $export['date:fieldtrip:full:field_fieldtrip_start_end_date_multiple_from'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:fieldtrip:full:field_fieldtrip_start_end_date_multiple_number';
  $strongarm->value = '';
  $export['date:fieldtrip:full:field_fieldtrip_start_end_date_multiple_number'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:fieldtrip:full:field_fieldtrip_start_end_date_multiple_to';
  $strongarm->value = '';
  $export['date:fieldtrip:full:field_fieldtrip_start_end_date_multiple_to'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:fieldtrip:full:field_fieldtrip_start_end_date_show_repeat_rule';
  $strongarm->value = 'show';
  $export['date:fieldtrip:full:field_fieldtrip_start_end_date_show_repeat_rule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:fieldtrip:teaser:field_fieldtrip_start_end_date_fromto';
  $strongarm->value = 'both';
  $export['date:fieldtrip:teaser:field_fieldtrip_start_end_date_fromto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:fieldtrip:teaser:field_fieldtrip_start_end_date_multiple_from';
  $strongarm->value = '';
  $export['date:fieldtrip:teaser:field_fieldtrip_start_end_date_multiple_from'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:fieldtrip:teaser:field_fieldtrip_start_end_date_multiple_number';
  $strongarm->value = '';
  $export['date:fieldtrip:teaser:field_fieldtrip_start_end_date_multiple_number'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:fieldtrip:teaser:field_fieldtrip_start_end_date_multiple_to';
  $strongarm->value = '';
  $export['date:fieldtrip:teaser:field_fieldtrip_start_end_date_multiple_to'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:fieldtrip:teaser:field_fieldtrip_start_end_date_show_repeat_rule';
  $strongarm->value = 'show';
  $export['date:fieldtrip:teaser:field_fieldtrip_start_end_date_show_repeat_rule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'delta_blocks_branding_logo_linked';
  $strongarm->value = TRUE;
  $export['delta_blocks_branding_logo_linked'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'delta_blocks_branding_logo_render';
  $strongarm->value = TRUE;
  $export['delta_blocks_branding_logo_render'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'delta_blocks_branding_site_name_hidden';
  $strongarm->value = FALSE;
  $export['delta_blocks_branding_site_name_hidden'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'delta_blocks_logo_linked';
  $strongarm->value = TRUE;
  $export['delta_blocks_logo_linked'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 0;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_fields';
  $strongarm->value = array(
    'field_user_firstname' => '0',
    'field_user_surname' => '0',
  );
  $export['realname_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_pattern';
  $strongarm->value = '[user:field_user_firstname] [user:field_user_surname]';
  $export['realname_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'sitereports';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'devtrac7_theme';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'collapsiblock_block' => 'section.block',
    'collapsiblock_title' => 'h2.block-title',
    'collapsiblock_content' => 'div.content',
    'nice_menus_custom_css' => '',
  );
  $export['theme_settings'] = $strongarm;

  return $export;
}
