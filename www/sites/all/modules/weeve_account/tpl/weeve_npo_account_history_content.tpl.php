<div class='profile-npo-stats-container'>
  <div class='profile-npo-stats-wrap'>
    <div class='stats-value'><?php print $account->count_projects; ?></div>
    <div class='stats-title'><?php print t('projects'); ?></div>
  </div>
  <div class='profile-npo-stats-wrap'>
    <div class='stats-value'><?php print '$' . $account->money; ?></div>
    <div class='stats-title'><?php print t('funded'); ?></div>
  </div>

  <div class='profile-npo-stats-wrap'>
    <div class='stats-value'><?php print $account->donors; ?></div>
    <div class='stats-title'><?php print t('donors'); ?></div>
  </div>
</div>

<div class='project-area-content'>
  <?php print views_embed_view('featured_projects', 'page_4', $account->uid); ?>
</div>