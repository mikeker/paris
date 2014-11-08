(function ($) {

// Add drupal 7 code.
  Drupal.behaviors.paris = {
    attach: function (context, settings) {
      $('.field-name-field-slideshow .field-items').slick({
        dots: true,
        infinite: true,
        variableWidth: true,
        adaptiveHeight: true
      });
    }
  }
})(jQuery)
