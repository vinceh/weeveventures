$(document).ready(function() {
  $('.view-npo-project-proposals table tr').click(function(e) {
    if (e.target.tagName == 'A' || $(e.target).hasClass('weeve-medium-button')) {
      return;
    }
    e.preventDefault();
    $(this).find('.body_small').toggle();
    $(this).find('.body').toggle();    
  });

  $('#weeve-project-edit-project-form button.cancel').click(function(e) {
    e.preventDefault();
  });
});