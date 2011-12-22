
<div class="right-panel-value-box">
  <div class="value-box-value"><?= (int) $node->field_project_donors[0]['value'] ?></div>
  <div class="value-box-subtitle"><?= t('donors') ?></div>
</div>
<div class="right-panel-value-box">
  <div class="value-box-value">$<?= format_number((int)$node->field_project_amount_pledge[0]['amount'], -1) ?></div>
  <div class="value-box-subtitle"><?= t('donated of') ?> $<?= format_number((int)$node->field_project_amount_need[0]['amount'], -1) ?></div>
</div>
<div class="right-panel-value-box">
  <?php if ($node->days_left >= 0): ?>
  <div class="value-box-value"><?= $node->days_left ?></div>
  <div class="value-box-subtitle"><?= t('days to go') ?></div>
  <?php else: ?>
  <div class="value-box-subtitle"><?= t('the project has ended') ?></div>
  <?php  endif; ?>
</div>
<div class="donate-button weeve-medium-button">
  <div class="donate-button-content "><?= l(t('make donation'), 'project/' . $node->nid . '/donate') ?></div>
  <div class="donate-button-subtitle">$1 <?= t('minimum') ?></div>
</div>
<div class="follow-link"><?= l(t('Follow this Project'), 'project/' . $node->nid . '/follow') ?></div>
<div class="horizontal-line"></div>
<div class="project-npo-name"><?= $profile->field_npo_name[0]['value'] ?></div>
<div class="project-npo-content">The Centre assists women with their immediate and crisis needs so they can develop stability and access the resources they need to improve health, family, employment and housing situations. We promote positive change by offering individual long-term support, education, advocacy, peer mentorship and exposure to alternatives. <br><br>

			Our community also works towards increasing awareness of systemic injustice and inequalities that contribute to women’s vulnerability. One of our goals is to bring awareness of poverty and violence issues to the general public and to the government.

</div>