<ul class="project-node-menu">
  <li><?= l(t('project'), 'node/' . $nid) ?></li>
  <li><?= l(t('updates'), 'project/' . $nid . '/updates') ?></li>
  <li><?= l(t('discussion'), 'project/' . $nid . '/comments') ?></li>
  <?php if ($edit): ?>
    <li><?= l(t('edit'), 'project/' . $nid . '/edit') ?></li>
    <li><?= l(t('cancel'), 'project/' . $nid . '/cancel') ?></li>
  <?php endif; ?>
</ul>