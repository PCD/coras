<?php

/**
 * Implements hook_preprocess_page().
 */
function coras_preprocess_page(&$variables) {
  // You can use preprocess hooks to modify the variables before they are passed
  // to the theme function or template file.
  if ( isset($variables['page']['content']['views_streaming-block']) ) {
    $variables['page']['content']['system_main']['main']['#markup'] = '';
    //print_r(array_keys($variables['page']['content']));exit;
  }
}
