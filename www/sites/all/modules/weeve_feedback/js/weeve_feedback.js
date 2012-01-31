(function() {
  Drupal.behaviors.weeveFeedback = function(context) {

    var form_html = "<form id='feedback'>"+
      "<div class='wrapper'><label for='message'>Message</label></div>" +
      "<div><textarea id='feedback-message' name='message' rows='14' cols='60'></textarea></div>" +
      "</form>";

    $(form_html).dialog({
    			autoOpen: false,
    			height: 420,
    			width: 640,
    			modal: true,
          buttons: {
            "Submit": function() {
              var $dialog = $(this);
              var message = $('#feedback-message').val();
              $.ajax({
                'url': Drupal.settings.basePath + 'ajax/feedback/save',
                'type': 'POST',
                'data': {'message': message},
                'cache': false,
                'success': function(response) {
                  $dialog.dialog('close');
                }
              });
            }
          }
    });


    $("a[href='" + Drupal.settings.basePath + "content/feedbacks']", context).click(function(e) {
      e.preventDefault();
      $("#feedback").dialog("open");
    });
  }
})(jQuery);
