$(document).ready(function() {
  $('.add-comment-button').click(function(e) {
    e.preventDefault();

    var content = '<textarea id="new-comment"></textarea>';
    content += '<button id="comment-submit">'+Drupal.t('Submit')+'</button>';

    weeve_popup('project-add-comment', 'Add new comment', content, 420);
  
    $('#project-add-comment #comment-submit').bind('click', function(e) {
      e.preventDefault();
      var comment = $('#new-comment').val();
      if (jQuery.trim(comment) == '') {
        $('#project-add-comment').prepend('<div id="comment-error">' + Drupal.t('Please fill the textfield') + '</div>');
      } else {
        var nid = $('.add-comment-button').attr('nid');
        $.post(
          Drupal.settings.basePath + 'project/' + nid + '/comment',
          {comment: comment},
          function(response) {
            if (response.success) {
              document.location.reload();
            } else {
              weeve_set_message('Error occured');
            }

            $('#project-add-comment').remove();
            $('#project-add-comment').dialog('close');
          },
          'json'
        );
      }
    })
  });
});