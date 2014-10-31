<?php
/**
 * @file
 * paris_main.backup_migrate_exportables.inc
 */

/**
 * Implements hook_exportables_backup_migrate_profiles().
 */
function paris_main_exportables_backup_migrate_profiles() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'daily_backup';
  $item->name = 'Daily Backup';
  $item->filename = '[site:name]';
  $item->append_timestamp = TRUE;
  $item->timestamp_format = 'Y-m-d\\TH-i-s';
  $item->filters = array(
    'compression' => 'gzip',
    'notify_success_enable' => 0,
    'notify_success_email' => 'info@mikekeran.com',
    'notify_failure_enable' => 1,
    'notify_failure_email' => 'info@mikekeran.com',
    'utils_site_offline' => 0,
    'utils_site_offline_message' => 'A Year in Paris LOCAL is currently under maintenance. We should be back shortly. Thank you for your patience.',
    'utils_description' => '',
    'use_cli' => 0,
    'ignore_errors' => 0,
    'sources' => array(
      'db' => array(
        'exclude_tables' => array(),
        'nodata_tables' => array(
          'cache' => 'cache',
          'cache_admin_menu' => 'cache_admin_menu',
          'cache_block' => 'cache_block',
          'cache_bootstrap' => 'cache_bootstrap',
          'cache_field' => 'cache_field',
          'cache_filter' => 'cache_filter',
          'cache_form' => 'cache_form',
          'cache_image' => 'cache_image',
          'cache_libraries' => 'cache_libraries',
          'cache_menu' => 'cache_menu',
          'cache_page' => 'cache_page',
          'cache_panels' => 'cache_panels',
          'cache_path' => 'cache_path',
          'cache_token' => 'cache_token',
          'cache_update' => 'cache_update',
          'cache_views' => 'cache_views',
          'cache_views_data' => 'cache_views_data',
          'ctools_css_cache' => 'ctools_css_cache',
          'ctools_object_cache' => 'ctools_object_cache',
          'search_dataset' => 'search_dataset',
          'search_index' => 'search_index',
          'search_total' => 'search_total',
          'sessions' => 'sessions',
          'watchdog' => 'watchdog',
        ),
        'utils_lock_tables' => 0,
      ),
      'files' => array(
        'exclude_filepaths' => 'backup_migrate
styles
css
js
ctools
less',
      ),
      'archive' => array(
        'exclude_filepaths' => 'public://backup_migrate
public://styles
public://css
public://js
public://ctools
public://less
sites/default/settings.php
../temp',
      ),
    ),
  );
  $export['daily_backup'] = $item;

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'weekly_backup';
  $item->name = 'Weekly Backup';
  $item->filename = '[site:name]';
  $item->append_timestamp = TRUE;
  $item->timestamp_format = 'Y-m-d\\TH-i-s';
  $item->filters = array(
    'compression' => 'gzip',
    'notify_success_enable' => 0,
    'notify_success_email' => 'info@mikekeran.com',
    'notify_failure_enable' => 1,
    'notify_failure_email' => 'info@mikekeran.com',
    'utils_site_offline' => 0,
    'utils_site_offline_message' => 'A Year in Paris LOCAL is currently under maintenance. We should be back shortly. Thank you for your patience.',
    'utils_description' => '',
    'use_cli' => 0,
    'ignore_errors' => 0,
    'sources' => array(
      'db' => array(
        'exclude_tables' => array(
          'cache' => 'cache',
          'cache_admin_menu' => 'cache_admin_menu',
          'cache_block' => 'cache_block',
          'cache_bootstrap' => 'cache_bootstrap',
          'cache_field' => 'cache_field',
          'cache_filter' => 'cache_filter',
          'cache_form' => 'cache_form',
          'cache_image' => 'cache_image',
          'cache_libraries' => 'cache_libraries',
          'cache_menu' => 'cache_menu',
          'cache_page' => 'cache_page',
          'cache_panels' => 'cache_panels',
          'cache_path' => 'cache_path',
          'cache_token' => 'cache_token',
          'cache_update' => 'cache_update',
          'cache_views' => 'cache_views',
          'cache_views_data' => 'cache_views_data',
          'ctools_css_cache' => 'ctools_css_cache',
          'ctools_object_cache' => 'ctools_object_cache',
        ),
        'nodata_tables' => array(
          'cache' => 'cache',
          'cache_admin_menu' => 'cache_admin_menu',
          'cache_block' => 'cache_block',
          'cache_bootstrap' => 'cache_bootstrap',
          'cache_field' => 'cache_field',
          'cache_filter' => 'cache_filter',
          'cache_form' => 'cache_form',
          'cache_image' => 'cache_image',
          'cache_menu' => 'cache_menu',
          'cache_page' => 'cache_page',
          'cache_path' => 'cache_path',
          'cache_update' => 'cache_update',
          'cache_views' => 'cache_views',
          'cache_views_data' => 'cache_views_data',
          'search_dataset' => 'search_dataset',
          'search_index' => 'search_index',
          'search_total' => 'search_total',
          'sessions' => 'sessions',
          'watchdog' => 'watchdog',
        ),
        'utils_lock_tables' => 0,
      ),
      'files' => array(
        'exclude_filepaths' => 'backup_migrate
styles
css
js
ctools
less',
      ),
      'archive' => array(
        'exclude_filepaths' => 'public://backup_migrate
public://styles
public://css
public://js
public://ctools
public://less
sites/default/settings.php
../temp',
      ),
    ),
  );
  $export['weekly_backup'] = $item;

  return $export;
}

/**
 * Implements hook_exportables_backup_migrate_schedules().
 */
function paris_main_exportables_backup_migrate_schedules() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'daily';
  $item->name = 'Daily';
  $item->source_id = 'db';
  $item->destination_id = 'scheduled';
  $item->copy_destination_id = '';
  $item->profile_id = 'default';
  $item->keep = -2;
  $item->period = 86400;
  $item->enabled = TRUE;
  $item->cron = 'builtin';
  $item->cron_schedule = '0 4 * * *';
  $export['daily'] = $item;

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'weekly';
  $item->name = 'Weekly';
  $item->source_id = 'db';
  $item->destination_id = 'scheduled';
  $item->copy_destination_id = '';
  $item->profile_id = 'weekly_backup';
  $item->keep = -2;
  $item->period = 604800;
  $item->enabled = TRUE;
  $item->cron = 'builtin';
  $item->cron_schedule = '0 4 * * *';
  $export['weekly'] = $item;

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'weekly_files';
  $item->name = 'Weekly Files';
  $item->source_id = 'files';
  $item->destination_id = 'scheduled';
  $item->copy_destination_id = '';
  $item->profile_id = 'weekly_backup';
  $item->keep = -2;
  $item->period = 86400;
  $item->enabled = TRUE;
  $item->cron = 'builtin';
  $item->cron_schedule = '0 4 * * *';
  $export['weekly_files'] = $item;

  return $export;
}
