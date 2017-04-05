Installation
------------

```
cd [installation dir]
wget https://raw.githubusercontent.com/XaviP/epract/master/epract_d7.make
drush make --translations=es epract_d7.make
drush site-install standard --account-name=admin --account-pass=admin --db-url=mysql://[user]:[passwd]@localhost/[db] --locale=es --site-name=epract
cd sites/all/modules
git clone https://github.com/XaviP/epract.git
cd epract
cp -r not_module_epract_theme/ ../../themes/
mv ../../themes/not_module_epract_theme ../../themes/epract_theme
drush en $(cat modules_enabled.txt)
drush dis toolbar overlay
drush en zen epract_theme
drush vset theme_default epract_theme
drush dis bartik
drush en epract_retos
drush en epract_custom epract_include_php

