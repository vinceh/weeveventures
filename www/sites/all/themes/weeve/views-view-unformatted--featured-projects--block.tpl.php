<?php
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div class="<?php print $classes[$id]; ?><?php print (($id) % 3 == 0) ? ' first-row-line' : ''?>">
    <?php print $row; ?>
  </div>

  <?php if (($id + 1) % 3 == 0): ?>  
  <div class="clear-block">&nbsp;</div>
  <div>&nbsp;</div>
  <?php endif; ?>
<?php endforeach; ?>