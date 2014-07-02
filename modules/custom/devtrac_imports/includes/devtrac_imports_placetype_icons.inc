<?php
class DevtracImportsPlacetypeIcons extends DevtracImportsCsvBase  {
  public function __construct($arguments) {
    $this->arguments = $arguments;
    parent::__construct($arguments);
    $this->description = t('Import Departments');
    $columns = array(
      0 => array('name', t('name')),
      1 => array('code', t('code')),
    );
    // TIP: delete ", array('header_rows' => 1)" in the next line, if the CSV-file has NO header-line
    $this->source = new MigrateSourceCSV(DRUPAL_ROOT . '/' . drupal_get_path('module', 'devtrac_imports') . '/data/placetype.csv', $columns, array('header_rows' => 1));
    //$this->destination = new MigrateDestinationUser();
    $this->destination = new MigrateDestinationTerm('vocabulary_4');
    // Instantiate the map.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'code' => array( // this field is used to connect user und profile2
          'type' => 'varchar',
          'length' => 20,
          'not null' => TRUE,
          'description' => t('Image filename') // description never used
        )
      ),
      MigrateDestinationMedia::getKeySchema()
    );

    $this->addFieldMapping('name', 'name')
         ->defaultValue('')
         ->description(t('Name'));
    $this->description = t('Example migration of media images');

    // In the simplest case, just pass the media type.
    $this->destination = new MigrateDestinationMedia('image');

    // The source images are in a local directory - specify the parent.
    $this->addFieldMapping('source_dir')
         ->defaultValue(drupal_get_path('module', 'devtrac_imports') . '/images/oecdicons_png');
    // The 'value' of the media destination is mapped to the source field
    // representing the media itself - in this case, a filename relative to
    // source_dir.
    $this->addFieldMapping('value', 'filename');
         //->xpath('code');
    // Fields on the entity can be mapped in the usual way.
    $this->addFieldMapping('field_image_description', 'description');
         //->xpath('description');

    $this->addFieldMapping('uid')
         ->defaultValue(1);

    $this->addUnmigratedDestinations(array('field_image_description:format',
      'field_image_description:language', 'destination_dir', 'destination_file',
      'file_replace', 'preserve_files', 'timestamp'));
    if (module_exists('path')) {
      $this->addUnmigratedDestinations(array('path'));
    }
  }

  public function prepareRow($row) {
    // Always include this fragment at the beginning of every prepareRow()
    // implementation, so parent classes can ignore rows.
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    $row->filename = $row->code . '.png';
    $fieldmappings = $this->getFieldMappings();
    $source_dir = $fieldmappings['source_dir']->getDefaultvalue();
    $file_full_path = DRUPAL_ROOT . '/' . $source_dir . '/' . $row->filename;
    if(!file_exists($file_full_path)) {
      return FALSE;
    }

    return TRUE;
  }  
}
