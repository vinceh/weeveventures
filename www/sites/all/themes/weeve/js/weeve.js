$(document).ready(function() {
  $(window).resize(function() {
    $(".ui-dialog-content").dialog("option", "position", "center");
  });

  $('.weeve-message .message-close').live('click', function(e) {
    e.preventDefault();
    $('.weeve-message').fadeOut('slow', function() {
      $('.weeve-message').remove();
    });
    
  })
});

function weeve_set_message(message, status) {
  $('.weeve-message').remove();
  if (status == undefined) {
    status = 'status';
  }

  var output = '<div class="weeve-message messages '+status+'">';
  output += Drupal.t(message);
  output += '<a class="message-close" href="#">' + Drupal.t('close')+'</a></div>';

  if ($('#tabs-wrapper').length) {
    $(output).insertAfter($('#tabs-wrapper'));
  } else {
    $('#squeeze .left-corner').prepend(output);
  }
  
}