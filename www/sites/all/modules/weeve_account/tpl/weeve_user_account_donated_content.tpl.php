<?php if (!empty($projects)):?>
<?php foreach($projects as $project): ?>
<div class='donated-project'>
  <input type="hidden" class="preapproval-amount" value="<?php print $project['donate']->amount; ?>">
  <input type="hidden" class="preapproval-id" value="<?php print $project['donate']->pid; ?>">
  <input type="hidden" class="end-date" value="<?php print date_format(date_make_date($project['node']->field_project_end[0]['value']), 'L, M j, 11:59p\m'); ?>">
	<div class='donated-image'>
		<?php print theme('imagecache', 'scale_crop_215x150', $project['node']->field_project_image[0]['filepath']); ?>
	</div>
	<div class='donated-content'>
		<div class='proj-title'>
      <?php print l($project['node']->title, drupal_get_path_alias('node/'. $project['node']->nid), array('attributes' => array('class' => 'weeve-link'))); ?>
		</div>
		<!--<div class='proj-subtitle'></div>-->
		<div class='proj-paragraph'>
			<?php print $project['node']->teaser; ?>
		</div>
		<div class='project-location-wrap'>
			<img src='<?php print url(drupal_get_path('theme', 'weeve') .'/img/icon-location.png') ?>'/>
			<span><?php print $project['node']->field_project_location[0]['value']; ?><span>
			<button class='weeve-small-button manage'>Manage Donation</button>
		</div>
	</div>
	<div class='donated-history'>
		<div class='donated-history-stat-wrap'>
			<div class='value'><?php print $project['node']->field_project_donors[0]['value'] ?></div>
			<div class='subject'><?php print t('donors'); ?></div>
		</div>
		<div class='donated-history-stat-wrap'>
			<div class='value'>$<?php print $project['node']->field_project_amount_pledge[0]['amount']; ?></div>
			<div class='subject'><?php print t('of @amount', array('@amount' => $project['node']->field_project_amount_need[0]['amount'])); ?></div>
		</div>
		<div class='donated-history-stat-wrap'>
			<div class='value'><?php print $project['node']->days_left; ?></div>
			<div class='subject'><?php print t('days left'); ?></div>
		</div>
	</div>
</div>
<?php endforeach; ?>
<?php else: ?>
        <p>No donated projects</p>
<?php endif; ?>  