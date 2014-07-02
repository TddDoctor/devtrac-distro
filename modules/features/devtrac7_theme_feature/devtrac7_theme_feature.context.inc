<?php
/**
 * @file
 * devtrac7_theme_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac7_theme_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all_pages';
  $context->description = 'Blocks that are active on all pages';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-75',
        ),
        'nice_menus-1' => array(
          'module' => 'nice_menus',
          'delta' => 1,
          'region' => 'menu',
          'weight' => '-71',
        ),
        'pane-credit_footer_block' => array(
          'module' => 'pane',
          'delta' => 'credit_footer_block',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'menu-menu-footermenu-right' => array(
          'module' => 'menu',
          'delta' => 'menu-footermenu-right',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
        'devtrac7_mymenu-my_menu_block' => array(
          'module' => 'devtrac7_mymenu',
          'delta' => 'my_menu_block',
          'region' => 'my_items_menu',
          'weight' => '10',
        ),
        'nice_menus-3' => array(
          'module' => 'nice_menus',
          'delta' => 3,
          'region' => 'my_items_menu',
          'weight' => '-9',
        ),
        'nice_menus-2' => array(
          'module' => 'nice_menus',
          'delta' => 2,
          'region' => 'my_tool_menu',
          'weight' => '-71',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks that are active on all pages');
  $export['all_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'districts';
  $context->description = 'District home pages';
  $context->tag = 'nodetype';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'vocabulary_6' => 'vocabulary_6',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-district-block' => array(
          'module' => 'views',
          'delta' => 'district-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-district-block_3' => array(
          'module' => 'views',
          'delta' => 'district-block_3',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-dvtrc_site_visits-block_10' => array(
          'module' => 'views',
          'delta' => 'dvtrc_site_visits-block_10',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'quicktabs-districts' => array(
          'module' => 'quicktabs',
          'delta' => 'districts',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'views-district-block_1' => array(
          'module' => 'views',
          'delta' => 'district-block_1',
          'region' => 'preface_second',
          'weight' => '-10',
        ),
        'views-538b9daa0b38d7e753e8182fb962d4a2' => array(
          'module' => 'views',
          'delta' => '538b9daa0b38d7e753e8182fb962d4a2',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'pane-devtrac_solr_map_info' => array(
          'module' => 'pane',
          'delta' => 'devtrac_solr_map_info',
          'region' => 'my_tool_menu',
          'weight' => '-80',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'dashboardpage_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('District home pages');
  t('nodetype');
  $export['districts'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'node-view-actionitem';
  $context->description = 'Blocks on Action Items';
  $context->tag = 'nodetype';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'actionitem' => 'actionitem',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-dvtrc_action_items-block_5' => array(
          'module' => 'views',
          'delta' => 'dvtrc_action_items-block_5',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'commentblock-commentblock' => array(
          'module' => 'commentblock',
          'delta' => 'commentblock',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'views-dvtrc_action_items-block_2' => array(
          'module' => 'views',
          'delta' => 'dvtrc_action_items-block_2',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
        'pane-action_items_info' => array(
          'module' => 'pane',
          'delta' => 'action_items_info',
          'region' => 'my_tool_menu',
          'weight' => '-80',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'actionitems_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks on Action Items');
  t('nodetype');
  $export['node-view-actionitem'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'node-view-ftreportitem';
  $context->description = 'Show on Field Trip Report Items';
  $context->tag = 'nodetype';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ftritem' => 'ftritem',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-dvtrc_site_visits-block_4' => array(
          'module' => 'views',
          'delta' => 'dvtrc_site_visits-block_4',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'commentblock-commentblock' => array(
          'module' => 'commentblock',
          'delta' => 'commentblock',
          'region' => 'preface_first',
          'weight' => '-98',
        ),
        'quicktabs-site_visit_quicktabs' => array(
          'module' => 'quicktabs',
          'delta' => 'site_visit_quicktabs',
          'region' => 'preface_first',
          'weight' => '-89',
        ),
        'views-dvtrc_site_visits-block_2' => array(
          'module' => 'views',
          'delta' => 'dvtrc_site_visits-block_2',
          'region' => 'preface_second',
          'weight' => '-10',
        ),
        'views-dvtrc_site_visits-block_3' => array(
          'module' => 'views',
          'delta' => 'dvtrc_site_visits-block_3',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
        'pane-front_about_information' => array(
          'module' => 'pane',
          'delta' => 'front_about_information',
          'region' => 'my_tool_menu',
          'weight' => '-80',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'dashboardpage_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Show on Field Trip Report Items');
  t('nodetype');
  $export['node-view-ftreportitem'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'node-view-page';
  $context->description = 'Context for Informational Pages';
  $context->tag = 'nodetype';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'contact-us' => 'contact-us',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu-menu-funding-partners' => array(
          'module' => 'menu',
          'delta' => 'menu-funding-partners',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'informationalpage_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for Informational Pages');
  t('nodetype');
  $export['node-view-page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'node-view-place';
  $context->description = 'To be shown on location pages (Locations)';
  $context->tag = 'nodetype';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'place' => 'place',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-dvtrc_site_visits-block_15' => array(
          'module' => 'views',
          'delta' => 'dvtrc_site_visits-block_15',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'quicktabs-location_quicktabs' => array(
          'module' => 'quicktabs',
          'delta' => 'location_quicktabs',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'views-dvtrc_locations-block_2' => array(
          'module' => 'views',
          'delta' => 'dvtrc_locations-block_2',
          'region' => 'preface_second',
          'weight' => '-9',
        ),
        'views-dvtrc_site_visits-block_5' => array(
          'module' => 'views',
          'delta' => 'dvtrc_site_visits-block_5',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
        'pane-locations_info' => array(
          'module' => 'pane',
          'delta' => 'locations_info',
          'region' => 'my_tool_menu',
          'weight' => '-80',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'dashboardpage_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('To be shown on location pages (Locations)');
  t('nodetype');
  $export['node-view-place'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'node_view_field_trip';
  $context->description = 'Field Trip page';
  $context->tag = 'nodetype';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'fieldtrip' => 'fieldtrip',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-dvtrc_field_trip-block_4' => array(
          'module' => 'views',
          'delta' => 'dvtrc_field_trip-block_4',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'quicktabs-fieldtrip_content_first' => array(
          'module' => 'quicktabs',
          'delta' => 'fieldtrip_content_first',
          'region' => 'preface_first',
          'weight' => '-87',
        ),
        'views-dvtrc_field_trip-block_2' => array(
          'module' => 'views',
          'delta' => 'dvtrc_field_trip-block_2',
          'region' => 'preface_second',
          'weight' => '-10',
        ),
        'views-dvtrc_field_trip-block_3' => array(
          'module' => 'views',
          'delta' => 'dvtrc_field_trip-block_3',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
        'pane-field_trips_info' => array(
          'module' => 'pane',
          'delta' => 'field_trips_info',
          'region' => 'my_tool_menu',
          'weight' => '-80',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'dashboardpage_layout',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Field Trip page');
  t('nodetype');
  $export['node_view_field_trip'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'oecd_sector_code';
  $context->description = 'Sector pages';
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'vocabulary_8' => 'vocabulary_8',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-oecd_sector_code-block' => array(
          'module' => 'views',
          'delta' => 'oecd_sector_code-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-oecd_sector_code-block_3' => array(
          'module' => 'views',
          'delta' => 'oecd_sector_code-block_3',
          'region' => 'content',
          'weight' => '8',
        ),
        'views-dvtrc_site_visits-block_17' => array(
          'module' => 'views',
          'delta' => 'dvtrc_site_visits-block_17',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'quicktabs-sector' => array(
          'module' => 'quicktabs',
          'delta' => 'sector',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'views-oecd_sector_code-block_2' => array(
          'module' => 'views',
          'delta' => 'oecd_sector_code-block_2',
          'region' => 'preface_second',
          'weight' => '-10',
        ),
        'views-oecd_sector_code-block_1' => array(
          'module' => 'views',
          'delta' => 'oecd_sector_code-block_1',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'dashboardpage_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sector pages');
  t('taxonomy');
  $export['oecd_sector_code'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_my_team';
  $context->description = 'Context for my team page';
  $context->tag = 'user';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'dvtrc_user:page_6' => 'dvtrc_user:page_6',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-dvtrc_user-block_4' => array(
          'module' => 'views',
          'delta' => 'dvtrc_user-block_4',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'informationalpage_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for my team page');
  t('user');
  $export['user_my_team'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_profile';
  $context->description = 'User profile page';
  $context->tag = 'user';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-99',
        ),
        'views-dvtrc_user-block_4' => array(
          'module' => 'views',
          'delta' => 'dvtrc_user-block_4',
          'region' => 'content',
          'weight' => '99',
        ),
        'views-dvtrc_user-block_3' => array(
          'module' => 'views',
          'delta' => 'dvtrc_user-block_3',
          'region' => 'user_first',
          'weight' => '-10',
        ),
        'views-dvtrc_user-block_5' => array(
          'module' => 'views',
          'delta' => 'dvtrc_user-block_5',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'quicktabs-user_profile' => array(
          'module' => 'quicktabs',
          'delta' => 'user_profile',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'views-dvtrc_field_trip-block_10' => array(
          'module' => 'views',
          'delta' => 'dvtrc_field_trip-block_10',
          'region' => 'preface_second',
          'weight' => '-9',
        ),
        'views-dvtrc_field_trip-block_11' => array(
          'module' => 'views',
          'delta' => 'dvtrc_field_trip-block_11',
          'region' => 'preface_second',
          'weight' => '-8',
        ),
        'views-dvtrc_user-block_7' => array(
          'module' => 'views',
          'delta' => 'dvtrc_user-block_7',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
        'pane-user_info' => array(
          'module' => 'pane',
          'delta' => 'user_info',
          'region' => 'my_tool_menu',
          'weight' => '-80',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'user_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('User profile page');
  t('user');
  $export['user_profile'] = $context;

  return $export;
}
