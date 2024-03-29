<?php if(variable_get('account_donation_history_'. $account->uid, TRUE) || $user->uid == $account->uid): ?>
<div class='profile-project-stats-wrap'>
	<div class='profile-stats-wrap'>
		<div class='stats-value'><?php print $account->projects_funded ?></div>
		<div class='stats-title'><?php print t('Projects Funded'); ?></div>
	</div>
	<div class='profile-stats-wrap'>
		<div class='stats-value'><?php print '$'. $account->donated; ?></div>
		<div class='stats-title'><?php print t('Donated Total'); ?></div>
	</div>
</div>
<?php if (!empty($account->history)): ?>
<?php foreach($account->history as $date => $donates): ?>
  <div class='profile-main-title'><?php print $date; ?></div>
    <?php foreach ($donates as $donate): ?>
      <div class='profile-main-content-wrap'>
        <span class='profile-main-content-value'><?php print t('Backed $@amount to project', array('@amount' => $donate->amount)); ?></span>
        <span class='profile-main-content-project'><?php print l($donate->project_title, drupal_get_path_alias('node/'. $donate->nid), array('attributes' => array('class' => 'weeve-link'))); ?></span>
        <span class='profile-main-content-date'><?php print date('M d', $donate->created) ?></span>
      </div>
    <?php endforeach; ?>
<?php endforeach; ?>
<?php else: ?>
  <div class='profile-main-title'><?php print t('No history yet'); ?></div>
<?php endif; ?>
<?php else: ?>
 <div><p><?php print t('The user has denied view of this information'); ?></p></div>
<?php endif ?>