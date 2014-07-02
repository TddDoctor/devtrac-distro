<?php
class DevtracImportsSectors1 extends XMLMigration {

  public function __construct(array $arguments) {
    $this->arguments = $arguments;
    parent::__construct();
    
    $this->description = t('Imports relations of type Implementing organisation role.');
    $this->dependencies = array(
    		'DevtracImportsSectorIcons',
    		'DevtracImportsSectors0',
    );
        
    $items_url = drupal_get_path('module', 'devtrac_imports') . '/data/sectors.xml';
    $this->item_xpath = "/sectors/sector/sector";  // relative to document
    $this->item_ID_xpath = '@code';
    // Do some general administration
    // $this->description = t('Imports relations of type funding organisation role.');

    $fields = array(
        'code', 'code',
        'parent', 'parent',
        'name', 'name',
    );

    $options = array();
   
    $items_class = new MigrateItemsXML($items_url, $this->item_xpath, $this->item_ID_xpath);

    $this->source = new MigrateSourceMultiItems($items_class, $fields);
    $this->destination = new MigrateDestinationTerm('vocabulary_8');

    $this->map = new MigrateSQLMap($this->machineName,
        array(
            'code' => array(
                'type' => 'varchar',
                'length' => 255,
                'not null' => TRUE,
                'description' => 'code',
                'alias' => 'st',
            ),
        ),
        MigrateDestinationTerm::getKeySchema()
    );
    //$sourcemaptable = str_replace('relationorgrolefunding', 'dataactivity', $this->generateMachineName());
    $this->addFieldMapping('field_oecd_code', 'code')->xpath('@code'); //->defaultValue('1');
    $this->addFieldMapping('name', 'name')->xpath('name');
    
    $this->addFieldMapping('parent', 'parent')
      ->xpath('parent::*/@code')
      ->sourceMigration('DevtracImportsSectors0');
    
    $this->addFieldMapping('field_term_icon', 'code')
      ->xpath('@code')
      ->sourceMigration('DevtracImportsSectorIcons');
    $this->addFieldMapping('field_term_icon:file_class')
      ->defaultValue('MigrateFileFid');

  }

}




