$(document).ready(function() {
  $('#weeve-project-edit-project-form button.cancel').click(function(e) {
    e.preventDefault();
    $('#project-cancel-dialog').dialog('destroy');

    var text = '';
    text += '<div class="main-text">' + Drupal.t('Are you sure you want to cancel your project? If your project is cancelled, users will no longer be able to donate to your project and all current donations will be cancelled. All project cancellations will be reviewed by Admins with a follow-up.') + '</div>';
    text += Drupal.t('Please tell us why you want to cancel the project.');
    text += '<textarea id="weeve-cancel-reason" name="weeve-cancel-reason"></textarea>';
    text += '<button class="weeve-medium-button">' + Drupal.t('Cancel Project') + '</button>';
    text += '<a href="#" class="close-dialog">' + Drupal.t('go back') + '</a>';

    var div = '<div id="project-cancel-dialog">' + text + '</div>';
    $('body').append(div);
    $('#project-cancel-dialog').dialog(
      {resizable: false, width: 480, modal: true, title: 'Cancel your project'}
    );

    $('#project-cancel-dialog .close-dialog').one('click', function(e) {
      e.preventDefault();
      $('#project-cancel-dialog').remove();
      $('#project-cancel-dialog').dialog('close');
    });

    $('#project-cancel-dialog button').one('click', function() {
      var nid = $('#weeve-project-edit-project-form #edit-nid').val();
      $.post(
        Drupal.settings.basePath + 'project/' + nid + '/cancel',
        {reason: $('#weeve-cancel-reason').val()},
        function(response) {
          if (response.success) {
            document.location.href = Drupal.settings.basePath + 'projects';
          } else {
            alert(Drupal.t('Error occured'));
          }
        },
        'json'
      );
    });
  });

  $('.ui-widget-overlay').live('click', function() {
    $('#project-cancel-dialog').remove();
    $('#project-cancel-dialog').dialog('close');    
  });
});