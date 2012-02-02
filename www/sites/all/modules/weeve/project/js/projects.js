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
    text += '<button class="weeve-medium-button">' + Drupal.t('Submit') + '</button>';
    text += '<a href="#" class="close-dialog">' + Drupal.t('go back') + '</a>';   

    var div = '<div id="project-payout-dialog">' + text + '</div>';
    $('body').append(div);
    $('#project-payout-dialog').dialog(
      {resizable: false, width: 450, modal: true, title: 'Request Payout', close: function() {
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
        {method: 'paypal'},
        function(response) {
          if (response.success) {
            weeve_set_message('Your request have been sent');
            scroll(0,0);
          } else {
            weeve_set_message('Error occured');
          }
          $('#project-payout-dialog').remove();
          $('#project-payout-dialog').dialog('close');
        },
        'json'
      );
    });
  });

  $('.ui-widget-overlay').live('click', function() {
    $('#project-payout-dialog').remove();
    $('#project-payout-dialog').dialog('close');
  });

  $('a.weeve-medium-button.not-verified[href$="project/terms"]').click(function(e) {
    e.preventDefault();

    $('#project-payment-dialog').dialog('destroy');
    var title = $(this).parents('table tr').find('.views-field-title').text();

    var text = '';
    text += '<div class="main-text">' +
      Drupal.t('Please go to payment settings and check your status') + '</div>';
    text += '<a class="weeve-medium-button" href="'+Drupal.settings.basePath + 'account/change/payment">' + Drupal.t('Payment settings') + '</a>';



    var div = '<div id="project-payment-dialog">' + text + '</div>';
    $('body').append(div);
    $('#project-payment-dialog').dialog(
      {resizable: false, width: 680, modal: true, title: 'Account is not verified', close: function() {
          $('#project-payment-dialog').remove();
          $('#project-payment-dialog').dialog('close');
      }}
    );


    $('#project-payment-dialog .close-dialog').one('click', function(e) {
      e.preventDefault();
      $('#project-payment-dialog').remove();
      $('#project-payment-dialog').dialog('close');
    });
  });
});