$(window).load( function() {

	var body = $('body');
	var loginlink = $('.login-link');
	
	setupLogin();
	
	loginlink.click( function() {
	
		positionLogin();
		
		$(".login-box-wrap").show();
		$(".login-field").focus();
		return false;
	});
	
	$(window).resize( function() {
		positionLogin();
	});
	
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
