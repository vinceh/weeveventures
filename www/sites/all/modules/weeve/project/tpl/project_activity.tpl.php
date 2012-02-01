<ul class="project-activity">
<?php foreach($activity as $row): ?>
  <li>
    <span class="activity-date"><?= date('d M Y', $row->timestamp) ?></span>
    <?php if ($row->type == 'comment'): ?>
    <?= t('New comment added: ') . node_teaser($row->comment, $row->format); ?>
    <?php elseif ($row->type == 'donation'): ?>
    <?= t('New donation: $') . $row->amount; ?>
    <?php endif; ?>
  </li>
<?php endforeach; ?>
</ul>