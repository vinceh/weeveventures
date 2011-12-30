(function() {

  function popup() {

    var body = $("body");
    body.append("<div class='backdrop'></div>");

    var backdrop = $(".backdrop");

    var popupwrap = $("<div class='popupwrap'></div>");
    body.prepend(popupwrap);

    var popup = $("<div class='popup'></div>");

    $(window).resize(function () {

      var windowheight = $(window).height();
      var popupheight = popup.outerHeight();

      popup.css("margin-top", (windowheight - popupheight) / 2);
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
            "</div>";
    var rightwrap = "<div class='popupright'>" +
            "<div class='fintprinttitle'>" + Drupal.t('Things to know') + "</div>" +
            "<div class='fintprint'>" + Drupal.t('Once your enter your donation amount, you will be taken to PayPal to complete the donation process.  PayPal is secure and a trusted source for online transactions.') + "</div>" +
            "<div class='fintprint'>" + Drupal.t('If the project is successful, your credit card will be charged on Friday, Jan 20, 11:59pm EST.') + "</div>" +
            "<div class='fintprint'>" + Drupal.t('You can change or cancel your donation anytime before Friday, Jan 20, 11:59pm EST.') + "</div>" +
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

  Drupal.behaviors.weeveDonation = function(context) {
    $('div.donate-button-content a', context).click(function(e) {
      e.preventDefault();
      popup();
      Drupal.attachBehaviors('.popup');
    });

    $('#donate-submit', context).click(function() {
      //TODO: Add validation
      var amount
        , nid
        , uid;
      amount = $('#amount').val();
      nid  = Drupal.settings.weeveProject.nid;
      uid  = Drupal.settings.weeveProject.uid;
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
    });


  }
})(jQuery);