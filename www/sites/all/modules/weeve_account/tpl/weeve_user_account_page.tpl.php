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
			  <div class='profile-link'><?php print l(t('history'), 'account'); ?></div>
      <?php endif; ?>
			<div class='profile-link'><?php print l(t('following'), 'account/'. $user->uid .'/following') ?></div>
		</div>
		<div class='profile-main-wrapper'>
      <?php print $content; ?>
		</div>
	</div>
</div>