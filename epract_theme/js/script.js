/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {
    var new_mark = $("body.node-type-grupo-con-retos div.views-row mark.new");
    if (new_mark) {
      new_mark.parents("div.views-row").css("border", "3px solid #ee7f00");
    }
    $(document).ajaxComplete(function(event, xhr, settings) {
      if(event.handled !== true) {
        if (settings.url.substring(0,14) == "/vote/comment/") {
          $.get(window.location.origin + "/epract/messages", function( data ) {
          	if (data.status) { 
        	      alert(data.status);
              }
          });
        }
        event.handled = true;
      }
    });
    $('ul.tips li:contains("HTML")').css("display", "none");
  }
};


})(jQuery, Drupal, this, this.document);
