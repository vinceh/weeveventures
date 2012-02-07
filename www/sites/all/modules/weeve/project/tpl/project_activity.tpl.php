<ul class="project-activity">
<?php foreach($activity as $row): ?>
  <li>
    <span class="activity-date"></span>
    <?php if ($row->type == 'comment'): ?>
    <?= l($row->username, 'account/' . $row->uid)?> <?= t('made a') . ' ' . l(t('comment'), 'project/' . $row->nid . '/comments'); ?>
    <?php elseif ($row->type == 'donation'): ?>
    <?= l($row->username, 'account/' . $row->uid)?> <?= t('donated') . ' $' . $row->amount; ?>
    <?php endif; ?>
    <?= format_interval(time() - $row->timestamp) . ' ' . t('ago') ?>
  </li>
<?php endforeach; ?>
</ul>