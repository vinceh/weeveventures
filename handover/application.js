$(window).load( function() {

	var body = $('body');
	var loginlink = $('.login-link');
	
	// setupLogin();
	
	loginlink.click( function() {
	
		positionLogin();
		
		$(".login-box-wrap").show();
		$(".login-field").focus();
		return false;
	});
	
	//$(window).resize( function() {
	//	positionLogin();
	//});
	
	$('.donate-button').click(function() {
		popup();
	});
	
	$('.manage').click(function() {
		popup2();
	});
	
	$('.random-link').click( function() {
		popup3();
		return false;
	});
	
	function popup3() {

		var body = $("body");
		body.append("<div class='backdrop'></div>");

		var backdrop = $(".backdrop");

		var popupwrap = $("<div class='popupwrap'></div>");
		body.prepend(popupwrap);

		var popup = $("<div class='popup'></div>");

		$(window).resize(function() {

			var windowheight = $(window).height();
			var popupheight = popup.outerHeight();

			popup.css("margin-top", (windowheight - popupheight)/2);
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
							"<div class='popupcontent'>This is your donation for the <a class='weeve-link'>New Shelter for Women and Children</a> project!  Make sure you review the 'Things to know' to the right before you make changes to your donation!</div>" +
							"<div class='popupcontent'>Enter the new amount below.</div>" +
							"<input type='text' class='popupinput'></input><div class='popupinputhint'>Any amount you want!<br/>$1 minimum please</div>" +
							"<button class='popupsubmit weeve-medium-button'>Continue to PayPal</button>" +
							"<a class='popupcancel weeve-link'>Cancel Donation</a>"
					   "</div>";
		var rightwrap = "<div class='popupright'>" +
							"<div class='fintprinttitle'>Things to know</div>" +
							"<div class='fintprint'>To change your donation, enter a new amount in the box.  This new amount will not add to your previous donation.</div>" +
							"<div class='fintprint'>If the project is successful, your credit card will be charged on Friday, Jan 20, 11:59pm EST.</div>" +
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
		
		var confirm = "<div class='confirm'>" +
				"<div class='confirm-content'>" +
				"<div class='confirm-content-title'>Cancel your donation</div>"+
				"<div class='confirm-content-text'>Are you sure you want to cancel your <b>$50</b> donation to the <b>New Shelter for Women and Children</b> project?</div>" +
				"<button class='weeve-medium-button submit'>Cancel Donation</button><a class='weeve-link'>go back</a></div>"
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
	
	function popup2() {

		var body = $("body");
		body.append("<div class='backdrop'></div>");

		var backdrop = $(".backdrop");

		var popupwrap = $("<div class='popupwrap'></div>");
		body.prepend(popupwrap);

		var popup = $("<div class='popup'></div>");

		$(window).resize(function() {

			var windowheight = $(window).height();
			var popupheight = popup.outerHeight();

			popup.css("margin-top", (windowheight - popupheight)/2);
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
							"<div class='popupcontent'>This is your donation for the <a class='weeve-link'>New Shelter for Women and Children</a> project!  Make sure you review the 'Things to know' to the right before you make changes to your donation!</div>" +
							"<div class='popupcontent'>Enter the new amount below.</div>" +
							"<input type='text' class='popupinput'></input><div class='popupinputhint'>Any amount you want!<br/>$1 minimum please</div>" +
							"<button class='popupsubmit weeve-medium-button'>Continue to PayPal</button>" +
							"<a class='popupcancel weeve-link'>Cancel Donation</a>"
					   "</div>";
		var rightwrap = "<div class='popupright'>" +
							"<div class='fintprinttitle'>Things to know</div>" +
							"<div class='fintprint'>To change your donation, enter a new amount in the box.  This new amount will not add to your previous donation.</div>" +
							"<div class='fintprint'>If the project is successful, your credit card will be charged on Friday, Jan 20, 11:59pm EST.</div>" +
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
	
	function popup() {

		var body = $("body");
		body.append("<div class='backdrop'></div>");

		var backdrop = $(".backdrop");

		var popupwrap = $("<div class='popupwrap'></div>");
		body.prepend(popupwrap);

		var popup = $("<div class='popup'></div>");

		$(window).resize(function() {

			var windowheight = $(window).height();
			var popupheight = popup.outerHeight();

			popup.css("margin-top", (windowheight - popupheight)/2);
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
							"<div class='popuptitle'>Make your donation</div>" +
							"<div class='popupcontent'>Thanks for your interest in the <a class='weeve-link'>New Shelter for Women and Children</a> project!  Make sure you review the 'Things to know' to the right before you make your donation!</div>" +
							"<div class='popupcontent'>How much would you like to donate?</div>" +
							"<input type='text' class='popupinput'></input><div class='popupinputhint'>Any amount you want!<br/>$1 minimum please</div>" +
							"<button class='popupsubmit weeve-medium-button'>Continue to PayPal</button>" +
					   "</div>";
		var rightwrap = "<div class='popupright'>" +
							"<div class='fintprinttitle'>Things to know</div>" +
							"<div class='fintprint'>Once your enter your donation amount, you will be taken to PayPal to complete the donation process.  PayPal is secure and a trusted source for online transactions.</div>" +
							"<div class='fintprint'>If the project is successful, your credit card will be charged on Friday, Jan 20, 11:59pm EST.</div>" +
							"<div class='fintprint'>You can change or cancel your donation anytime before Friday, Jan 20, 11:59pm EST.</div>" +
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
	
	function positionLogin() {
		var wrapper = $(".login-box-wrap");
		var loginlink = $('.login-link');
		linkpos = loginlink.position();
		wrapper.css("left", linkpos.left-wrapper.outerWidth()+loginlink.outerWidth());
		wrapper.css("top", linkpos.top + loginlink.outerHeight()*2 - 7);
	}
	
	function setupLogin() {
		
		var body = $('body');
		var loginlink = $('.login-link');
	
		var wrapper = $("<div class='login-box-wrap'></div>");
		linkpos = loginlink.position();
		
		wrapper.hide();
		
		body.append(wrapper);
		
		loginlink.hover();
		
		wrapper.append("<div class='login-hint'>Username</div>" +

			"<input type='text' class='login-field'></input>" +
			
			"<div class='login-hint'>Password</div>" + 
			
			"<input type='password' class='login-field'></input>" +
			
			"<div class='forgot-pass-link'>forgot password?</div>" +
			
			"<div class='login-button weeve-small-button'>Log in</div>"
		);

		positionLogin();

		body.click( function() {
			wrapper.hide();
		});
		
		wrapper.click ( function() {
			return false;
		});
	}
});
