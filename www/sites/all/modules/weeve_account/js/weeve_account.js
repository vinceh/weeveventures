(function() {

  var WeeveAccount = function() {
    this.position;
    this.$wrapper;
    this.$body = $('body');
    this.$loginLink = $("#block-menu-menu-top-menu a[href='" + Drupal.settings.basePath + "user/login']");

    // Init login form
    // TODO: Use Drupal.t();
    this.$wrapper = $("<div class='login-box-wrap'></div>");
    this.$wrapper.append("<div class='login-error'>Sorry, unrecognized email or password</div>" +
              "<div class='login-hint'>Email</div>" +
        			"<input type='text' class='login-field login'/>" +
        			"<div class='login-hint'>Password</div>" +
        			"<input type='password' class='login-field password'/>" +
        			"<div class='forgot-pass-link'><a href='" + Drupal.settings.basePath + "account/password'>forgot password?</a></div>" +
        			"<div class='login-button'>Log in</div>"
        		);
    this.$body.append(this.$wrapper);
    this.$wrapper.hide();
  };

  WeeveAccount.prototype = {
    showForm: function() {
      var self = this;
      self.updatePosition();
      self.$wrapper.show();
    },

    hideForm: function() {
      var self = this;
      self.$wrapper.hide();
      $('.login-error').hide();
      $('.login-field').val('').css({border: "1px solid #CCCCCC"});
    },

    errorForm: function() {
      $('.login-error').show();
      $('.login-field').css({border: '2px solid red'});
    },

    updatePosition: function() {
      var self = this
        , position;
      position = self.$loginLink.position();
      self.position = position;
      self.$wrapper.css("left", position.left - self.$wrapper.outerWidth() + self.$loginLink.outerWidth());
    	self.$wrapper.css("top", position.top + self.$loginLink.outerHeight() * 2 - 25);
    }
  };

  Drupal.behaviors.weeve_account = function(context) {

    var LoginForm = new WeeveAccount();

    $("#block-menu-menu-top-menu a[href='" + Drupal.settings.basePath + "user/login']", context).click(function(e){
      var $this = $(this);
      e.preventDefault();
      LoginForm.showForm();
    });

    $('body', context).bind('click', function (e) {
      if (e.target.tagName == "A" || e.target.tagName == "INPUT" || $(e.target).hasClass('login-button')) {

      } else {
        LoginForm.hideForm();
      }
    });

    $('.login-button').click(function() {
      var $this = $(this)
        , name = LoginForm.$wrapper.find('.login-field.login').val()
        , pwd = LoginForm.$wrapper.find('.login-field.password').val();

      $.ajax({
        'type': "POST",
        'url': Drupal.settings.basePath + 'ajax/login',
        'data': {name: name, pwd: pwd},
        'cache': false,
        'success': function(res) {
          var response = Drupal.parseJson(res);
          if (response.status) {
            window.location.reload();
          } else {
            LoginForm.errorForm();
          }
        }
      });
    });

    $('.login-field', context).keypress(function(e) {
      if (e.keyCode == 13) {
        $('.login-button').click();
      }
    });

    $(window).resize(function() {
      LoginForm.updatePosition();
    });

  };
})(jQuery);
