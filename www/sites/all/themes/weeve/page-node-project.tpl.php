<?php
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
  <head>
    <?php print $head ?>
    <title><?php print $head_title ?></title>
    <?php print $styles ?>
    <?php print $scripts ?>
    <!--[if lt IE 7]>
      <?php print phptemplate_get_ie_styles(); ?>
    <![endif]-->
  </head>
  <body<?php print phptemplate_body_class($left, $right); ?>>

<!-- Layout -->
  <div id="header-region" class="clear-block">
    <div id="header">
      <div class="site-title"><?= l('<img alt="Weeve" src="'.base_path().'sites/all/themes/weeve/img/logo.png" />', '', array('html' => 'true')); ?></div>
  <?php if ($search_box): ?><div class="block block-theme"><?php print $search_box ?></div><?php endif; ?>
  <?php print $header; ?></div>
  </div>

    <div id="wrapper">
    <div id="container" class="clear-block page-node-project">
      <?php if ($left): ?>
        <div id="sidebar-left" class="sidebar">          
          <?php print $left ?>
        </div>
      <?php endif; ?>

      <div id="center"><div id="squeeze"><div class="right-corner"><div class="left-corner">
          <?php if ($title): print '<h2 class="title">'. $title .'</h2>'; endif; ?>
          <?php if ($node->author): print '<h3 class="author">' . l($node->author->field_npo_name[0]['value'], 'account/' . $node->uid) . '</h3>'; endif; ?>
          <?php if ($show_messages && $messages): print $messages; endif; ?>
          <?php print $help; ?>
          <div class="clear-block">
            <?= $node_menu ?>
            <div class="center-left">
              <?php print $content ?>
            </div>
            <?php if ($content_right): ?>
            <div class="center-right">
              <?php print $content_right ?>
            </div>
            <?php endif; ?>
          </div>
          <?php print $feed_icons ?>
          <div id="footer"><?php print $footer_message . $footer ?></div>
      </div></div></div></div> <!-- /.left-corner, /.right-corner, /#squeeze, /#center -->

      <?php if ($right): ?>
        <div id="sidebar-right" class="sidebar">
          <?php if (!$left && $search_box): ?><div class="block block-theme"><?php print $search_box ?></div><?php endif; ?>
          <?php print $right ?>
        </div>
      <?php endif; ?>

    </div> <!-- /container -->
  </div>
<!-- /layout -->

  <?php print $closure ?>
  </body>
</html>
