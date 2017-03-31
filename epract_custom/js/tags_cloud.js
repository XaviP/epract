/**
 * @file
 * A JavaScript file for the epract_custom tags cloud.
 */

(function ($, Drupal, window, document, undefined) {

Drupal.behaviors.epract_custom_behavior = {
  attach: function(context, settings) {

    var tags = $('.tags-cloud-link-name');
    var maxnum = 0;
    $('.tags-cloud-num-tids').each(function( index ) {
      num_tids = parseInt($(this).text().slice(1, -1));
      if (num_tids > maxnum) {maxnum = num_tids};
    });
    var factor = 6/(maxnum-1);
    $('.tags-cloud-num-tids').each(function( index ) {
      num_tids = parseInt($(this).text().slice(1, -1));
      font_size = factor*(num_tids-1)+10;
      $(this).parent('.tags-cloud-link-name').css('font-size', font_size);
      $(this).hide();
    });
  }
};


})(jQuery, Drupal, this, this.document);
