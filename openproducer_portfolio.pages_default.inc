<?php
/**
 * @file
 * openproducer_portfolio.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openproducer_portfolio_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'portfolio';
  $page->task = 'page';
  $page->admin_title = 'Portfolio';
  $page->admin_description = '';
  $page->path = 'portfolio';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Portfolio',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_portfolio_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'portfolio';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'photos',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bowie';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8755ba15-4890-4ecb-8b4f-481db17748fe';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ed0d0f0c-d813-4a80-9b90-986584f145f2';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'portfolio-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'more_link' => 0,
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '0',
    'offset' => '0',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ed0d0f0c-d813-4a80-9b90-986584f145f2';
  $display->content['new-ed0d0f0c-d813-4a80-9b90-986584f145f2'] = $pane;
  $display->panels['contentmain'][0] = 'new-ed0d0f0c-d813-4a80-9b90-986584f145f2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['portfolio'] = $page;

  return $pages;

}
