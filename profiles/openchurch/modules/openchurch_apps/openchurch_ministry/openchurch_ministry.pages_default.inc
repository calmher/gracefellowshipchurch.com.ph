<?php
/**
 * @file
 * openchurch_ministry.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function openchurch_ministry_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Ministry Detail',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => 'openchurch-ministry-detail',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'openchurch_ministry' => 'openchurch_ministry',
            ),
          ),
          'context' => 'argument_nid_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'moscone_flipped';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 3,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'ministry_highlights',
        ),
        'parent' => 'main',
      ),
      'ministry_highlights' => array(
        'type' => 'region',
        'title' => 'Ministry Contacts',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'ministry-contacts',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'ministry_detail',
          1 => 'upcoming_events',
        ),
        'parent' => 'main',
      ),
      'ministry_detail' => array(
        'type' => 'region',
        'title' => 'Ministry Detail',
        'width' => '67.51503435239806',
        'width_type' => '%',
        'parent' => '2',
      ),
      'upcoming_events' => array(
        'type' => 'region',
        'title' => 'Upcoming Events',
        'width' => '32.48496564760194',
        'width_type' => '%',
        'parent' => '2',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'recent_photos',
        ),
        'parent' => 'main',
      ),
      'recent_photos' => array(
        'type' => 'region',
        'title' => 'Recent Photos',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'ministry_thumb' => NULL,
      'ministry_highlights' => NULL,
      'ministry_detail' => NULL,
      'upcoming_events' => NULL,
      'recent_photos' => NULL,
    ),
    'upcoming_events' => array(
      'style' => 'default',
    ),
    'ministry_highlights' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0366ec2c-b5a7-4078-95ea-f9300c394f23';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-83a71d74-85c1-41ce-af99-b5abecded2c3';
    $pane->panel = 'contentmain';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_nid_1',
      'override_title' => 1,
      'override_title_text' => 'What We Offer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '83a71d74-85c1-41ce-af99-b5abecded2c3';
    $display->content['new-83a71d74-85c1-41ce-af99-b5abecded2c3'] = $pane;
    $display->panels['contentmain'][0] = 'new-83a71d74-85c1-41ce-af99-b5abecded2c3';
    $pane = new stdClass();
    $pane->pid = 'new-33f2a7e0-a360-40fe-a605-d689e000cafb';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'openchurch_galleries-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '33f2a7e0-a360-40fe-a605-d689e000cafb';
    $display->content['new-33f2a7e0-a360-40fe-a605-d689e000cafb'] = $pane;
    $display->panels['footer'][0] = 'new-33f2a7e0-a360-40fe-a605-d689e000cafb';
    $pane = new stdClass();
    $pane->pid = 'new-797f365d-793e-4a52-bb54-340a7a0ecae6';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oc_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'formatter_settings' => array(
        'image_style' => 'oc_event_header',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ministry-image',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '797f365d-793e-4a52-bb54-340a7a0ecae6';
    $display->content['new-797f365d-793e-4a52-bb54-340a7a0ecae6'] = $pane;
    $display->panels['header'][0] = 'new-797f365d-793e-4a52-bb54-340a7a0ecae6';
    $pane = new stdClass();
    $pane->pid = 'new-744cb900-b1af-42b2-9949-57e7b0dfedaf';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'views-6110b1540457b11a522ded118d35c6cc';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ministry-contacts',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '744cb900-b1af-42b2-9949-57e7b0dfedaf';
    $display->content['new-744cb900-b1af-42b2-9949-57e7b0dfedaf'] = $pane;
    $display->panels['header'][1] = 'new-744cb900-b1af-42b2-9949-57e7b0dfedaf';
    $pane = new stdClass();
    $pane->pid = 'new-0f3c4b91-8ca9-4898-873b-50b8d43b35ff';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'views-274ee450b0319c4f71c4ba154ad04b92';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'upcoming-events',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0f3c4b91-8ca9-4898-873b-50b8d43b35ff';
    $display->content['new-0f3c4b91-8ca9-4898-873b-50b8d43b35ff'] = $pane;
    $display->panels['sidebar'][0] = 'new-0f3c4b91-8ca9-4898-873b-50b8d43b35ff';
    $pane = new stdClass();
    $pane->pid = 'new-97f75750-10e8-44b0-a373-b9903cd415e8';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => '$results = views_get_view_result(\'openchurch_upcoming_events\', \'panel_pane_1\');

return count($results) ? TRUE : FALSE;',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><a href="/events?oc_ministry_nid=%node:nid">Online Event Registration</a></p><p></p>',
      'format' => 'panopoly_wysiwyg_text',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'margin-bottom-1em register-online',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '97f75750-10e8-44b0-a373-b9903cd415e8';
    $display->content['new-97f75750-10e8-44b0-a373-b9903cd415e8'] = $pane;
    $display->panels['sidebar'][1] = 'new-97f75750-10e8-44b0-a373-b9903cd415e8';
    $pane = new stdClass();
    $pane->pid = 'new-aab34e08-b32d-416e-8fdb-89ec46d3fc9a';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oc_downloads';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'aab34e08-b32d-416e-8fdb-89ec46d3fc9a';
    $display->content['new-aab34e08-b32d-416e-8fdb-89ec46d3fc9a'] = $pane;
    $display->panels['sidebar'][2] = 'new-aab34e08-b32d-416e-8fdb-89ec46d3fc9a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function openchurch_ministry_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'openchurch_ministries';
  $page->task = 'page';
  $page->admin_title = 'OpenChurch Ministries';
  $page->admin_description = 'Ministries list page.';
  $page->path = 'ministries';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Ministries',
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
  $handler->name = 'page_openchurch_ministries_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'openchurch_ministries';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Connect With Ministries';
  $display->uuid = 'e836a295-b1aa-47e0-a854-b9c6e0cfb0dd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4a3ea2ef-b5fb-419d-bae0-b3657494106a';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'openchurch_ministry_intro';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'panopoly_wysiwyg_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4a3ea2ef-b5fb-419d-bae0-b3657494106a';
    $display->content['new-4a3ea2ef-b5fb-419d-bae0-b3657494106a'] = $pane;
    $display->panels['contentmain'][0] = 'new-4a3ea2ef-b5fb-419d-bae0-b3657494106a';
    $pane = new stdClass();
    $pane->pid = 'new-efa63a7d-a396-4804-acff-b72ea87e681a';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openchurch_ministries-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'efa63a7d-a396-4804-acff-b72ea87e681a';
    $display->content['new-efa63a7d-a396-4804-acff-b72ea87e681a'] = $pane;
    $display->panels['contentmain'][1] = 'new-efa63a7d-a396-4804-acff-b72ea87e681a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['openchurch_ministries'] = $page;

  return $pages;

}
