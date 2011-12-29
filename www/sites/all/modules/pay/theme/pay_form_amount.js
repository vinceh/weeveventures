// $Id: pay_cc.js,v 1.1 2009/04/29 02:35:32 jerdavis Exp

/**
 * @file
 * jQuery functions for the credit card form.
 */

Drupal.behaviors.payFormAmount = function(context) {
  // Hide submit buttons and simply rely on user clicks if we have JavaScript.
  $('form.pay-form-amount input:submit').hide();

  // If there are radio buttons, hide the actual radio fields and rely on label.
  $('form.pay-form-amount input:radio').hide();

  // Submit the form when any value is clicked.
  $("form.pay-form-amount input:radio").click(function() {
    this.form.submit();
  });
}
