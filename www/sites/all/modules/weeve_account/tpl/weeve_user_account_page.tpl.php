<div class='profile-wrapper'>
	<div class='profile-left'>
		  <div class='profile-picture'><?php print theme('imagecache', 'scale_crop_200px', $account->photo, $account->name, $account->name); ?></div>

    <?php global $user; if($user->uid == $account->uid): ?>
		  <div class='profile-edit-link'><?php print l(t('Edit Profile'), 'account/change'); ?></div>
    <?php endif; ?>

		<div class='profile-info-title'><?php // print t('Information');?></div>

    <?php if($settings['show_location']): ?>
		  <div class='profile-info-content'><?php print t('Montecito, CA');?></div>
    <?php endif; ?>

		<div class='profile-info-title'>Contact</div>
    <?php if($settings['show_email']): ?>
		  <div class='profile-info-content'><?php print $account->mail; ?></div>
    <?php endif; ?>

	</div>
	<div class='profile-right'>
		<div class='profile-title-section'>
			<div class='profile-name'><?php print $account->name; ?></div>
			<div class='profile-subname'><?php // print('subname here'); ?></div>
		</div>
		<div class='profile-links'>
      <?php if ($settings['donation_history'] || $account->uid == $user->uid): ?>
			  <div class='profile-link'><?php print l(t('history'), 'account/'. $user->uid .'/donation-history'); ?></div>
      <?php endif; ?>
			<div class='profile-link'><?php print l(t('following'), '#') ?></div>
		</div>
		<div class='profile-main-wrapper'>
			<div class='profile-main-title'>September, 2011</div>
			<div class='profile-main-content-wrap'>
				<span class='profile-main-content-value'>Backed $60 to project</span>
				<span class='profile-main-content-project'><a href='showproject.html' class='weeve-link'>New Shelter for Women and Children</a></span>
				<span class='profile-main-content-date'>sept 26</span>
			</div>
			<div class='profile-main-content-wrap'>
				<span class='profile-main-content-value'>Earned the 'amateur philantropist' badge!</span>
			</div>
			<div class='profile-main-content-wrap'>
				<span class='profile-main-content-value'>Backed $20 to project</span>
				<span class='profile-main-content-project'>Cards for children</span>
				<span class='profile-main-content-date'>sept 20</span>
			</div>
			<div class='profile-main-content-wrap'>
				<span class='profile-main-content-value'>Backed $5 to project</span>
				<span class='profile-main-content-project'>Acting - the game of life</span>
				<span class='profile-main-content-date'>sept 16</span>
			</div>
			<div class='profile-main-content-wrap'>
				<span class='profile-main-content-value'>Earned the 'empathetic being' badge!</span>
			</div>
			<div class='profile-main-content-wrap'>
				<span class='profile-main-content-value'>Backed $25 to project</span>
				<span class='profile-main-content-project'>60 Murals on the wall</span>
				<span class='profile-main-content-date'>sept 10</span>
			</div>
			<div class='profile-main-title'>August, 2011</div>

			<div class='profile-main-content-wrap'>
				<span class='profile-main-content-value'>Backed $30 to project</span>
				<span class='profile-main-content-project'>CREATURES - the card game</span>
				<span class='profile-main-content-date'>sept 26</span>
			</div>
			<div class='profile-main-content-wrap'>
				<span class='profile-main-content-value'>Backed $20 to project</span>
				<span class='profile-main-content-project'>Cards for children</span>
				<span class='profile-main-content-date'>sept 20</span>
			</div>
			<div class='profile-main-content-wrap'>
				<span class='profile-main-content-value'>Backed $5 to project</span>
				<span class='profile-main-content-project'>Acting - the game of life</span>
				<span class='profile-main-content-date'>sept 16</span>
			</div>
			<div class='profile-main-content-wrap'>
				<span class='profile-main-content-value'>Earned the 'donator' badge!</span>
			</div>
			<div class='profile-main-content-wrap'>
				<span class='profile-main-content-value'>Backed $25 to project</span>
				<span class='profile-main-content-project'>60 Murals on the wall</span>
				<span class='profile-main-content-date'>sept 10</span>
			</div>
		</div>
	</div>
</div>