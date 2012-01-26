<table>
  <thead>
  <tr>
    <th><?= t('Title'); ?></th>
    <th><?= t('Value'); ?></th>
    <th><?= t('Last updated'); ?></th>
  </tr>
  </thead>
  <tbody>
<?php foreach($data as $row): ?>
  <tr>
    <td><?= $row->title ? $row->title : $row->type ?></td>
    <td><?= (float)$row->value ?></td>
    <td><?=$row->last_updated ?></td>
  </tr>
<?php  endforeach; ?>
  </tbody>
</table>