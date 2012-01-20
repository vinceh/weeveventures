<?php

/**
 * @file search-result.tpl.php
 * Default theme implementation for displaying a single search result.
 *
 * This template renders a single search result and is collected into
 * search-results.tpl.php. This and the parent template are
 * dependent to one another sharing the markup for definition lists.
 *
 * Available variables:
 * - $url: URL of the result.
 * - $title: Title of the result.
 * - $snippet: A small preview of the result. Does not apply to user searches.
 * - $info: String of all the meta information ready for print. Does not apply
 *   to user searches.
 * - $info_split: Contains same data as $info, split into a keyed array.
 * - $type: The type of search, e.g., "node" or "user".
 *
 * Default keys within $info_split:
 * - $info_split['type']: Node type.
 * - $info_split['user']: Author of the node linked to users profile. Depends
 *   on permission.
 * - $info_split['date']: Last update of the node. Short formatted.
 * - $info_split['comment']: Number of comments output as "% comments", %
 *   being the count. Depends on comment.module.
 * - $info_split['upload']: Number of attachments output as "% attachments", %
 *   being the count. Depends on upload.module.
 *
 * Since $info_split is keyed, a direct print of the item is possible.
 * This array does not apply to user searches so it is recommended to check
 * for their existance before printing. The default keys of 'type', 'user' and
 * 'date' always exist for node searches. Modules may provide other data.
 *
 *   <?php if (isset($info_split['comment'])) : ?>
 *     <span class="info-comment">
 *       <?php print $info_split['comment']; ?>
 *     </span>
 *   <?php endif; ?>
 *
 * To check for all available data within $info_split, use the code below.
 *
 *   <?php print '<pre>'. check_plain(print_r($info_split, 1)) .'</pre>'; ?>
 *
 * @see template_preprocess_search_result()
 

<dt class="title">
  <a href="<?php print $url; ?>"><?php print $title; ?></a>
</dt>
<dd>
  <?php if ($snippet) : ?>
    <?php if (isset($result['node']->sm_field_project_image[0])): ?>
<a title="<?php print $title ;?>" href="<?php print $url; ?>"><?php print theme('imagecache',
'scale_crop_215x150', $result['node']->sm_field_project_image[0]); ?></a>
<?php endif; ?>
    <p class="search-snippet"><?php print $snippet; ?></p>
  <?php endif; ?>
  <?php if ($info) : ?>
    <p class="search-info">
    Author: <?= l(strip_tags($result['user']), 'account/' . $result['node']->uid) ?>
      &mdash;
      <?= date('d/m/Y', $result['date']); ?>
      &mdash;
      <?= $result['extra'][0]?>
    </p>
  <?php endif; ?>
  <div class="clear-block">&nbsp;</div>
</dd>
*/ ?>

<div class='search-project'>
	<div class='image'>
		<?php print theme('imagecache', 'scale_crop_215x150', $result['node']->sm_field_project_image[0]); ?>
	</div>
	<div class='content'>
		<div class='proj-title'>
      <?php print l($result['node']->title, drupal_get_path_alias('node/'. $result['node']->nid), array('attributes' => array('class' => 'weeve-link'))); ?>
		</div>
		<div class='proj-paragraph'>
			<?php print $snippet; ?>
		</div>
		<div class='project-location-wrap'>
			<img src='<?php print url(drupal_get_path('theme', 'weeve') .'/img/icon-location.png') ?>'/>
			<span><?php print $result['node']->sm_field_project_location[0]; ?></span>
		</div>
	</div>
	<div class='donated-history'>
		<div class='donated-history-stat-wrap'>
			<div class='value'><?php print $result['node']->sm_field_project_donors[0] ?></div>
			<div class='subject'><?php print t('donors'); ?></div>
		</div>
		<div class='donated-history-stat-wrap'>
			<div class='value'>$<?php print $result['node']->sm_field_project_amount_pledge[0]; ?></div>
			<div class='subject'><?php print t('of $@amount', array('@amount' => $result['node']->sm_field_project_amount_need[0])); ?></div>
		</div>
		<div class='donated-history-stat-wrap'>
			<div class='value'><?php print $result['node']->sm_field_project_end[0]; ?></div>
			<div class='subject'><?php print t('days left'); ?></div>
		</div>
	</div>
</div>
