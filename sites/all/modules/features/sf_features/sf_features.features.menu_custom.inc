<?php
/**
 * @file
 * sf_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function sf_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-sf-menu.
  $menus['menu-sf-menu'] = array(
    'menu_name' => 'menu-sf-menu',
    'title' => 'SF Menu',
    'description' => '',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('SF Menu');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');

  return $menus;
}
