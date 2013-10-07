<?php
/**
 * @file
 * gsb_feature_phd_candidate_display.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_phd_candidate_display_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_graduation_class';
  $strongarm->value = '\'y';
  $export['date_format_graduation_class'] = $strongarm;

  return $export;
}
