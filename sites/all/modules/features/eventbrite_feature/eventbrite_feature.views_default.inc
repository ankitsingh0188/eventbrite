<?php
/**
 * @file
 * eventbrite_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eventbrite_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'eventbrite_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Eventbrite View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Events!';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Eventbrite event image */
  $handler->display->display_options['fields']['field_eventbrite_event_image']['id'] = 'field_eventbrite_event_image';
  $handler->display->display_options['fields']['field_eventbrite_event_image']['table'] = 'field_data_field_eventbrite_event_image';
  $handler->display->display_options['fields']['field_eventbrite_event_image']['field'] = 'field_eventbrite_event_image';
  $handler->display->display_options['fields']['field_eventbrite_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_eventbrite_event_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_eventbrite_event_image']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<img src="[field_eventbrite_event_image] " alt="Event Image" >';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Eventbrite event address */
  $handler->display->display_options['fields']['field_eventbrite_event_address']['id'] = 'field_eventbrite_event_address';
  $handler->display->display_options['fields']['field_eventbrite_event_address']['table'] = 'field_data_field_eventbrite_event_address';
  $handler->display->display_options['fields']['field_eventbrite_event_address']['field'] = 'field_eventbrite_event_address';
  $handler->display->display_options['fields']['field_eventbrite_event_address']['label'] = '';
  $handler->display->display_options['fields']['field_eventbrite_event_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_eventbrite_event_address']['alter']['text'] = 'Location: [field_eventbrite_event_address]';
  $handler->display->display_options['fields']['field_eventbrite_event_address']['element_label_colon'] = FALSE;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = 'Date: [field_event_date]';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Ticket type */
  $handler->display->display_options['fields']['field_ticket_type']['id'] = 'field_ticket_type';
  $handler->display->display_options['fields']['field_ticket_type']['table'] = 'field_data_field_ticket_type';
  $handler->display->display_options['fields']['field_ticket_type']['field'] = 'field_ticket_type';
  $handler->display->display_options['fields']['field_ticket_type']['label'] = '';
  $handler->display->display_options['fields']['field_ticket_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ticket_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ticket_type']['alter']['text'] = 'Ticker Type: [field_ticket_type]';
  $handler->display->display_options['fields']['field_ticket_type']['element_label_colon'] = FALSE;
  /* Field: Content: Ticket Available */
  $handler->display->display_options['fields']['field_ticket_available']['id'] = 'field_ticket_available';
  $handler->display->display_options['fields']['field_ticket_available']['table'] = 'field_data_field_ticket_available';
  $handler->display->display_options['fields']['field_ticket_available']['field'] = 'field_ticket_available';
  $handler->display->display_options['fields']['field_ticket_available']['label'] = '';
  $handler->display->display_options['fields']['field_ticket_available']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ticket_available']['element_label_colon'] = FALSE;
  /* Field: Content: Ticket Price */
  $handler->display->display_options['fields']['field_ticket_price']['id'] = 'field_ticket_price';
  $handler->display->display_options['fields']['field_ticket_price']['table'] = 'field_data_field_ticket_price';
  $handler->display->display_options['fields']['field_ticket_price']['field'] = 'field_ticket_price';
  $handler->display->display_options['fields']['field_ticket_price']['label'] = '';
  $handler->display->display_options['fields']['field_ticket_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ticket_price']['alter']['text'] = '[field_ticket_available] ';
  $handler->display->display_options['fields']['field_ticket_price']['element_label_colon'] = FALSE;
  /* Field: Content: Eventbrite event url */
  $handler->display->display_options['fields']['field_eventbrite_event_url']['id'] = 'field_eventbrite_event_url';
  $handler->display->display_options['fields']['field_eventbrite_event_url']['table'] = 'field_data_field_eventbrite_event_url';
  $handler->display->display_options['fields']['field_eventbrite_event_url']['field'] = 'field_eventbrite_event_url';
  $handler->display->display_options['fields']['field_eventbrite_event_url']['label'] = '';
  $handler->display->display_options['fields']['field_eventbrite_event_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_eventbrite_event_url']['element_label_colon'] = FALSE;
  /* Field: Content: Total Ticket Available */
  $handler->display->display_options['fields']['field_total_ticket_available']['id'] = 'field_total_ticket_available';
  $handler->display->display_options['fields']['field_total_ticket_available']['table'] = 'field_data_field_total_ticket_available';
  $handler->display->display_options['fields']['field_total_ticket_available']['field'] = 'field_total_ticket_available';
  $handler->display->display_options['fields']['field_total_ticket_available']['label'] = '';
  $handler->display->display_options['fields']['field_total_ticket_available']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_total_ticket_available']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="[field_eventbrite_event_url] " class="btn btn-primary"> <button type="button"> Buy Now</button> </a>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if($row->field_total_ticket_available > 0){
echo \'<a href="$row->field_eventbrite_event_url " class="btn btn-primary"> Buy Now</a>\';
}
else{
echo \'<a href="$row->field_eventbrite_event_url " class="btn btn-primary disabled"> Buy Now</a>\';}
?>
';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'eventbrite_event' => 'eventbrite_event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'eventbrite-view';
  $export['eventbrite_view'] = $view;

  return $export;
}
