<div class='npo-profile-wrapper'>

  <div class='npo-profile-title-section'>
    <div class='npo-profile-img-wrapper'>
      <?php print theme('imagecache', 'scale_crop_200px', $account->photo, $account->name, $account->name); ?>
    </div>
    <div class='npo-profile-header-wrap'>
      <div class="npo-profile-title-wrap">
        <div class='profile-name'><?php print $profile->field_npo_name[0]['value']; ?></div>
        <div class="weevesubtitle profile-npo-title-location">
          <?php if ($profile->field_location[0]['value']): ?>
          <?php print $profile->field_location[0]['value'] . ' - ' ?>
          <?php endif; ?>
          <?php print l(t('Visit our website'), $profile->field_npo_website[0]['url'], array('attributes' => array('target' => '_blank'))); ?></div>
        </div>
        <div class='profile-subname'><?php print $profile->field_npo_bio[0]['value']; ?></div>
        <div class='npo-profile-title-links'>
        <?php if ($user->uid == $account->uid): ?>
        <?php print l(t('Account Settings'), 'account/change', array('attributes' => array('class' => 'title-link weeve-link'))); ?>

        <?php if (_weeve_project_is_allowed_create_proposal ()): ?>
        <?php print l(t('Create new proposal'), 'project/terms', array('attributes' => array('class' => 'title-link weeve-medium-button'))); ?>
        <?php endif; ?>
        <?php endif; ?>
              </div>
            </div>
          </div>

          <div class='profile-links'>
    <?php if (arg(0) == 'account' && !arg(2))
                  $active_class = ' active'; ?>
    <?php print l(t('about'), 'account/' . $account->uid . '/about', array('attributes' => array('class' => 'profile-link'))); ?>
    <?php print l(t('history'), 'account/' . $account->uid . '/history', array('attributes' => array('class' => 'profile-link' . $active_class))); ?>
    <?php if ($user->uid == $account->uid): ?>
    <?php print l(t('project status'), 'account/' . $account->uid . '/projects', array('attributes' => array('class' => 'profile-link'))); ?>
<?php endif; ?>
                </div>

                <div class='npo-profile-content-wrap'>
<?php print $content; ?>
  </div>

  <div class='footer'></div>
</div>