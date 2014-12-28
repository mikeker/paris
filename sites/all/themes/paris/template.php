<?php
function paris_preprocess_node(&$variables) {
  // Check if this is a truncated version of the body or if the teaser is
  // displaying the entire entry.
  if ($variables['teaser']) {
    if (strlen(trim(strip_tags($variables['content']['body'][0]['#markup']))) >= strlen(trim(strip_tags($variables['body'][0]['value'])))) {
      // Teaser is showing the entire post, so remove the Read more link.
      if (!empty($variables['content']['links']['node']['#links']['node-readmore'])) {
        unset($variables['content']['links']['node']['#links']['node-readmore']);
      }
    }
    else {
      // Otherwise, emphasize the fact that there's more to read with ellipses.
      // Tuck it in just before the closing </p> tag, assuming that if the final
      // tag is something else, we don't want the ellipses there.
      $variables['content']['body'][0]['#markup'] = preg_replace(
        '/<\/p>$/',
        '...</p>',
        $variables['content']['body'][0]['#markup']
      );
    }
  }
}

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
