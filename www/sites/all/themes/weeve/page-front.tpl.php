<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<html>
<head>
	<script src="http://ajax.googleapis.com/ajax/libs/jquery/1.7.1/jquery.min.js" type="text/javascript"></script>
  <title><?php print $head_title ?></title>
	<?php print $styles ?>
	<?php print $scripts ?>
</head>

<body class="front-page">
	<div id="header-region" class="clear-block">
    <div id="header">
  <div class="site-title"><?php print l('<img alt="Weeve" src="'.base_path().'sites/all/themes/weeve/img/landing-logo.png" />', '', array('html' => 'true')); ?></div>
  <?php print $header; ?></div>
  </div>

    <div id="wrapper">
      <div id="container" class="clear-block">
        <div id="center"><div id="squeeze"><div class="right-corner"><div class="left-corner">
        <?php if ($show_messages && $messages): print $messages; endif; ?>
        <div class='landingwords weevetext'>
          <div class='landingnumber'><div>1</div></div>discover projects
          <div class='landingspace'></div>
          <div class='landingnumber'><div>2</div></div>fund
          <div class='landingspace'></div>
          <div class='landingnumber'><div>3</div></div>be the change
        </div>
        <h2 class="front-slogan">
          Fund and follow your favourite projects.  Be the change in your community.
          <?php if (!user_is_logged_in()): ?>
          <?php print l(t('Sign up'), 'signup', array('attributes' => array('class' => 'weeve-medium-button'))) ?>
          <?php endif; ?>
        </h2>

        <div class="clear-block">
          <?php print $content ?>
        </div>
      </div>
    </div>
            </div></div></div></div>
  <?php print $closure ?>
</body>

</html>