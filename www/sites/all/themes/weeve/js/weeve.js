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

function weeve_popup(id, title, content, width) {
  $('#' + id).dialog('destroy');

  var text = '';
  text += '<div class="main-text">' +
  content + '</div>';

  var div = '<div id="'+id+'">' + text + '</div>';
  $('body').append(div);

  $('#' + id).dialog({
    resizable: false,
    width: width,
    modal: true,
    title: title,
    open: function(event, ui) {
      $('body').css('overflow', 'hidden');
    },
    close: function(event, ui) {
      $('#' + id).remove();
      $('body').css('overflow', 'auto');
    }
  });


  $('#' + id + ' .close-dialog').one('click', function(e) {
    e.preventDefault();
    $('#' + id).remove();
    $('#' + id).dialog('close');
  });

  $('#project-add-comment').live('dialogopen', function(event, ui) {
    alert(123);
    $('body').css('overflow', 'hidden');
  });

  $('#project-add-comment').live('dialogclose', function(event, ui) {
    $('body').css('overflow', 'auto');
  });

}