<div id="node-<?php print $node->nid; ?>" class="project node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?>">

  <div class="project-image">
<?php print theme_image($node->field_project_image[0]['filepath']); ?>
  </div>
  <div class="project-body">
<?php print $node->native_body ?>
  </div>

</div>
