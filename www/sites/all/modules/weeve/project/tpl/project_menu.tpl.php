<ul class="project-node-menu">
  <li><?= l(t('project'), 'node/' . $nid) ?></li>
  <li><?= l(t('updates'), 'project/' . $nid . '/updates') ?></li>
  <li><?= l(t('discussion'), 'project/' . $nid . '/comments') ?></li>
  <?php if ($edit): ?>
    <li><?= l(t('edit'), 'node/' . $nid . '/edit') ?></li>
  <?php endif; ?>
</ul>