(function($){
  Drupal.behaviors.showStreaming = {
    attach: function (context, settings) {
      $(document).ready(function(){
        streaming = $('.front #block-views-streaming-block');
        if ( streaming.length > 0 ) {
          $('.front .view-id-articulos').remove();
        }
      });
    }  
  }
})(jQuery);