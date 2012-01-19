(function() {

  function popup(end) {

    var body = $("body");
    body.append("<div class='backdrop'></div>");

    var backdrop = $(".backdrop");

    var popupwrap = $("<div class='popupwrap'></div>");
    body.prepend(popupwrap);

    var popup = $("<div class='popup'></div>");

    $(window).resize(function() {
        var w = $(window);
        popup.css("position","absolute");
        popup.css("top",(w.height()-popup.height())/2+w.scrollTop() + "px");
        popup.css("left",(w.width()-popup.width())/2+w.scrollLeft() + "px");
  		});

    popupwrap.append(popup);

    popupwrap.click(function () {

      $(this).remove();
      backdrop.remove();
      $('body').css('overflow', 'scroll');
    });

    popup.click(function () {
      return false;
    });

    var leftwrap = "<div class='popupleft'>" +
            "<div class='popuptitle'>" + Drupal.t('Make your donation') + "</div>" +
            "<div class='popupcontent'>Thanks for your interest in the <a class='weeve-link' href='" + window.location + "'>" + $('.left-corner h2').text() + "</a> project!  Make sure you review the 'Things to know' to the right before you make your donation!</div>" +
            "<div class='popupcontent'>" + Drupal.t('How much would you like to donate?') + "</div>" +
            "<input id='amount' type='text' class='popupinput'/><div class='popupinputhint'>" + Drupal.t('Any amount you want!') + "<br/>" + Drupal.t('$1 minimum please') + "</div>" +
            "<button id='donate-submit' class='popupsubmit weeve-medium-button'>" + Drupal.t('Continue to PayPal') + "</button>" +
            "<img class='loader' src=" + Drupal.settings.basePath + 'sites/all/themes/weeve/img/ajax-loader.gif' + ">"+
            "</div>";
    //@todo: add end date
    var rightwrap = "<div class='popupright'>" +
            "<div class='fintprinttitle'>" + Drupal.t('Things to know') + "</div>" +
            "<div class='fintprint'>" + Drupal.t('Once your enter your donation amount, you will be taken to PayPal to complete the donation process.  PayPal is secure and a trusted source for online transactions.') + "</div>" +
            "<div class='fintprint'>" + Drupal.t('If the project is successful, your credit card will be charged on !end.', {'!end': end}) + "</div>" +
            "<div class='fintprint'>" + Drupal.t('You can change or cancel your donation anytime before !end.', {'!end': end}) + "</div>" +
            "</div>";
    var title = "<div class='popuptitle'>" + Drupal.t('Make your donation') + "</div>";
    var projectname = "<div class='project'>" + Drupal.t('New Shelter for Women and Chidlren') + "</div>";

    var close = $("<div class='popupclose weeve-link'>" + Drupal.t('close') + "</div>");

    close.click(function () {
      popupwrap.remove();
      backdrop.remove();
      $('body').css('overflow', 'scroll');
    });

    popup.append(leftwrap);
    popup.append(rightwrap);
    popup.append(close);

    $('body').css('overflow', 'hidden');

    $(window).resize();
  }

  function popup2(title, link, amount, pid, end) {
 		var body = $("body");
 		body.append("<div class='backdrop'></div>");

 		var backdrop = $(".backdrop");

 		var popupwrap = $("<div class='popupwrap'></div>");
 		body.prepend(popupwrap);

 		var popup = $("<div class='popup'></div>");

 		$(window).resize(function() {
       var w = $(window);
       popup.css("position","absolute");
       popup.css("top",(w.height()-popup.height())/2+w.scrollTop() + "px");
       popup.css("left",(w.width()-popup.width())/2+w.scrollLeft() + "px");
 		});

 		popupwrap.append(popup);

 		popupwrap.click( function() {

 			$(this).remove();
 			backdrop.remove();
 			$('body').css('overflow', 'scroll');
 		});

 		popup.click( function() {
 			return false;
 		});

 		var leftwrap = "<div class='popupleft'>" +
 							"<div class='popuptitle'>Manage your donation</div>" +
 							"<div class='popupcontent'>This is your donation for the <a class='weeve-link' href='"+ link +"'>" + title + "</a> project!  Make sure you review the 'Things to know' to the right before you make changes to your donation!</div>" +
 							"<div class='popupcontent'>Enter the new amount below.</div>" +
 							"<input id='amount-edit' type='text' class='popupinput' value='"+ amount +"'/><div class='popupinputhint'>Any amount you want!<br/>$1 minimum please</div>" +
              "<input class='preapproval-id' type='hidden' value='" + pid + "'>"+
 							"<button class='popupsubmit edit-donate weeve-medium-button'>Continue to PayPal</button>" +
              "<img class='loader' src=" + Drupal.settings.basePath + 'sites/all/themes/weeve/img/ajax-loader.gif' + ">" +
 							"<a ' class='popupcancel weeve-link'>Cancel Donation</a>"
 					   "</div>";
 		var rightwrap = "<div class='popupright'>" +
 							"<div class='fintprinttitle'>Things to know</div>" +
 							"<div class='fintprint'>To change your donation, enter a new amount in the box.  This new amount will not add to your previous donation.</div>" +
 							"<div class='fintprint'>If the project is successful, your credit card will be charged on " + end +"</div>" +
 							"<div class='fintprint'>You can cancel your donation by clicking the 'Cancel Donation' link.</div>" +
 						"</div>";
 		var title = "<div class='popuptitle'>Make your donation</div>";
 		var projectname = "<div class='project'>New Shelter for Women and Chidlren</div>";

 		var close = $("<div class='popupclose weeve-link'>close</div>");

 		close.click( function() {
 			popupwrap.remove();
 			backdrop.remove();
 			$('body').css('overflow', 'scroll');
 		});

 		popup.append(leftwrap);
 		popup.append(rightwrap);
 		popup.append(close);

    $('body').css('overflow', 'hidden');

    $(window).resize();
 	}

  function popup3(left, right, title, link, amount) {
    var body = $("body");
   		body.append("<div class='backdrop'></div>");

   		var backdrop = $(".backdrop");

   		var popupwrap = $("<div class='popupwrap'></div>");
   		body.prepend(popupwrap);

   		var popup = $("<div class='popup'></div>");

    $(window).resize(function() {
        var w = $(window);
        popup.css("position","absolute");
        popup.css("top",(w.height()-popup.height())/2+w.scrollTop() + "px");
        popup.css("left",(w.width()-popup.width())/2+w.scrollLeft() + "px");
  		});

   		popupwrap.append(popup);

   		popupwrap.click( function() {
   			$(this).remove();
   			backdrop.remove();
   			$('body').css('overflow', 'scroll');
   		});

   		popup.click( function() {
   			return false;
   		});

   		var leftwrap = "<div class='popupleft'>" + left + "</div>";
   		var rightwrap = "<div class='popupright'>" + right +"</div>";
   		// var title = "<div class='popuptitle'>Make your donation</div>";
   		var projectname = "<div class='project'>New Shelter for Women and Chidlren</div>";

   		var close = $("<div class='popupclose weeve-link'>close</div>");

   		close.click( function() {
   			popupwrap.remove();
   			backdrop.remove();
   			$('body').css('overflow', 'scroll');
   		});

   		var confirm = "<div class='confirm'>" +
   				"<div class='confirm-content'>" +
   				"<div class='confirm-content-title'>Cancel your donation</div>"+
   				"<div class='confirm-content-text'>Are you sure you want to cancel your <b>$" + amount + "</b> donation to the <b>" + title + "</b> project?</div>" +
   				"<button class='weeve-medium-button donate-cancel submit'>Cancel Donation</button>" +
          "<img class='loader' src=" + Drupal.settings.basePath + 'sites/all/themes/weeve/img/ajax-loader.gif' + ">" +
          "<a class='weeve-link'>go back</a>" +
          "</div>" +

   		"</div>";

   		var confirmback = "<div class='confirmback'></div>";


   		popup.append(leftwrap);
   		popup.append(rightwrap);
   		popup.append(close);
   		popup.append(confirmback);
   		popup.append(confirm);


   		$('body').css('overflow', 'hidden');

   		$(window).resize();
  }

  Drupal.behaviors.weeveDonation = function(context) {
    $('div.donate-button-content a', context).click(function(e) {
      e.preventDefault();
      var end = Drupal.settings.weeveProject.end_date;
      popup(end);
      Drupal.attachBehaviors('.popup');
    });

    $('.manage', context).click(function(e) {
      // e.preventDefault();
      var $this = $(this)
              , title
              , link
              , amount
              , pid
              , end;
      title = $this.parents('.donated-project').find('.proj-title a').text();
      link = $this.parents('.donated-project').find('.proj-title a').attr('href');
      amount = $this.parents('.donated-project').find('.preapproval-amount').val();
      pid = $this.parents('.donated-project').find('.preapproval-id').val();
      end = $this.parents('.donated-project').find('.end-date').val();
      popup2(title, link, amount, pid, end);
      Drupal.attachBehaviors('.popup');
    });

    $('.popupcancel', context).click(function(e) {
      var left
              , right
              , title
              , link
              , amount;
      left = $('.popupleft').html();
      right = $('.popupright').html();
      title = $('.popupcontent .weeve-link').text();
      link = $('.popupcontent .weeve-link').attr('href');
      amount = $('.popupinput').val();
      $('.popupwrap').remove();
      $('.backdrop').remove();
      popup3(left, right, title, link, amount);
      Drupal.attachBehaviors('.popup');
    });

    $('#donate-submit', context).click(function() {
      var amount
              , nid
              , uid
              , re;
      amount = $('#amount').val();
      re = /(?:^\d{1,3}(?:\.?\d{3})*(?:,\d{2})?$)|(?:^\d{1,3}(?:,?\d{3})*(?:\.\d{2})?$)/;
      nid  = Drupal.settings.weeveProject.nid;
      uid  = Drupal.settings.weeveProject.uid;
      $('#amount').css({border: '1px solid #AAAAAA'});
      if (re.test(amount) && amount >= 1) {
        $('.loader').css('display', 'block');
        $('#donate-submit').hide();
        $.ajax({
          url: Drupal.settings.basePath + 'ajax/donation/submit',
          type: "POST",
          cache: false,
          data: {amount: amount, nid: nid, uid: uid},
          success: function (res) {
            res = Drupal.parseJson(res);
            if (res.status) {
              window.location = res.url;
            } else {
              alert('Ooops... Unknow error.');
            }
          }
        });
      } else {
        $('#amount').css({border: '2px solid red'});
      }
    });

    $('#amount', context).keypress(function(e) {
      if (e.keyCode == 13) {
        $('#donate-submit').click();
      }
    });

    $('.confirm-content a', context).click(function() {
      $('.popupwrap').remove();
      $('.backdrop').remove();
      $('body').css('overflow', 'scroll');
    });


    $('.donate-cancel', context).click(function(e) {
      e.preventDefault();
      $('.loader').css({'display': 'inline-block',
                         'margin-left': '30px',
                         'margin-top': '30px',
                         'padding-right': '15px',
                         'position': 'relative',
                         'top': '10px'});
      $('.donate-cancel').hide();
      var pid = $('.preapproval-id').val();
      $.ajax({
        url: Drupal.settings.basePath + 'ajax/donation/cancel',
        type: "POST",
        cache: false,
        data: {pid: pid},
        success: function (res) {
          res = Drupal.parseJson(res);
          if (res.status) {
             window.location = res.url;
          } else {
             alert('Ooops... Unknow error.');
          }
        }
      });
    });

    $('.edit-donate', context).click(function(e) {
      var pid = $('.preapproval-id').val()
        , amount = $('.popupinput').val();
      var re = /(?:^\d{1,3}(?:\.?\d{3})*(?:,\d{2})?$)|(?:^\d{1,3}(?:,?\d{3})*(?:\.\d{2})?$)/;
      $('.popupinput').css({border: '1px solid #AAAAAA'});
      if (re.test(amount) && amount >= 1) {
        $('.edit-donate').hide();
        $('.loader').css({'display': 'inline-block',
                          'padding-left': '25px',
                          'padding-right': '10px',
                          'position': 'relative',
                          'right': '20px',
                          'top': '10px'});
        $.ajax({
          url: Drupal.settings.basePath + 'ajax/donation/edit',
          type: "POST",
          cache: false,
          data: {pid: pid, amount: amount},
          success: function (res) {
            res = Drupal.parseJson(res);
            if (res.status) {
               window.location = res.url;
            } else {
               alert('Ooops... Unknow error.');
            }
          }
        });
      } else {
        $('.popupinput').css({border: '2px solid red'});
      }
    });

    $('#amount-edit', context).keypress(function(e) {
      if (e.keyCode == 13) {
        $('.edit-donate').click();
      }
    });
  }
})(jQuery);