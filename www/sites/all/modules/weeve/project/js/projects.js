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
    text += "<img class='loader' src=" + Drupal.settings.basePath + 'sites/all/themes/weeve/img/ajax-loader.gif' + ">"
    text += '<a href="#" class="close-dialog">' + Drupal.t('go back') + '</a>';   

    var div = '<div id="project-payout-dialog">' + text + '</div>';
    $('body').append(div);
    $('#project-payout-dialog').dialog(
      {resizable: false, width: 450, height: 220, modal: true, dialogClass: 'request-payout', title: 'Request Payout',
    open: function(event, ui) {
      $('body').css('overflow', 'hidden');
    },
    close: function(event, ui) {
      $('body').css('overflow', 'auto');
      $('#project-payout-dialog').remove();      
      }}
    );


    $('#project-payout-dialog .close-dialog').one('click', function(e) {
      e.preventDefault();
      $('#project-payout-dialog').dialog('close');
      $('#project-payout-dialog').remove();      
    });

    $('#project-payout-dialog button.weeve-medium-button').one('click', function() {
      var $button = $(this);
      var $loader = $(this).parents('#project-payout-dialog').find('.loader');
      $button.hide();
      $loader.css({'display': 'inline-block',
                         'margin-left': '30px',
                         'margin-top': '20px',
                         'padding-right': '15px',
                         'position': 'relative',
                         'top': '10px'});
      $.post(
        Drupal.settings.basePath + 'project/' + nid + '/payout',
        {method: 'paypal'},
        function(response) {
          if (response.success) {
            weeve_set_message(Drupal.settings.weeveGeneral.message_donation_request_payout);
            scroll(0,0);
          } else {
            weeve_set_message('Error occured');
          }
          $('#project-payout-dialog').dialog('close');
          $('#project-payout-dialog').remove();          
        },
        'json'
      );
    });
  });

  $('.ui-widget-overlay').live('click', function() {
    $('#project-payout-dialog').dialog('close');
    $('#project-payout-dialog').remove();    
  });

  $('a.weeve-medium-button.have-proposal[href$="project/terms"]').click(function(e) {
    e.preventDefault();
    
    $('#project-proposal-dialog').dialog('destroy');

    var text = '';
    text += '<div class="main-text">' +
      Drupal.t('You already have an active proposal. Please check the list or projects and proposals.') + '</div>';

    var div = '<div id="project-proposal-dialog">' + text + '</div>';
    $('body').append(div);
    $('#project-proposal-dialog').dialog(
      {resizable: false, width: 680, modal: true, title: 'You can\'t create proposals',
    open: function(event, ui) {
      $('body').css('overflow', 'hidden');
    },
    close: function(event, ui) {
      $('body').css('overflow', 'auto');
      $('#project-proposal-dialog').remove();
      }}
    );


    $('#project-proposal-dialog .close-dialog').one('click', function(e) {
      e.preventDefault();
      $('#project-proposal-dialog').dialog('close');
      $('#project-proposal-dialog').remove();
    });
    
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
      {resizable: false, width: 680, modal: true, title: 'Account is not verified',
    open: function(event, ui) {
      $('body').css('overflow', 'hidden');
    },
    close: function(event, ui) {
      $('body').css('overflow', 'auto');
      $('#project-payment-dialog').remove();          
      }}
    );


    $('#project-payment-dialog .close-dialog').one('click', function(e) {
      e.preventDefault();
      $('#project-payment-dialog').dialog('close');
      $('#project-payment-dialog').remove();      
    });
  });
});