<div id="node-<?php print $node->nid; ?>" class="project-update node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?>">

  <ul class="project-node-menu">
    <li><?= l(t('project'), 'node/' . $node->field_update_project[0]['nid']) ?></li>
    <li><?= l(t('updates'), 'project/' . $node->field_update_project[0]['nid'] . '/updates', array('attributes' => array('class' => 'active'))) ?></li>
    <li><?= l(t('discussion'), 'project/' . $node->field_update_project[0]['nid'] . '/comments') ?></li>
  </ul>

<?php print $picture ?>

<?php if ($page == 0): ?>
  <h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>

  <?php if ($submitted): ?>
    <span class="submitted"><?php print $submitted; ?></span>
  <?php endif; ?>

  <div class="content clear-block">
    <?php print $content ?>
  </div>

  <div class="clear-block">
    <div class="meta">
    <?php if ($taxonomy): ?>
      <div class="terms"><?php print $terms ?></div>
    <?php endif;?>
    </div>

    <?php if ($links): ?>
      <div class="links"><?php print $links; ?></div>
    <?php endif; ?>
  </div>

</div>
