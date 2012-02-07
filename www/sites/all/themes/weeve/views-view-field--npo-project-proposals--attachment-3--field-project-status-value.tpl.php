<?php
 /**
  * This template is used to print a single field in a view. It is not
  * actually used in default Views, as this is registered as a theme
  * function which has better performance. For single overrides, the
  * template is perfectly okay.
  *
  * Variables available:
  * - $view: The view object
  * - $field: The field handler object that can process the input
  * - $row: The raw SQL result that can be used
  * - $output: The processed output that will normally be used.
  *
  * When fetching output from the $row, copy and paste the following snippet:
  * $data = $row->{$field->field_alias}
  *
  * The above will guarantee that you'll always get the correct data,
  * regardless of any changes in the aliasing that might happen if
  * the view is modified.
  */
?>

<?php if(weeve_donation_is_pending_payout($row->nid)): ?>
  <div class="weeve-medium-button payout weevedisabled" nid="<?= $row->nid?>"><?= t('Payout Pending'); ?></div>
<?php elseif(!$row->node_data_field_project_percent_pledge_field_project_payed_o): ?>
  <div class="weeve-medium-button payout" nid="<?= $row->nid?>"><?= t('Request payout'); ?></div>
<?php else: ?>
  <div class="project-payout-complete-text"><?= t("Project Payout Complete"); ?></div>
<?php endif; ?>