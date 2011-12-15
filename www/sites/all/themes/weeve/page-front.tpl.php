<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<html>
<head>
	<script src="http://ajax.googleapis.com/ajax/libs/jquery/1.7.1/jquery.min.js" type="text/javascript"></script>
  <title><?php print $head_title ?></title>
	<?php print $styles ?>
	<?php print $scripts ?>
</head>

<body>
	<div id="header-region" class="clear-block">
    <div id="header"><?php print $header; ?></div>
  </div>

    <div id="wrapper">
      <div id="container" class="clear-block">
        <div id="center"><div id="squeeze"><div class="right-corner"><div class="left-corner">
        <div class='landingwords weevetext'>
          <div class='landingnumber'><div>1</div></div>discover projects
          <div class='landingspace'></div>
          <div class='landingnumber'><div>2</div></div>fund
          <div class='landingspace'></div>

          <div class='landingnumber'><div>3</div></div>earn rewards
        </div>
        <h2 class="front-slogan">
          Fund and follow your favourite projects.  Be the change in your community.

          <a href="/signup" class="weeve-medium-button"><?= t('Sign up') ?></a>
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