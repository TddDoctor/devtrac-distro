<?php
/**
 * @file
 * devtrac7_theme_feature.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function devtrac7_theme_feature_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'credit_footer_block';
  $template->title = '';
  $template->plugin = 'text';
  $template->description = 'This is the block in the bottom left corner footer of all devtrac pages. It contains the copy right information';
  $template->configuration = '';
  $export['credit_footer_block'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function devtrac7_theme_feature_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'credit_footer_block_und';
  $template->container = 'credit_footer_block';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<span id="project-info-footer">Project by <a href="http://www.unicef.org/" target="_blank">Unicef Uganda</a> &copy; 2014 | Built by  <a href="http://www.mountbatten.net/" target="_blank">Mountbatten Ltd</a> | Hosted in Uganda</span> <br /><span id="Licensed-lower-footer">This work is licensed under a <a href="http://creativecommons.org/licenses/by-sa/3.0/" target="_blank" >Creative Commons Attribution-ShareAlike 3.0 Unported License</a></span>',
    'format' => '2',
    'title' => '<none>',
  );
  $export['credit_footer_block_und'] = $template;

  return $export;
}
