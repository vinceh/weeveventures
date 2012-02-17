<div id="node-<?php print $node->nid; ?>" class="project-update node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?>">

  <h3><?= $title ?></h3>

  <div class="project-body">
<?php print $node->native_body ?>
  </div>
<?php print l(t('Edit'), 'edit', array('attributes' => array('class' => 'weeve-medium-button'))) ?>
<?php print l(t('Delete'), 'delete', array('attributes' => array('class' => 'weeve-medium-button'))) ?>
</div>
