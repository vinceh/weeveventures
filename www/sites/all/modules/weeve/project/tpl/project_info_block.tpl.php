
<div class="right-panel-value-box">
  <div class="value-box-value"><?= (int) $node->field_project_donors[0]['value'] ?></div>
  <div class="value-box-subtitle"><?= t('donors') ?></div>
</div>
<?php if ($node->field_project_status[0]['value'] == 'accept'): ?>
<div class="right-panel-value-box">
  <div class="value-box-value">$<?= format_number((int)$node->field_project_amount_pledge[0]['amount'], -1) ?></div>
  <div class="value-box-subtitle"><?= t('donated of') ?> $<?= format_number((int)$node->field_project_amount_need[0]['amount'], -1) ?></div>
</div>
<div class="right-panel-value-box">  
  <div class="value-box-value"><?= $node->days_left ?></div>
  <div class="value-box-subtitle"><?= t('days to go') ?></div>  
</div>
<?php elseif($node->field_project_status[0]['value'] == 'archive' && $node->field_project_percent_pledge[0]['value'] >= WEEVE_PROJECT_SUCCESS_PERCENT): ?>
<div class="right-panel-value-box">
  <h4><?= t('Project successful!') ?></h4>
  <div class="value-box-subtitle"><?= t('Raised <strong>$%dollars</strong> ending on <strong>%date</strong>', array(
      '%dollars' => format_number((int)$node->field_project_amount_pledge[0]['amount'], -1),
      '%date' => date('d M Y', $node->timestamp)
  )) ?></div>
</div>
<?php  endif; ?>
<?php if (!($node->field_project_status[0]['value'] == 'archive' && $node->field_project_percent_pledge[0]['value'] >= WEEVE_PROJECT_SUCCESS_PERCENT)): ?>
<?php if($donation): ?>
<div class="manage-donate-button weeve-medium-button">
  <input type="hidden" id="project-link" value="<?php print url(drupal_get_path_alias($_GET['q'])); ?>">
  <input type="hidden" id="project-title" value="<?php print $node->title; ?>">
  <input type="hidden" id="project-amount" value="<?php print $donation->amount; ?>">
  <input type="hidden" id="project-pid" value="<?php print $donation->pid; ?>">
  <input type="hidden" id="project-end" value="<?php print date_format(date_make_date($node->field_project_end[0]['value']), 'L, M j, 11:59p\m'); ?>">
  <div class="donate-button-content "><?= l(t('manage donation'), 'project/' . $node->nid . '/donate') ?></div>
  <div class="donate-button-subtitle">$1 <?= t('minimum') ?></div>
</div>
<?php else: ?>
<?php global $user; ?>
<?php if (!in_array('npo', $user->roles) && $user->uid): ?>
<div class="donate-button weeve-medium-button">
  <div class="donate-button-content "><?= l(t('make donation'), 'project/' . $node->nid . '/donate') ?></div>
  <div class="donate-button-subtitle">$1 <?= t('minimum') ?></div>
</div>
<?php endif; ?>
<?php if(!$user->uid): ?>
  <div class="donate-button-anon weeve-medium-button">
    <div class="donate-button-content "><?= l(t('make donation'), 'signup') ?></div>
    <div class="donate-button-subtitle">$1 <?= t('minimum') ?></div>
  </div>
<?php endif; ?>
<?php endif; ?>
<?php endif; ?>
<div class="follow-link"><?= l(t('Follow this Project'), 'project/' . $node->nid . '/follow') ?></div>
<div class="horizontal-line"></div>
<div class="project-npo-name"><?= l($profile->field_npo_name[0]['value'], 'account/' . $node->uid) ?></div>
<div class="project-npo-content">
  <?= $profile->field_npo_about[0]['value'] ?>
</div>