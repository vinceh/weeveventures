(function() {
  Drupal.behaviors.weeveFeedback = function(context) {

    var form_html = "<form id='feedback' title='Leave your feedback'>"+
      "<div><textarea id='feedback-message' name='message' rows='14' cols='65'></textarea></div>" +
      "</form>";

    $(form_html).dialog({
    			autoOpen: false,
    			height: 385,
    			width: 580,
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
                  $('#feedback-message').val('');
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
