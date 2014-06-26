api = 2
core = 7.x
includes[] = drupal-org-core.make

projects[devtrac_distro][type] = "profile"
projects[devtrac_distro][download][type] = "git"
projects[devtrac_distro][download][url] = "https://github.com/TddDoctor/devtrac-distro"
projects[devtrac_distro][download][branch] = "master"

projects[travis-solr][type] = "profile"
projects[travis-solr][download][type] = "git"
projects[travis-solr][download][url] = "https://github.com/moliware/travis-solr"
projects[travis-solr][download][branch] = "master"
