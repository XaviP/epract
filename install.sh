#!/bin/bash

cd sites/all/modules
git clone https://github.com/XaviP/epract.git
cd ../../../
cp -r sites/all/modules/epract/not_module_epract_theme/ sites/all/themes/
mv sites/all/themes/not_module_epract_theme sites/all/themes/epract_theme
drush -y en $(cat sites/all/modules/epract/modules_enabled.txt)
drush -y dis toolbar overlay
drush -y en zen epract_theme
drush -y vset theme_default epract_theme
drush -y dis bartik
drush -y php-eval 'node_access_rebuild()'
drush -y vset date_default_timezone 'Europe/Madrid'
drush -y vset date_first_day 1
drush -y en epract_retos
drush -y en epract_custom epract_include_php
drush cc all 
