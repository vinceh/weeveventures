<?php

/**
 * Implementation of hook_ckeditor_profile_defaults().
 */
function weeve_feature_ckeditor_profile_defaults() {
  $data = array(
    'Advanced' => array(
      'name' => 'Advanced',
      'settings' => array(
        'allow_user_conf' => 'f',
        'min_rows' => 1,
        'excl_mode' => 0,
        'filebrowser' => 'ckfinder',
        'quickupload' => 't',
        'excl' => '',
        'simple_incl' => '',
        'ss' => '2',
        'filters' => array(
          'filter/0' => 1,
        ),
        'default' => 't',
        'show_toggle' => 't',
        'popup' => 'f',
        'skin' => 'kama',
        'toolbar' => '
[
    [\'Source\'],
    [\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\',\'-\',\'SpellChecker\', \'Scayt\'],
    [\'Undo\',\'Redo\',\'Find\',\'Replace\',\'-\',\'SelectAll\',\'RemoveFormat\'],
    [\'Image\',\'Flash\',\'Table\',\'HorizontalRule\',\'Smiley\',\'SpecialChar\',\'Iframe\'],
    [\'Maximize\', \'ShowBlocks\'],
    \'/\',
    [\'Format\'],
    [\'Bold\',\'Italic\',\'Underline\',\'Strike\',\'-\',\'Subscript\',\'Superscript\'],
    [\'NumberedList\',\'BulletedList\',\'-\',\'Outdent\',\'Indent\',\'Blockquote\',\'CreateDiv\'],
    [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'JustifyBlock\',\'-\',\'BidiRtl\',\'BidiLtr\'],
    [\'Link\',\'Unlink\',\'Anchor\',\'Linkit\',\'LinkToNode\',\'LinkToMenu\'],
    [\'DrupalBreak\']
]
      ',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'format_source' => 't',
        'format_output' => 't',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
          ),
        ),
        'css_mode' => 'theme',
        'css_path' => '',
        'user_choose' => 'f',
        'show_fieldnamehint' => 't',
        'ckeditor_load_method' => 'ckeditor.js',
        'ckeditor_load_time_out' => 0,
        'scayt_autoStartup' => 'f',
        'excl_regex' => '',
        'simple_incl_regex' => '',
      ),
      'roles' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'excl_mode' => 0,
        'excl' => 'admin/user/settings.edit-user-mail-*
*.edit-pages
*.edit-pathauto-ignore-words
*.edit-recipients
*.edit-reply
*.edit-description
*.edit-synonyms
*.edit-img-assist-textareas
*.edit-img-assist-paths
*.edit-nodewords-description
*.edit-nodewords-description-value
admin/content/nodewords/global*
*.edit-relatedlinks-fieldset-relatedlinks
*.edit-allowed-values-php
*.edit-allowed-values
*.edit-update-notify-emails
*.edit-googleanalytics-*
*.edit-piwik-*
*.edit-feedburner-useragents
*@*.edit-webform-*
webform@*.edit-extra-items
admin/*/logintoboggan
admin/settings/actions/configure/*
*.edit-target
*.edit-wysiwyg-filter-*
admin/build/views*
',
        'simple_incl_mode' => 1,
        'simple_incl' => '*.edit-signature
admin/settings/site-information.*
admin/settings/site-maintenance.*
*.edit-page-help
*.edit-user-registration-help
*.edit-user-picture-guidelines
',
        'ckeditor_path' => '%m/ckeditor',
        'license_name' => '',
        'license_key' => '',
        'excl_regex' => '#(?:^.*:.*@admin/user/settings\\.edit\\-user\\-mail\\-.*$)|(?:^.*:.*@.*\\.edit\\-pages$)|(?:^.*:.*@.*\\.edit\\-pathauto\\-ignore\\-words$)|(?:^.*:.*@.*\\.edit\\-recipients$)|(?:^.*:.*@.*\\.edit\\-reply$)|(?:^.*:.*@.*\\.edit\\-description$)|(?:^.*:.*@.*\\.edit\\-synonyms$)|(?:^.*:.*@.*\\.edit\\-img\\-assist\\-textareas$)|(?:^.*:.*@.*\\.edit\\-img\\-assist\\-paths$)|(?:^.*:.*@.*\\.edit\\-nodewords\\-description$)|(?:^.*:.*@.*\\.edit\\-nodewords\\-description\\-value$)|(?:^.*:.*@admin/content/nodewords/global.*\\..*$)|(?:^.*:.*@.*\\.edit\\-relatedlinks\\-fieldset\\-relatedlinks$)|(?:^.*:.*@.*\\.edit\\-allowed\\-values\\-php$)|(?:^.*:.*@.*\\.edit\\-allowed\\-values$)|(?:^.*:.*@.*\\.edit\\-update\\-notify\\-emails$)|(?:^.*:.*@.*\\.edit\\-googleanalytics\\-.*$)|(?:^.*:.*@.*\\.edit\\-piwik\\-.*$)|(?:^.*:.*@.*\\.edit\\-feedburner\\-useragents$)|(?:^.*:.*@.*\\.edit\\-webform\\-.*$)|(?:^.*:webform@.*\\.edit\\-extra\\-items$)|(?:^.*:.*@admin/.*/logintoboggan\\..*$)|(?:^.*:.*@admin/settings/actions/configure/.*\\..*$)|(?:^.*:.*@.*\\.edit\\-target$)|(?:^.*:.*@.*\\.edit\\-wysiwyg\\-filter\\-.*$)|(?:^.*:.*@admin/build/views.*\\..*$)#',
        'simple_incl_regex' => '#(?:^.*:.*@.*\\.edit\\-signature$)|(?:^.*:.*@admin/settings/site\\-information\\..*$)|(?:^.*:.*@admin/settings/site\\-maintenance\\..*$)|(?:^.*:.*@.*\\.edit\\-page\\-help$)|(?:^.*:.*@.*\\.edit\\-user\\-registration\\-help$)|(?:^.*:.*@.*\\.edit\\-user\\-picture\\-guidelines$)#',
      ),
      'roles' => array(),
    ),
    'Default' => array(
      'name' => 'Default',
      'settings' => array(
        'allow_user_conf' => 'f',
        'min_rows' => 1,
        'excl_mode' => 0,
        'filebrowser' => 'ckfinder',
        'quickupload' => 't',
        'excl' => '',
        'simple_incl' => '',
        'ss' => '2',
        'filters' => array(
          'filter/0' => 1,
        ),
        'default' => 't',
        'show_toggle' => 't',
        'popup' => 'f',
        'skin' => 'kama',
        'toolbar' => '
[
    [ \'Format\', \'Bold\', \'Italic\', \'-\', \'NumberedList\',\'BulletedList\', \'-\', \'Link\', \'Unlink\', \'Image\' ]
]
      ',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'format_source' => 't',
        'format_output' => 't',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
          ),
        ),
        'css_mode' => 'theme',
        'css_path' => '',
        'user_choose' => 'f',
        'show_fieldnamehint' => 't',
        'ckeditor_load_method' => 'ckeditor.js',
        'ckeditor_load_time_out' => 0,
        'scayt_autoStartup' => 'f',
        'excl_regex' => '',
        'simple_incl_regex' => '',
      ),
      'roles' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
    'npo_project' => array(
      'name' => 'npo_project',
      'settings' => array(
        'allow_user_conf' => 'f',
        'filters' => array(
          'currency_api/0' => 0,
          'eminline/0' => 1,
          'filter/3' => 0,
          'filter/0' => 1,
        ),
        'ss' => '2',
        'min_rows' => '1',
        'excl_mode' => '1',
        'excl' => 'node/add/project/*.edit-body
node/add/project-update*.edit-body
project/*/edit*.edit-body
account/change.edit-bio
account/change.edit-about
weeve:project@*.edit-body
weeve:project_update@*.edit-body',
        'simple_incl' => '',
        'default' => 't',
        'show_toggle' => 't',
        'popup' => 'f',
        'skin' => 'kama',
        'uicolor' => 'default',
        'uicolor_textarea' => '<p>
	Click the <strong>UI Color Picker</strong> button to set your color preferences.</p>
',
        'uicolor_user' => 'default',
        'toolbar' => '[
    [\'Bold\',\'Underline\',\'Italic\',\'Subscript\',\'Superscript\',\'Strike\',\'NumberedList\',\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'JustifyBlock\',\'Link\',\'Unlink\',\'Image\',\'BulletedList\',\'Source\',\'Undo\',\'Redo\',\'Styles\',\'Format\',\'Font\',\'FontSize\',\'BGColor\',\'TextColor\',\'Blockquote\',\'PasteFromWord\',\'MediaEmbed\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/npo_projects/%u/',
        'UserFilesAbsolutePath' => '%d%b%f/npo_projects/%u/',
        'ckeditor_load_method' => 'ckeditor.js',
        'ckeditor_load_time_out' => '0',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 't',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'autogrow' => array(
            'name' => 'autogrow',
            'desc' => 'Auto Grow plugin',
            'path' => '%base_path%%editor_path%plugins/autogrow/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%base_path%%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'mediaembed' => array(
            'name' => 'mediaembed',
            'desc' => 'Plugin for inserting Drupal embeded media',
            'path' => '%base_path%%plugin_dir%mediaembed/',
            'buttons' => array(
              'MediaEmbed' => array(
                'label' => 'MediaEmbed',
                'icon' => 'images/icon.png',
              ),
            ),
            'default' => 'f',
          ),
          'tableresize' => array(
            'name' => 'tableresize',
            'desc' => 'Table Resize plugin',
            'path' => '%base_path%%editor_path%plugins/tableresize/',
            'buttons' => FALSE,
            'default' => 't',
          ),
        ),
        'excl_regex' => '#(?:^.*:.*@node/add/project/.*\\.edit\\-body$)|(?:^.*:.*@node/add/project\\-update.*\\.edit\\-body$)|(?:^.*:.*@project/.*/edit.*\\.edit\\-body$)|(?:^.*:.*@account/change\\.edit\\-bio$)|(?:^.*:.*@account/change\\.edit\\-about$)|(?:^weeve:project@.*\\.edit\\-body$)|(?:^weeve:project_update@.*\\.edit\\-body$)#',
        'simple_incl_regex' => '',
      ),
      'roles' => array(
        'npo' => 'npo',
        'admin' => 'admin',
      ),
    ),
  );
  return $data;
}
