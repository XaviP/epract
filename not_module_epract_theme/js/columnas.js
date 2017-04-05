/**
 * @file
 * Columnas en la vista adjunta al grupo de retos.
 */

(function ($, Drupal, window, document, undefined) {

Drupal.behaviors.columnas_behavior = {
  attach: function(context, settings) {

    function columniza(width) {
      if (width < 1100) {
        if (!$('.columniza-td').hasClass('1-columna')) {
          $('.view-epract-attachment-to-grupo-de-retos .views-row').appendTo(cell1);
          $('.columniza-td').addClass('1-columna').removeClass('2-columnas').removeClass('3-columnas');
        }  
      } else if (width <= 1200) {
          if (!$('.columniza-td').hasClass('2-columnas')) {
            $('.view-epract-attachment-to-grupo-de-retos .views-row').each(function( index ) {
              if ((index % 2) == 0) {
                $(this).appendTo(cell1);
              } else if ((index % 2) == 1) {
                $(this).appendTo(cell2);
              };
              $('.columniza-td').removeClass('1-columna').addClass('2-columnas').removeClass('3-columnas');
            });
          }
      } else if (width > 1200) {
          if (!$('.columniza-td').hasClass('3-columnas')) {
            $('.view-epract-attachment-to-grupo-de-retos .views-row').each(function( index ) {
              if ((index % 3) == 0) {
                $(this).appendTo(cell1);
              } else if ((index % 3) == 1) {
                $(this).appendTo(cell2);
              } else if ((index % 3) == 2) {
                $(this).appendTo(cell3);
              };
              $('.columniza-td').removeClass('1-columna').removeClass('2-columnas').addClass('3-columnas');
            });
          }
      }
    }

    var table = document.createElement("TABLE"); table.className = 'columniza-table';
    var row = table.insertRow(0); row.className = 'columniza-tr';
    var cell1 = row.insertCell(0); cell1.className = 'columniza-td columnizate-td-1';
    var cell2 = row.insertCell(1); cell2.className = 'columniza-td columnizate-td-2';
    var cell3 = row.insertCell(2); cell3.className = 'columniza-td columnizate-td-3';
    $(table).appendTo(".view-epract-attachment-to-grupo-de-retos .view-content");

    columniza($(window).width());

    $(window).resize(function() {
      columniza($(window).width());
    });

    // $('.view-epract-attachment-to-grupo-de-retos .views-row').each(function( index ) {
    //   if ((index % 3) == 0) {
    //     $(this).appendTo(cell1);
    //   } else if ((index % 3) == 1) {
    //     $(this).appendTo(cell2);
    //   } else if ((index % 3) == 2) {
    //     $(this).appendTo(cell3);
    //   };
    // });
  }
};


})(jQuery, Drupal, this, this.document);
