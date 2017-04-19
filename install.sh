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
drush vset date_format_short 'd/m/Y - H:i'
drush vset date_format_medium 'D, d/m/Y - H:i'
drush vset date_format_long 'l, j F, Y - H:i'
drush -y en epract_retos
drush -y en epract_custom epract_include_php
drush vset pathauto_node_grupo_con_retos_pattern 'community2/[node:title]'
drush vset pathauto_node_debate_pattern 'community2/[node:og-group-retos-ref]/[node:title]'
drush vset pathauto_node_documento_colaborativo_pattern 'community2/[node:og-group-retos-ref]/[node:title]'
drush vset pathauto_node_h5p_content_pattern 'community2/[node:og-group-retos-ref]/[node:title]'
drush vset pathauto_node_quiz_pattern 'community2/[node:og-group-retos-ref]/[node:title]'
drush vset pathauto_node_recursos_del_grupo_pattern 'community2/[node:og-group-retos-ref]/[node:title]'
drush vset pathauto_node_webform_pattern 'community2/[node:og-group-retos-ref]/[node:title]'
drush -y dl drush_extras
drush block-configure --module=search --delta=form --region=-1 --weight=0 --theme=epract_theme
drush block-configure --module=system --delta=help --region=-1 --weight=0 --theme=epract_theme
drush block-configure --module=system --delta=navigation --region=-1 --weight=0 --theme=epract_theme
drush block-configure --module=system --delta=powered-by --region=-1 --weight=0 --theme=epract_theme
drush block-configure --module=user --delta=login --region=sidebar_second --weight=-1 --theme=epract_theme
drush cc all

