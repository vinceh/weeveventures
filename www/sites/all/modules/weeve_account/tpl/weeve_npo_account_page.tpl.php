<div class='npo-profile-wrapper'>

	<div class='npo-profile-title-section'>
			<div class='npo-profile-img-wrapper'>
        <?php print theme('imagecache', 'scale_crop_200px', $account->photo, $account->name, $account->name); ?>
			</div>
			<div class='npo-profile-header-wrap'>
				<div class='profile-name'><?php print $account->name; ?></div>
				<div class='profile-subname'><?php print $profile->field_npo_bio[0]['value']; ?></div>
				<div class='npo-profile-title-links'>
          <?php if($user->uid == $account->uid): ?>
            <?php print l(t('Edit profile'), 'account/change', array('attributes' => array('class' => 'title-link weeve-link'))); ?>
            <?php print l(t('Create new Project'), 'project/terms', array('attributes' => array('class' => 'title-link weeve-medium-button'))); ?>
          <?php endif; ?>
				</div>
			</div>
	</div>

	<div class='profile-links'>
      <?php print l(t('about'), 'account/'. $account->uid, array('attributes' => array('class' => 'profile-link'))); ?>
      <?php print l(t('history'), 'account/'. $account->uid .'/history', array('attributes' => array('class' => 'profile-link'))); ?>
      <?php if($user->uid == $account->uid): ?>
        <?php print l(t('pending projects'), 'account/'. $account->uid .'/projects', array('attributes' => array('class' => 'profile-link'))); ?>
      <?php endif; ?>
	</div>

	<div class='npo-profile-content-wrap'>
    <?php print $content; ?>
	</div>

	<div class='footer'></div>
	</div>