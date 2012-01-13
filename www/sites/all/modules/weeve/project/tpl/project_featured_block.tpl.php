<?php if ($items): ?>
<ul class="menu">
  <?php foreach($items as $link => $item): ?>
  <li><?= l($item, $link) ?></li>
  <?php endforeach; ?>
</ul>
<?php endif; ?>