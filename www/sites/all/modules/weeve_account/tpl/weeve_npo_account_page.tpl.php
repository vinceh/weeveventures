<div class='npo-profile-wrapper'>

	<div class='npo-profile-title-section'>
			<div class='npo-profile-img-wrapper'>
        <?php print theme('imagecache', 'scale_crop_200px', $account->photo, $account->name, $account->name); ?>
			</div>
			<div class='npo-profile-header-wrap'>
        <div class="npo-profile-title-wrap">
          <div class='profile-name'><?php print $account->name; ?></div>
          <div class="weevesubtitle profile-npo-title-location"><?php print $profile->field_location[0]['value'] .' - '.  l(t('Visit our website'), $profile->field_npo_website[0]['url']);  ?></div>
        </div>
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
      <?php print l(t('about'), 'account/'. $account->uid .'/about', array('attributes' => array('class' => 'profile-link'))); ?>
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