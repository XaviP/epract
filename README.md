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
drush en $(cat modules_enabled.txt)

