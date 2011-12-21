<div id="node-<?php print $node->nid; ?>" class="project node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?>">

  <div class="project-image">

<?php
  if ($node->field_project_video[0]['video_id']):
   print theme('video_upload_video', $node->field_project_video[0]['video_id'], 580, 460);
  else:
?>
<?php print theme_image($node->field_project_image[0]['filepath']); ?>
<?php endif; ?>
  </div>
  <div class="project-body">
<?php print $node->native_body ?>
  </div>

</div>
