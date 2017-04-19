Installation
------------

- From the linux shell (drush 8.x.x installed):

```
cd [installation dir]
wget https://raw.githubusercontent.com/XaviP/epract/master/epract_d7.make
drush make --translations=es epract_d7.make
drush site-install standard --account-name=admin --account-pass=admin --db-url=mysql://[user]:[passwd]@localhost/[db] --locale=es --site-name=epract
git clone https://github.com/XaviP/epract.git sites/all/modules/epract
./sites/all/modules/epract/install.sh
sudo chgrp -R www-data ../[installation dir]
```

- From the web interface

1. disable theme registry
2. download/install hp5 libraries (https://h5p.org/update-all-content-types)
3. review blocks
4. set pattern paths (admin/config/search/path/patterns) like:
   `community2/[node:og-group-retos-ref]/[node:title]`

