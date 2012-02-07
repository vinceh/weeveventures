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
      {resizable: false, width: 480, modal: true, title: 'Cancel your project',
    open: function(event, ui) {
      $('body').css('overflow', 'hidden');
    },
    close: function(event, ui) {
      $('body').css('overflow', 'auto');
    }}
    );

    $('#project-cancel-dialog .close-dialog').one('click', function(e) {
      e.preventDefault();
      $('#project-cancel-dialog').dialog('close');
      $('#project-cancel-dialog').remove();      
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
            weeve_set_message('Error occured');
          }
        },
        'json'
      );
    });
  });

  $('#weeve-project-edit-project-form button.funds').click(function(e) {
    e.preventDefault();
    $('#project-funds-dialog').dialog('destroy');
    var nid = $('#weeve-project-edit-project-form #edit-nid').val();
    $.getJSON(Drupal.settings.basePath + 'project/' + nid + '/currentfunds', {}, function(response) {
      var text = '';
      var currentfunds = 0;
      if (response.success) {
        currentfunds = response.result;
      }
      text += Drupal.t('Once you submit your fund change request, we will review it and contact you personally. Please provide the following information to let us know a bit more about this request.');

      text += '<div class="funds-label">' + Drupal.t('What would you like to change your funding amount to?') + '</div>';
      text += '<input type="text" id="weeve-funds" name="weeve-funds" value="'+currentfunds+'" />';
      text += '<div class="funds-label">' + Drupal.t('Please tell us why you want to change your funding amount.') + '</div>';
      text += '<textarea id="weeve-funds-reason" name="weeve-funds"></textarea>';
      text += '<button class="weeve-medium-button">' + Drupal.t('Submit') + '</button>';
      text += '<a href="#" class="close-dialog">' + Drupal.t('go back') + '</a>';

      var div = '<div id="project-funds-dialog">' + text + '</div>';
      $('body').append(div);
      $('#project-funds-dialog').dialog(
        {resizable: false, width: 500, modal: true, title: 'Request Project Funds Change',
    open: function(event, ui) {
      $('body').css('overflow', 'hidden');
    },
    close: function(event, ui) {
      $('body').css('overflow', 'auto');
    }}
      );

      $('#project-funds-dialog .close-dialog').one('click', function(e) {
        e.preventDefault();
        $('#project-funds-dialog').dialog('close');
        $('#project-funds-dialog').remove();        
      });

      $('#project-funds-dialog button').one('click', function() {
        var nid = $('#weeve-project-edit-project-form #edit-nid').val();
        $.post(
          Drupal.settings.basePath + 'project/' + nid + '/funds',
          {funds: $('#weeve-funds').val(), reason: $('#weeve-funds-reason').val()},
          function(response) {
            if (response.success) {
              weeve_set_message(Drupal.settings.weeveGeneral.message_project_funds_change);
            } else {
              if (response.message) {
                weeve_set_message(response.message);
              } else {
                weeve_set_message('Error occured');
              }
            }
            $('#project-funds-dialog').dialog('close');
            $('#project-funds-dialog').remove();            
          },
          'json'
        );
      });
    });      
  });

  $('.ui-widget-overlay').live('click', function() {
    $('#project-cancel-dialog').dialog('close');
    $('#project-cancel-dialog').remove();        
    $('#project-funds-dialog').dialog('close');
    $('#project-funds-dialog').remove();
  });

  var nid = $('#weeve-project-edit-project-form #edit-nid').val();
  $('#fund_confirm').click(function(e) {
    e.preventDefault();
    $.post(
      Drupal.settings.basePath + 'project/' + nid + '/adminfunds',
      {op: 1},
      function(response) {
        if (response.success) {
          $('fieldset.admin-fund-change').remove();
          weeve_set_message('Funds for this project were succesffuly updated');
        }
      },
      'json'
    );
  });

  $('#fund_decline').click(function(e) {
    e.preventDefault();
    $.post(
      Drupal.settings.basePath + 'project/' + nid + '/adminfunds',
      {op: 2},
      function(response) {
        if (response.success) {
          $('fieldset.admin-fund-change').remove();
          weeve_set_message('Funds for this project were succesffuly declined');
        }
      },
      'json'
    );
  });
});