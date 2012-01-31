<div class="paypal-status-label"><?= t('Current PayPal Status'); ?></div>
<?php if ($verified == 0): ?>
<div class="paypal-status paypal-not-verified"><span><?= t('Not verified.') ?></span> <?= t('Please provide your verified Non-profit PayPal account information. Once we approve of your account, you can start proposing projects.'); ?></div>
<?php elseif ($verified == 1): ?>
<div class="paypal-status paypal-pending"><span><?= t('Pending.') ?></span> <?= t('We are in the process of verifying your PayPal account. This usually takes 1-2 business days.'); ?></div>
<?php else: ?>
<div class="paypal-status paypal-verified"<span><?= t('Verified.') ?></span> <?= t('Your PayPal account is verified, you may now '); l(t('propose a new project!', 'project/terms'))?></div>
<?php endif; ?>
<div class="clear-block">&nbsp;</div>
<?= drupal_render($form); ?>