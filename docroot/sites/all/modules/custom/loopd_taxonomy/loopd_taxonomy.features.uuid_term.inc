<?php
/**
 * @file
 * loopd_taxonomy.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function loopd_taxonomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Drupal module',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 1,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '020351f6-69cd-4e2d-893d-e010808a8b29',
    'vocabulary_machine_name' => 'article_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Theming',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '027d3635-434d-4eb4-9e8e-7e9de610c652',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Drupal Module: Essential',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 3,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '0fff95c5-6edb-4846-8c48-4c422f712d11',
    'vocabulary_machine_name' => 'article_types',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '020351f6-69cd-4e2d-893d-e010808a8b29',
    ),
  );
  $terms[] = array(
    'name' => 'Content Structure',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '1e08a4ee-4d99-4b44-958f-dd2de90d45da',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Maps',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '2fb43a4b-bbb0-43ae-ac7a-d238ad3be7a3',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Security',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '30a8b7ce-f953-4e4e-b786-b1abc36ed038',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Drupal Module: Development',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 2,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '56ef2429-573e-4b6d-aea4-4822c35dc1c6',
    'vocabulary_machine_name' => 'article_types',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '020351f6-69cd-4e2d-893d-e010808a8b29',
    ),
  );
  $terms[] = array(
    'name' => 'Workflow',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '59cc5407-950a-442c-953d-6c80a1aaa27a',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Multilingual',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '67d1d4d9-0240-48d4-a9e8-70ba7b7355d7',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Drupal Module: Specialty',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '6cbed1cc-605e-4314-a6da-3f4b622ca666',
    'vocabulary_machine_name' => 'article_types',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '020351f6-69cd-4e2d-893d-e010808a8b29',
    ),
  );
  $terms[] = array(
    'name' => 'Forms',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '780a608c-d24b-429c-9f50-bcf0e115d761',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Authoring',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '7d6f5175-3633-428d-bc4b-4f1fb4fbd95c',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Migration',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '8192ae10-860f-45f8-9daa-557d2ad84958',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Fields',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => '892aeef7-1257-4531-a55a-6d47eab7c71f',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Search',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => 'd21b77e9-5315-4798-bbf9-d1d2aba00405',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Drupal Module: Common',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 1,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => 'd75f4ec2-2924-4042-9461-49fc6dad7e38',
    'vocabulary_machine_name' => 'article_types',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '020351f6-69cd-4e2d-893d-e010808a8b29',
    ),
  );
  $terms[] = array(
    'name' => 'Spam',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => 'dd678623-3f45-46a9-9158-8e0c6ca79500',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'General',
    'description' => '',
    'format' => 'full_html_no_linebreaks',
    'weight' => 0,
    'rh_action' => NULL,
    'rh_redirect' => NULL,
    'rh_redirect_response' => NULL,
    'uuid' => 'ef632662-e459-4834-ab31-d25c1755ac9b',
    'vocabulary_machine_name' => 'article_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
