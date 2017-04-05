Installation
------------

```
cd [installation dir]
wget https://raw.githubusercontent.com/XaviP/epract/master/epract_d7.make
drush make --translations=es epract_d7.make
drush -y site-install standard --account-name=admin --account-pass=admin --db-url=mysql://[user]:[passwd]@localhost/[db] --locale=es --site-name=epract
cd sites/all/modules
git clone https://github.com/XaviP/epract.git
cd epract
cp -r not_module_epract_theme/ ../../themes/
mv ../../themes/not_module_epract_theme ../../themes/epract_theme
drush -y en $(cat modules_enabled.txt)
drush -y dis toolbar overlay
drush -y en zen epract_theme
drush -y vset theme_default epract_theme
drush -y dis bartik

drush -y php-eval 'node_access_rebuild()'
drush -y vset date_default_timezone 'Europe/Madrid'
drush -y vset date_first_day 1
sudo chgrp -R www-data ../../../../[installation dir]
# ui: download/install hp5 libraries (https://h5p.org/update-all-content-types)

drush -y en epract_retos
drush -y en epract_custom epract_include_php
drush cc all

# ui: set pattern paths (admin/config/search/path/patterns)
# ui: review blocks

