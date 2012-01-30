<div class='npo-profile-about-wrap'>
  <?php if($profile->field_npo_about[0]['value']): ?>
  <?php print check_markup($profile->field_npo_about[0]['value']); ?>
  <?php else: ?>
  <div>
    <p><?php print t(''); ?></p>
  </div>
  <?php endif; ?>
</div>


