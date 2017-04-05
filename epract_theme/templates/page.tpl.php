<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<?php global $user; ?>

<div class="pre-header">
  <div class="inside-pre-header">
    <ul class="pre-header-social-network">
      <li class="pre-header-social-network-item">
        <a target="_blank" href="http://www.twitter.com/Inst_Donabedian">
          <img title="" alt="" src="/sites/all/themes/epract_theme/images/ico_twitter.png">
        </a>
      </li>
      <li class="pre-header-social-network-item">
        <a target="_blank" href="https://www.facebook.com/Instituto-Universitario-Avedis-Donabedian-1405720333037718/">
          <img title="" alt="" src="/sites/all/themes/epract_theme/images/ico_facebook.png">
        </a>
      </li>
      <li class="pre-header-social-network-item">
        <a target="_blank" href="https://plus.google.com/u/0/b/111706285138318190172/111706285138318190172/posts">
          <img title="" alt="" src="/sites/all/themes/epract_theme/images/ico_google.png">
        </a>
      </li>
      <li class="pre-header-social-network-item">
        <a target="_blank" href="https://www.linkedin.com/in/fundacionavedisdonabedian">
          <img title="" alt="" src="/sites/all/themes/epract_theme/images/ico_linkedin.png">
        </a>
      </li>
      <li class="pre-header-social-network-item">
        <a target="_blank" href="https://www.youtube.com/user/INSTITUTOAVEDIS">
          <img title="" alt="" src="/sites/all/themes/epract_theme/images/ico_youtube.png">
        </a>
      </li>
    </ul>
  </div>  
</div>

<div class="wrapper-logos-avedis-epract">
  <div class="logos-avedis-epract">
  <div class="logo-avedis">
    <a href="http://www.fadq.org" target="_blank" title="Avedis Donavedian" class="header__logo">
      <img src="/sites/all/themes/epract_theme/images/logo-ok3.png" alt="Avedis Donavedian" class="header__logo-image" />
    </a>
  </div>
  <div class="logo-epract">
    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo">
      <img src="/sites/all/themes/epract_theme/images/logo-epract.png" alt="<?php print t('Home'); ?>" class="header__logo-image" />
    </a>
  </div>
  </div>
</div>

<div id="page">

  <header class="header" id="header" role="banner">

    <?php print render($page['header']); ?>
    
    <?php if (isset($user->roles[4]) && ($user->roles[4] == 'editor')): ?>
      <?php print render($tabs); ?>
    <?php endif; ?>
    
    <?php if (isset($imagen_cabecera)): ?>
      <div class="post-header-imagen-cabecera">
        <?php print render($imagen_cabecera); ?>
      </div>
    <?php endif; ?>
    
    <?php print $messages; ?>

  </header>

  <div id="main">

    <div id="content" class="column" role="main">
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>



    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_second; ?>
      </aside>
    <?php endif; ?>

  </div>

  <div class="footer-wrapper">
    <div class="pre-footer">
      <?php print $breadcrumb; ?>
      <div class="aviso-legal-y-copyright">
        <a class="aviso-legal" href="/contact">Buzón de sugerencias</a>
        <span>© 2016</span>
      </div>
    </div>

    <?php print render($page['footer']); ?>
  </div>

</div>

<?php print render($page['bottom']); ?>


