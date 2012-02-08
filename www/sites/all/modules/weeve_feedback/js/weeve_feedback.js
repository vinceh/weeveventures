(function() {
  Drupal.behaviors.weeveFeedback = function(context) {

    var form_html = "<form id='feedback' title='Feedback'>"+
      "<div class='confirm-content-text'>At Weeve, our mission is to bring together everyone in the community to create social value. In order for us to continuously improve our platform, we need your feedback.<br/><br/>"+
	  "Your feedback can be about the look and feel, project creation process, application features or anything you feel that we should know. Please tell us what you think in the form below. Thank you!</div>" +
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
          dialogClass: 'feedback-dialog',
          close: function() {
            $('body').css('overflow', 'auto');
          },
          open: function() {
            $('body').css('overflow', 'hidden');
          }
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
