<div id="page-wrapper"><div id="page">
<div class="header_top">
<div class="header_wrap">
<?php print render($page['header_top']); ?>
	</div>
</div>
<div class="header_mid">
<div class="header_wrap clearfix">
<?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
      </a>
    <?php endif; ?>

    <?php if ($site_name || $site_slogan): ?>
      <div id="name-and-slogan">

        <?php if ($site_name): ?>
          <?php if ($title): ?>
            <div id="site-name">
              <strong>
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span>Women's Health In&nbsp;Women's&nbsp;Hands</span></a>
              </strong>
            </div>
          <?php else: /* Use h1 when the content title is empty */ ?>
            <h1 id="site-name">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span>Women's Health In&nbsp;Women's&nbsp;Hands</span></a>
            </h1>
          <?php endif; ?>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div id="site-slogan">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><?php print $site_slogan; ?></a>
          </div>
        <?php endif; ?>

      </div> <!-- /#name-and-slogan -->
<div class="header_ad fltrt">
<?php print render($page['header_ad']); ?>
</div>
</div>
</div>
<div class="nav">
<div class="header_wrap clearfix">
<?php print render($page['nav_menu']); ?>

<?php if ($page['home_donate_block']): ?>
<div class="home_donate_block">
<?php print render($page['home_donate_block']); ?>
</div>
<?php endif; ?>
</div>
</div>
    <?php endif; ?>
  <?php if ($messages): ?>
    <div id="messages"><div class="section clearfix">
      <?php print $messages; ?>
    </div></div> <!-- /.section, /#messages -->
  <?php endif; ?>

  <div id="main-wrapper" class="clearfix"><div id="main" class="clearfix">
    <div id="content" class="column"><div class="section">
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
	  <div class="title_box clearfix">
        <h1 class="title" id="page-title">
          <?php print $title; ?>
        </h1>
		<div class="title_img"></div>
		</div>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php if ($tabs): ?>
        <div class="tabs">
          <?php print render($tabs); ?>
        </div>
      <?php endif; ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links">
          <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>

    </div></div> <!-- /.section, /#content -->

    <?php if ($page['sidebar_right']): ?>
      <div id="sidebar-right" class="column sidebar"><div class="section">
        <?php print render($page['sidebar_right']); ?>
      </div></div> <!-- /.section, /#sidebar-second -->
    <?php endif; ?>

  </div></div> <!-- /#main, /#main-wrapper -->

  <div class="footer">
  <div class="footer_shad">&nbsp;</div>
  <div class="footer_wrap">
  <div class="footer_top clearfix">
  <?php print render($page['footer']); ?>
  </div>
  <div class="footer_bot clearfix">
  <a href="http://www.ontariochc.org/" class="link_ochc" target="_blank"></a>
  <?php print render($page['footer_bottom']); ?>
<div class="copyright">
&copy; <?php echo date('Y'); ?> Women's Health in Women's Hands. All Rights Reserved.<br>Site by <a href="http://ccistudios.com" target="_blank">CCI Studios</a>
</div>
  
  </div>
  </div>
  </div>
</div></div> <!-- /#page, /#page-wrapper -->
