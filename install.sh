#!/bin/bash

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
drush block-configure --module=search --delta=form --region=-1 --weight=0 --theme=epract_theme
drush block-configure --module=system --delta=help --region=-1 --weight=0 --theme=epract_theme
drush block-configure --module=system --delta=navigation --region=-1 --weight=0 --theme=epract_theme
drush block-configure --module=system --delta=powered-by --region=-1 --weight=0 --theme=epract_theme
drush block-configure --module=user --delta=login --region=sidebar_second --weight=-1 --theme=epract_theme

