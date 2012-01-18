<div class='profile-wrapper'>
	<div class='profile-left'>
		  <div class='profile-picture'><?php print theme('imagecache', 'scale_crop_200px', $account->photo, $account->name, $account->name); ?></div>

    <?php global $user; if($user->uid == $account->uid): ?>
		  <div class='profile-edit-link'><?php print l(t('Edit Profile'), 'account/change'); ?></div>
    <?php endif; ?>

		<div class='profile-info-title'><?php // print t('Information');?></div>

    <?php if($settings['show_location']): ?>
		  <div class='profile-info-content'><?php print $profile->field_location[0]['value']; ?></div>
    <?php endif; ?>

    <?php if($settings['show_email']): ?>
      <div class='profile-info-title'>Contact</div>
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
        <?php if (arg(0) == 'account' && !arg(2)) $active_class = ' active'; ?>
			  <?php print l(t('history'), 'account/'. $account->uid, array('attributes' => array('class' => 'profile-link'. $active_class))); ?>
      <?php endif; ?>
      <?php if ($settings['account_following'] || $account->uid == $user->uid): ?>
		    <?php print l(t('following'), 'account/'. $account->uid .'/following', array('attributes' => array('class' => 'profile-link'))) ?>
      <?php endif; ?>
      <?php if ($account->uid == $user->uid): ?>
		    <?php print l(t('donated projects'), 'account/'. $account->uid .'/donated', array('attributes' => array('class' => 'profile-link'))) ?>
      <?php endif; ?>
		</div>
		<div class='profile-main-wrapper'>
      <?php print $content; ?>
		</div>
	</div>
</div>