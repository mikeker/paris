<?php
//function paris_preprocess_node(&$vars) {
//  dsm($vars);
//}

function paris_preprocess_rate_template_thumbs_up(&$variables) {
  // Rewrite voting widget based on the user's current vote and the current vote
  // count. Default text goes through if there are no votes recorded.
  if ($variables['results']['count']) {
    if (!isset($variables['results']['user_vote'])) {
      // User hasn't voted yet.
      $variables['display_options']['title'] = format_plural(
        $variables['results']['count'],
        'One person gave this a thumbs-up.',
        '@count people gave this a thumbs-up.'
      );
    }
    if (!$variables['just_voted']) {
      $variables['display_options']['title'] .= t(' How about you?');
    }
    else {
      // User has voted.
      $variables['display_options']['title'] = format_plural(
        $variables['results']['count'],
        'You gave this a thumbs-up!',
        '@count people have gaven this a thumbs-up, including you!'
      );
    }
  }
}
