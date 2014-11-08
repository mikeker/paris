<?php
/**
 * @file
 * Theming for a thumbs-up rating button.
 *
 * Variables:
 *  $up_button: String containing HTML for the up-vote link.
 *  $results: Array containing current voting results:
 *    'count' => Number of votes cast.
 *    'rating' => Current rating.
 *    'empty' => Boolean, TRUE if the current user has voted, FALSE otherwise.
 *    'user_vote' => If empty is FALSE, user_vote contains the vote of the
 *                   current user.
 *  $just_voted: TRUE if the template is being rendered directly after a user's
 *               vote has been cast.
 *  $display_options: Array containing widget display options:
 *    'description' => Optional description of this voting widget.
 *    'title' => Title of the voting widget. Currently this will always be set
 *               as the field is required in the widget admin UI.
 */
?>
<div class="rate-widget-thumbs-up">
  <div class="rate-label">
    <?php print $display_options['title']; ?>
  </div>

  <?php print $up_button; ?>

  <?php if (!empty($info)): ?>
    <div class="rate-info">
      <?php print $info; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($display_options['description'])): ?>
    <div class="rate-description">
      <?php print $display_options['description']; ?>
    </div>
  <?php endif; ?>
</div>
