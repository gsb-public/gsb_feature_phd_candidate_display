<?php
/**
 * @file
 * gsb_feature_phd_candidate_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_phd_candidate_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'phd_candidate_placement_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PhD Candidate Placement Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_academic_area_single',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<span id="placement-listing-top"></span>';
  $handler->display->display_options['header']['area']['format'] = 'gsb_html_text';
  /* Header: Global: View (Views field view) */
  $handler->display->display_options['header']['view_field']['id'] = 'view_field';
  $handler->display->display_options['header']['view_field']['table'] = 'views';
  $handler->display->display_options['header']['view_field']['field'] = 'view_field';
  $handler->display->display_options['header']['view_field']['label'] = '';
  $handler->display->display_options['header']['view_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['header']['view_field']['view'] = 'phd_job_market_candidates';
  $handler->display->display_options['header']['view_field']['display'] = 'phd_job_market_jump_links';
  /* Field: Content: Academic Area */
  $handler->display->display_options['fields']['field_academic_area_single']['id'] = 'field_academic_area_single';
  $handler->display->display_options['fields']['field_academic_area_single']['table'] = 'field_data_field_academic_area_single';
  $handler->display->display_options['fields']['field_academic_area_single']['field'] = 'field_academic_area_single';
  $handler->display->display_options['fields']['field_academic_area_single']['label'] = '';
  $handler->display->display_options['fields']['field_academic_area_single']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_academic_area_single']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_academic_area_single']['alter']['text'] = '<div id="academic-area-[field_academic_area_single-tid]">[field_academic_area_single]</div>';
  $handler->display->display_options['fields']['field_academic_area_single']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_academic_area_single']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_academic_area_single']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Graduation Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['label'] = '';
  $handler->display->display_options['fields']['field_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'date_format_two_digit_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title], [field_year]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Academic Institution */
  $handler->display->display_options['fields']['field_academic_institution']['id'] = 'field_academic_institution';
  $handler->display->display_options['fields']['field_academic_institution']['table'] = 'field_data_field_academic_institution';
  $handler->display->display_options['fields']['field_academic_institution']['field'] = 'field_academic_institution';
  $handler->display->display_options['fields']['field_academic_institution']['label'] = '';
  $handler->display->display_options['fields']['field_academic_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_academic_institution']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Dissertation */
  $handler->display->display_options['fields']['field_dissertation']['id'] = 'field_dissertation';
  $handler->display->display_options['fields']['field_dissertation']['table'] = 'field_data_field_dissertation';
  $handler->display->display_options['fields']['field_dissertation']['field'] = 'field_dissertation';
  $handler->display->display_options['fields']['field_dissertation']['label'] = '';
  $handler->display->display_options['fields']['field_dissertation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dissertation']['alter']['text'] = '[field_dissertation]';
  $handler->display->display_options['fields']['field_dissertation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dissertation']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: Content: Academic Area (field_academic_area_single) */
  $handler->display->display_options['sorts']['field_academic_area_single_tid']['id'] = 'field_academic_area_single_tid';
  $handler->display->display_options['sorts']['field_academic_area_single_tid']['table'] = 'field_data_field_academic_area_single';
  $handler->display->display_options['sorts']['field_academic_area_single_tid']['field'] = 'field_academic_area_single_tid';
  /* Sort criterion: Field: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'phd_candidate' => 'phd_candidate',
  );
  /* Filter criterion: Content: Display Settings (for Administrative use only) (field_job_display) */
  $handler->display->display_options['filters']['field_job_display_value']['id'] = 'field_job_display_value';
  $handler->display->display_options['filters']['field_job_display_value']['table'] = 'field_data_field_job_display';
  $handler->display->display_options['filters']['field_job_display_value']['field'] = 'field_job_display_value';
  $handler->display->display_options['filters']['field_job_display_value']['value'] = array(
    'placement_page' => 'placement_page',
  );
  /* Filter criterion: Field: Graduation Year (field_year) */
  $handler->display->display_options['filters']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['filters']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_year_value']['default_date'] = 'now -8 year';
  $handler->display->display_options['filters']['field_year_value']['default_to_date'] = 'now';
  $handler->display->display_options['filters']['field_year_value']['year_range'] = '-8:+0';

  /* Display: Phd Candidate Placement Listing */
  $handler = $view->new_display('panel_pane', 'Phd Candidate Placement Listing', 'panel_pane_phd_placement_listing');
  $handler->display->display_options['pane_title'] = 'Phd Candidate Placement Listing';
  $handler->display->display_options['pane_category']['name'] = 'Other';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['phd_candidate_placement_listing'] = $view;

  $view = new view();
  $view->name = 'phd_job_market_candidate_detail';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PhD Job Market Candidate Detail';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'phd_job_market_candidate';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'phd_job_market_candidate';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no candidates in this academic area.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = '[view_node] ';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[view_node]';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'academic_area' => 'academic_area',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'phd_candidate' => 'phd_candidate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = '';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'academic_area';
  /* Filter criterion: Content: Display Settings (for Administrative use only) (field_job_display) */
  $handler->display->display_options['filters']['field_job_display_value']['id'] = 'field_job_display_value';
  $handler->display->display_options['filters']['field_job_display_value']['table'] = 'field_data_field_job_display';
  $handler->display->display_options['filters']['field_job_display_value']['field'] = 'field_job_display_value';
  $handler->display->display_options['filters']['field_job_display_value']['value'] = array(
    'job_market_page' => 'job_market_page',
  );
  $export['phd_job_market_candidate_detail'] = $view;

  $view = new view();
  $view->name = 'phd_job_market_candidates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'PhD Job Market Candidates Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<div id="academic-area-[tid]">[name]</div>';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'phd_job_market_candidate_detail';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'academic_area' => 'academic_area',
  );

  /* Display: Phd Job Market Candidate Listing */
  $handler = $view->new_display('panel_pane', 'Phd Job Market Candidate Listing', 'panel_pane_phd_job_market_listing');
  $handler->display->display_options['pane_title'] = 'Phd Job Market Candidate Listing';
  $handler->display->display_options['pane_category']['name'] = 'Other';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Jump Links */
  $handler = $view->new_display('attachment', 'Jump Links', 'phd_job_market_jump_links');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Academic Areas';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = '<div id="academic-area-[tid]">[name]</div>';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '#academic-area-[tid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'panel_pane_phd_job_market_listing' => 'panel_pane_phd_job_market_listing',
    'default' => 0,
  );
  $export['phd_job_market_candidates'] = $view;

  return $export;
}
