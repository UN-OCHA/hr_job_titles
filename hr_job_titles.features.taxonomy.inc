<?php
/**
 * @file
 * hr_job_titles.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hr_job_titles_taxonomy_default_vocabularies() {
  return array(
    'hr_job_title' => array(
      'name' => 'Job Title',
      'machine_name' => 'hr_job_title',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
