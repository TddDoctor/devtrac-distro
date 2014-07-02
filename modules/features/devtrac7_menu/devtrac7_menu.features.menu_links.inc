<?php
/**
 * @file
 * devtrac7_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function devtrac7_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_action-items:actionitems
  $menu_links['main-menu_action-items:actionitems'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'actionitems',
    'router_path' => 'actionitems',
    'link_title' => 'Action Items',
    'options' => array(
      'attributes' => array(
        'title' => 'Shows action items of Devtrac reporters from the field',
        'class' => array(
          0 => 'purl_search_api_noreset',
          1 => 'purl_search_api_noreset',
          2 => 'purl_search_api_noreset',
          3 => 'purl_search_api_noreset',
        ),
      ),
      'identifier' => 'main-menu_action-items:actionitems',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_activities:activities
  $menu_links['main-menu_activities:activities'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'activities',
    'router_path' => 'activities',
    'link_title' => 'Activities',
    'options' => array(
      'identifier' => 'main-menu_activities:activities',
      'attributes' => array(
        'class' => array(
          0 => 'purl_search_api_noreset',
        ),
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact:contact
  $menu_links['main-menu_contact:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'main-menu_contact:contact',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: main-menu_districts:districts
  $menu_links['main-menu_adminunits:adminunits'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'adminunits',
    'router_path' => 'adminunits',
    'link_title' => 'Admin Units',
    'options' => array(
      'identifier' => 'main-menu_adminunits:adminunits',
      'attributes' => array(
        'class' => array(
          0 => 'purl_search_api_noreset',
        ),
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_field-trips:fieldtrips
  $menu_links['main-menu_field-trips:fieldtrips'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'fieldtrips',
    'router_path' => 'fieldtrips',
    'link_title' => 'Field trips',
    'options' => array(
      'attributes' => array(
        'title' => 'Shows Field Trips of Devtrac reporters from the field',
        'class' => array(
          0 => 'purl_search_api_noreset',
          1 => 'purl_search_api_noreset',
          2 => 'purl_search_api_noreset',
          3 => 'purl_search_api_noreset',
          4 => 'purl_search_api_noreset',
        ),
      ),
      'identifier' => 'main-menu_field-trips:fieldtrips',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_locations:locations
  $menu_links['main-menu_locations:locations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'locations',
    'router_path' => 'locations',
    'link_title' => 'Locations',
    'options' => array(
      'attributes' => array(
        'title' => 'Main link for the locations map (Main)',
        'class' => array(
          0 => 'purl_search_api_noreset',
        ),
      ),
      'identifier' => 'main-menu_locations:locations',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_organisations:organisations
  $menu_links['main-menu_organisations:organisations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'organisations',
    'router_path' => 'organisations',
    'link_title' => 'Organisations',
    'options' => array(
      'identifier' => 'main-menu_organisations:organisations',
      'attributes' => array(
        'class' => array(
          0 => 'purl_search_api_noreset',
        ),
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sign-in:user/login
  $menu_links['main-menu_sign-in:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Sign in',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sign-in:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sign-out:user/logout
  $menu_links['main-menu_sign-out:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Sign out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sign-out:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Exported menu link: main-menu_site-reports:sitereports
  $menu_links['main-menu_site-reports:sitereports'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sitereports',
    'router_path' => 'sitereports',
    'link_title' => 'Site Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'Shows reports of Devtrac reporters from the field',
        'class' => array(
          0 => 'purl_search_api_noreset',
          1 => 'purl_search_api_noreset',
          2 => 'purl_search_api_noreset',
          3 => 'purl_search_api_noreset',
        ),
      ),
      'identifier' => 'main-menu_site-reports:sitereports',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_statistics:statistics
  $menu_links['main-menu_statistics:statistics'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'statistics',
    'router_path' => 'statistics',
    'link_title' => 'Statistics',
    'options' => array(
      'attributes' => array(
        'title' => 'Statistics',
        'class' => array(
          0 => 'purl_search_api_noreset',
          1 => 'purl_search_api_noreset',
          2 => 'purl_search_api_noreset',
          3 => 'purl_search_api_noreset',
        ),
      ),
      'identifier' => 'main-menu_statistics:statistics',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_users:users
  $menu_links['main-menu_users:users'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'users',
    'router_path' => 'users',
    'link_title' => 'Users',
    'options' => array(
      'attributes' => array(
        'title' => 'List of users of Devtrac',
      ),
      'identifier' => 'main-menu_users:users',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-footermenu-right_contact-us:contact
  $menu_links['menu-footermenu-right_contact-us:contact'] = array(
    'menu_name' => 'menu-footermenu-right',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footermenu-right_contact-us:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
/*
  // Exported menu link: menu-my-profile_add-field-trip:node/add/fieldtrip
  $menu_links['menu-my-profile_add-field-trip:node/add/fieldtrip'] = array(
    'menu_name' => 'menu-my-profile',
    'link_path' => 'node/add/fieldtrip',
    'router_path' => 'node/add/fieldtrip',
    'link_title' => 'Add Field Trip',
    'options' => array(
      'menu_token_link_path' => 'node/add/fieldtrip?field_fieldtrip_user=[current-user:uid]&field_fieldtrip_places=',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => FALSE,
      'query' => array(
        'field_fieldtrip_user' => 3,
        'field_fieldtrip_places' => '',
      ),
      'identifier' => 'menu-my-profile_add-field-trip:node/add/fieldtrip',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-my-profile_admin:admin
  $menu_links['menu-my-profile_admin:admin'] = array(
    'menu_name' => 'menu-my-profile',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Admin',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-my-profile_admin:admin',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-my-profile_edit-my-profile:user/3/edit
  $menu_links['menu-my-profile_edit-my-profile:user/3/edit'] = array(
    'menu_name' => 'menu-my-profile',
    'link_path' => 'user/3/edit',
    'router_path' => 'user/%/edit',
    'link_title' => 'Edit My profile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => FALSE,
      'menu_token_link_path' => 'user/[current-user:uid]/edit',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'identifier' => 'menu-my-profile_edit-my-profile:user/3/edit',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-my-profile_edit-my-profile:user/5/edit
  $menu_links['menu-my-profile_edit-my-profile:user/5/edit'] = array(
    'menu_name' => 'menu-my-profile',
    'link_path' => 'user/5/edit',
    'router_path' => 'user/%/edit',
    'link_title' => 'Edit My profile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_token_link_path' => '[current-user:edit-url]',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'purl' => array(
        'disabled' => 1,
      ),
      'identifier' => 'menu-my-profile_edit-my-profile:user/5/edit',
      'menu_token_link_uuid' => 'user/5/edit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-my-profile_welcome-reinier:http://localhost/devtrac/users/reinier',
  );
  // Exported menu link: menu-my-profile_my-profile:user/3
  $menu_links['menu-my-profile_my-profile:user/3'] = array(
    'menu_name' => 'menu-my-profile',
    'link_path' => 'user/3',
    'router_path' => 'user/%',
    'link_title' => 'My Profile',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => FALSE,
      'identifier' => 'menu-my-profile_my-profile:user/3',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
*/
  // Translatables
  // Included for use with string extractors like potx.
  t('Action Items');
  t('Activities');
//  t('Add Field Trip');
//  t('Admin');
  t('Contact');
  t('Contact Us');
  t('Districts');
//  t('Edit My profile');
  t('Field trips');
  t('Locations');
//  t('My Profile');
  t('Organisations');
  t('Sign in');
  t('Sign out');
  t('Site Reports');
  t('Statistics');
  t('Users');


  return $menu_links;
}
