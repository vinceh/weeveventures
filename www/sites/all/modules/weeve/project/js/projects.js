$(document).ready(function() {
  $('.view-npo-project-proposals table tr').click(function(e) {
    if (e.target.tagName == 'A' || $(e.target).hasClass('weeve-medium-button')) {
      return;
    }
    e.preventDefault();
    $(this).find('.body_small').toggle();
    $(this).find('.body').toggle();    
  });

  $('#weeve-project-edit-project-form button.cancel').click(function(e) {
    e.preventDefault();
  });

  $('.view-npo-project-proposals .payout').click(function(e) {
    var nid = $(this).attr('nid');
    e.preventDefault();
    $('#project-payout-dialog').dialog('destroy');
    var title = $(this).parents('table tr').find('.views-field-title').text();
    
    var text = '';
    text += '<div class="main-text">' + Drupal.t('Your project') + '<span class="node-title">' + title + '</span> ' +
      Drupal.t('has ended and is successful in it\'s funding! You can now request for payout. Please keep in mind that once you make the request, we will contact you personally to guide you through the process.') + '</div>';
    text += '<button class="weeve-medium-button">' + Drupal.t('Request Payout') + '</button>';    

    

    var div = '<div id="project-payout-dialog">' + text + '</div>';
    $('body').append(div);
    $('#project-payout-dialog').dialog(
      {resizable: false, width: 680, modal: true, title: 'Request payout', close: function() {
          $('#project-payout-dialog').remove();
          $('#project-payout-dialog').dialog('close');
      }}
    );


    $('#project-payout-dialog .close-dialog').one('click', function(e) {
      e.preventDefault();
      $('#project-payout-dialog').remove();
      $('#project-payout-dialog').dialog('close');
    });

    $('#project-payout-dialog button.weeve-medium-button').one('click', function() {      
      $.post(
        Drupal.settings.basePath + 'project/' + nid + '/payout',
        {method: $('#weeve-payout-method').val()},
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
    $('#project-payout-dialog').remove();
    $('#project-payout-dialog').dialog('close');
  });
});