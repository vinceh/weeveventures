(function() {
  Drupal.behaviors.weeveFeedback = function(context) {

    var form_html = "<form id='feedback' title='Feedback'>"+
      "<div class='confirm-content-text'>We strive to make Weeve the best platform it can be. We look at each feedback" +
      " provided by our users. Your feedback can be about the look and feel, application features, application processes," +
      " or anything you feel that we should know. Please use the form below, and thanks!</div>" +
      "<div><textarea id='feedback-message' name='message' rows='5' cols='59'></textarea></div>" +
      "<div class='popup-buttons'>" +
      "<button id='feedback-submit' class='weeve-medium-button submit'>Submit</button>"+
      "<a class='weeve-link close-dialog' href='#'>go back</a>" +
      "</div>" +
      "</form>";

    $(form_html).dialog({
    			autoOpen: false,
    			height: 350,
    			width: 530,
    			modal: true,
          dialogClass: 'feedback-dialog'
    });


    $("a[href='" + Drupal.settings.basePath + "content/feedbacks']", context).click(function(e) {
      e.preventDefault();
      $("#feedback").dialog("open");
    });

    $('a.close-dialog', context).click(function(e) {
      e.preventDefault();
      $('#feedback').dialog('close');
    });

    $('#feedback-submit', context).click(function(e) {
      e.preventDefault();
      var $dialog = $('#feedback');
      var message = $('#feedback-message').val();
      $.ajax({
        'url':Drupal.settings.basePath + 'ajax/feedback/save',
        'type':'POST',
        'data':{'message':message},
        'cache':false,
        'success':function (response) {
          $('#feedback-message').val('');
        }
      });
      $dialog.dialog('close');
    });
  }
})(jQuery);
