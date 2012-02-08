
<div class='signup-header'>
	<div class='signup-title'>Join Weeve</div>
</div>

<div class='signup-choices-wrap'>
		<a href="<?php print url('signup/user') ?>" class='signup-choice-wrap'>
			<div class='choice-title weevetext'>I'm a user!</div>
			<div class='choice-img'>
				<img src='<?php print drupal_get_path('theme', 'weeve') .'/img/usericon.png'?>'/>
			</div>
			<div class='choice-description'>
				Discover and fund community projects that you care about!
			</div>
		</a>
		<a href="<?php print url('signup/npo'); ?>" class='signup-choice-wrap'>
			<div class='choice-title weevetext'>I'm a non-profit!</div>
			<div class='choice-img'>
				<img src='<?php print drupal_get_path('theme', 'weeve') .'/img/npoicon.png' ?>'/>
			</div>
			<div class='choice-description'>
				Create community projects and get funded!
			</div>
		</a>
		<a href="<?php print url('signup/corp'); ?>" class='signup-choice-wrap'>
			<div class='choice-title weevetext'>I'm a company!</div>
			<div class='choice-img'>
				<img src='<?php print drupal_get_path('theme', 'weeve') .'/img/corpicon.png' ?>'/>
			</div>
			<div class='choice-description'>
				Improve your corporate social responsibility by sponsoring a community project!
			</div>
		</a>
	</div>

<div class='footer'></div>