<?php
/**
 * @file
 * loopd_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function loopd_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search';
  $page->task = 'page';
  $page->admin_title = 'Search';
  $page->admin_description = 'Main site search.';
  $page->path = 'search';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Search';
  $display->uuid = '252685c7-f902-47c4-91e5-67b69fb2f403';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-86dcb5f7-476c-4c77-abb0-3f15118c76ac';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'search_db-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '86dcb5f7-476c-4c77-abb0-3f15118c76ac';
    $display->content['new-86dcb5f7-476c-4c77-abb0-3f15118c76ac'] = $pane;
    $display->panels['left'][0] = 'new-86dcb5f7-476c-4c77-abb0-3f15118c76ac';
    $pane = new stdClass();
    $pane->pid = 'new-39cde002-3fe8-43e7-997d-8d1a7dd06e98';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-search_db-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '39cde002-3fe8-43e7-997d-8d1a7dd06e98';
    $display->content['new-39cde002-3fe8-43e7-997d-8d1a7dd06e98'] = $pane;
    $display->panels['right'][0] = 'new-39cde002-3fe8-43e7-997d-8d1a7dd06e98';
    $pane = new stdClass();
    $pane->pid = 'new-71927080-aaa8-4c04-81bd-95092bac8502';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'current_search-standard';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '71927080-aaa8-4c04-81bd-95092bac8502';
    $display->content['new-71927080-aaa8-4c04-81bd-95092bac8502'] = $pane;
    $display->panels['right'][1] = 'new-71927080-aaa8-4c04-81bd-95092bac8502';
    $pane = new stdClass();
    $pane->pid = 'new-6c19d780-48df-4ace-86bb-3e7d0cd601e1';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-c8cYQgWs1GM5FyN62xdChy0DUZMOpjO2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6c19d780-48df-4ace-86bb-3e7d0cd601e1';
    $display->content['new-6c19d780-48df-4ace-86bb-3e7d0cd601e1'] = $pane;
    $display->panels['right'][2] = 'new-6c19d780-48df-4ace-86bb-3e7d0cd601e1';
    $pane = new stdClass();
    $pane->pid = 'new-b418c223-5e3e-47be-a4c9-ffbe597231d2';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-yyDPF8fbCXOAqy4RNH1sZO8rJfN2WM6L';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b418c223-5e3e-47be-a4c9-ffbe597231d2';
    $display->content['new-b418c223-5e3e-47be-a4c9-ffbe597231d2'] = $pane;
    $display->panels['right'][3] = 'new-b418c223-5e3e-47be-a4c9-ffbe597231d2';
    $pane = new stdClass();
    $pane->pid = 'new-4c3e9b41-b4cf-4089-8715-c4ee37f06f4c';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-hFhFVHFsQGHHA5qB0RvFSHBDPgXEArs6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4c3e9b41-b4cf-4089-8715-c4ee37f06f4c';
    $display->content['new-4c3e9b41-b4cf-4089-8715-c4ee37f06f4c'] = $pane;
    $display->panels['right'][4] = 'new-4c3e9b41-b4cf-4089-8715-c4ee37f06f4c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6c19d780-48df-4ace-86bb-3e7d0cd601e1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search'] = $page;

  return $pages;

}