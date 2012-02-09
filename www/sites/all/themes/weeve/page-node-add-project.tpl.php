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
  <body class="create-project">

<!-- Layout -->
  <div id="header-region" class="clear-block">
    <div id="header">
      <div class="site-title"><?php print l('<img alt="Weeve" src="'.base_path().'sites/all/themes/weeve/img/logo.png" />', '', array('html' => 'true')); ?></div>
  <?php print $header; ?></div>
  </div>

    <div id="wrapper">
    <div id="container" class="clear-block">

      <div id="center"><div id="squeeze"><div class="right-corner"><div class="left-corner">
          <?php if ($tabs): print '<div id="tabs-wrapper" class="clear-block">'; endif; ?>
          <?php if ($title): print '<h2'. ($tabs ? ' class="with-tabs"' : '') .'>'. $title .'</h2>'; endif; ?>
              <div class="subtitle"><?= t('Fill out the detailed project information and we will review it once more'); ?></div>
              <div class="description"><?= t("We are happy to bring your project on board to Weeve! Please fill out the following information and we will approve it once more before your project goes live. Remember that this is the exact information that users will be able to see, so please make sure it's detailed and complete. Upload media to help convince users to donate and create the visibility that you need to drive the project through!");?></div>
          <?php if ($tabs): print '<ul class="tabs primary">'. $tabs .'</ul></div>'; endif; ?>
          <?php if ($tabs2): print '<ul class="tabs secondary">'. $tabs2 .'</ul>'; endif; ?>
          <?php if ($show_messages && $messages): print $messages; endif; ?>
          <div class="clear-block" id="main-content">
            <h3><?= t('Project Details'); ?></h3>
            <?php print $content ?>
          </div>
          <div class="clear-block">&nbsp;</div>          
          <div id="footer"><?php print $footer_message . $footer ?></div>
      </div></div></div></div> <!-- /.left-corner, /.right-corner, /#squeeze, /#center -->
      

    </div> <!-- /container -->
  </div>
<!-- /layout -->

  <?php print $closure ?>
  </body>
</html>
