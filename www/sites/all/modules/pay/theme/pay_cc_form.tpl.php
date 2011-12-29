<?php // $Id$
/**
 * @file
 * Default theme implementation to display a credit card form for Pay.
 *
 * Available variables:
 *
 *  - $element: The full form array.
 *  - $pay_form: The entire rendered form.
 *  - $pay['cc_type']: The credit card type selection.
 *  - $pay['first_name']: The first name of the card holder.
 *  - $pay['last_name']: The last name of the card holder.
 *  - $pay['mail']: The payer's email address.
 *  - $pay['cc_number']: The credit card number.
 *  - $pay['cc_ccv2']: The credit card verification number.
 *  - $pay['cc_exp_month']: The credit card expiration month.
 *  - $pay['cc_exp_year']: The credit card expiration year.
 *
 */

// If the credit card form is being rendered, provide its CSS file.
if ($setup) {
  drupal_add_css(drupal_get_path('module', 'pay') .'/theme/pay_cc.css');
  drupal_add_js(drupal_get_path('module', 'pay') .'/theme/pay_cc.js');
}
?>

<?php if ($pay['prefix']) :?>
  <div class="pay-cc-form-prefix">
    <?php foreach($pay['prefix'] as $item):?>
        <?php print $item; ?>
    <?php endforeach?>
  </div>
<?php endif?>
<div class="pay-cc-form">
  <div class="pay-cc-name">
    <div class="pay-cc-first-name cc-name">
      <?php print $pay['first_name']; ?>
    </div>
    <div class="pay-cc-last-name cc-name">
      <?php print $pay['last_name']; ?>
    </div>
  </div>
  <div class="pay-cc-mail cc-mail">
    <?php print $pay['mail']; ?>
  </div>
  <?php if ($pay['billto']) :?>
    <div class="pay-cc-billto cc-billto">
      <?php print $pay['billto']; ?>
    </div>
  <?php endif ?>
  <div class="pay-cc-type">
    <?php print $pay['cc_type']; ?>
  </div>
  <div class="pay-cc-info">
    <div class="pay-cc-number cc-info">
      <?php print $pay['cc_number']; ?>
    </div>
    <div class="pay-cc-ccv2 cc-info">
      <?php print $pay['cc_ccv2']; ?>
    </div>
    <?php if ($pay['cc_issue_number']) :?>
      <div class="pay-cc-issue-number cc-issue-number cc-info">
        <?php print $pay['cc_issue_number']; ?>
      </div>
    <?php endif ?>
  </div>
  <div class="pay-cc-exp">
    <div class="pay-cc-exp-month cc-exp">
      <?php print $pay['cc_exp_month']; ?>
    </div>
    <div class="pay-cc-exp-year cc-exp">
      <?php print $pay['cc_exp_year']; ?>
    </div>
  </div>
</div>
<div class="clear"></div>
<?php if ($pay['suffix']) :?>
  <div class="pay-cc-form-suffix">
    <?php foreach($pay['suffix'] as $item):?>
        <?php print $item; ?>
    <?php endforeach?>
  </div>
  <div class="clear"></div>
<?php endif?>
