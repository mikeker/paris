<?php
/**
 * @file
 * paris_main.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function paris_main_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_node_style' => '',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  $export['image__default__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_image';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
    'image_link' => '',
  );
  $export['image__default__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_240_wide__file_field_colorbox';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'colorbox_node_style' => '240-wide',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  $export['image__image_240_wide__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_240_wide__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__image_240_wide__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_240_wide__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__image_240_wide__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_240_wide__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__image_240_wide__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_240_wide__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__image_240_wide__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_240_wide__file_field_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '240-wide',
    'image_link' => 'file',
  );
  $export['image__image_240_wide__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_240_wide__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__image_240_wide__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_480_wide__file_field_colorbox';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'colorbox_node_style' => '480-wide',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  $export['image__image_480_wide__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_480_wide__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__image_480_wide__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_480_wide__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__image_480_wide__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_480_wide__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__image_480_wide__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_480_wide__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__image_480_wide__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_480_wide__file_field_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '480-wide',
    'image_link' => 'file',
  );
  $export['image__image_480_wide__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_480_wide__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__image_480_wide__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_960_wide__file_field_colorbox';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'colorbox_node_style' => '960-wide',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  $export['image__image_960_wide__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_960_wide__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__image_960_wide__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_960_wide__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__image_960_wide__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_960_wide__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__image_960_wide__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_960_wide__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__image_960_wide__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_960_wide__file_field_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '960-wide',
    'image_link' => 'file',
  );
  $export['image__image_960_wide__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_960_wide__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__image_960_wide__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__preview__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__preview__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__preview__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_image';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'media_thumbnail',
    'image_link' => '',
  );
  $export['image__preview__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_image';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $export['image__teaser__file_field_image'] = $file_display;

  return $export;
}
