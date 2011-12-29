<?php // $Id$

/**
 * @file
 * Theme hooks and callbacks for the Payment Progress module.
 */

/**
 * Implementation of hook_theme().
 */
function pay_progress_theme_theme() {
  $path = drupal_get_path('module', 'pay_progress') .'/theme';
  return array(
    'pay_progress' => array(
      'arguments' => array('pay_form' => NULL, 'progress_type' => 'total'),
      'template' => 'pay_progress',
      'pattern' => 'pay_progress__',
      'file' => 'pay_progress.theme.inc',
      'path' => $path,
    ),
    'pay_progress_total_paid' => array(
      'arguments' => array('pay_form' => NULL),
      'file' => 'pay_progress.theme.inc',
      'path' => $path,
    ),
  );
}

function theme_pay_progress_total_paid($pay_form) {
  return theme('pay_progress', $pay_form, 'total_pledged');
}

/**
 * A preprocess function for theme('pay_progress'). It generates the
 * variables needed there.
 *
 * The $variables array initially contains the following arguments:
 * - $pfid: The Id of the payment form to check progress of.
 *
 * See 'pay_progress.tpl.php' for their documentation.
 */
function template_preprocess_pay_progress(&$variables, $hook) {
  // Add base CSS for progress bar theming
  drupal_add_css(drupal_get_path('module', 'pay_progress') .'/theme/pay_progress.css');

  $pay_form = $variables['pay_form'];

  $variables['currency'] = $pay_form->currency();
  $variables['goal'] = $goal = $pay_form->total_goal();
  $variables['total'] = $total = ($variables['progress_type'] == 'total') ? $pay_form->total() : $pay_form->total_paid();
  if ($goal) {
    $variables['percent'] = ($goal > 0) ? (($total / $goal) * 100) : 0;
  }
}
