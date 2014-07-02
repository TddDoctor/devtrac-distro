<?php
/**
 *Imports codelists for activity data type flag
*/
class DevtracImportsSectors0 extends XMLMigration {
	/**
	 * Call to the class constructor.
	 */
	public function __construct() {
		parent::__construct();
		// Do some general administration.
		$this->description = t('Imports sector Level0.');
		$this->dependencies = array(
				'DevtracImportsSectorIcons',
		);

		// Instantiate the map.
		$fields = array(
				'code' => 'code',
				'name' => 'name',
		);
		$items_url = drupal_get_path('module', 'devtrac_imports') . '/data/sectors.xml';
		$item_xpath = '/sectors/sector';  // relative to document
		$item_ID_xpath = '@code';          // relative to item_xpath
		$this->source = new MigrateSourceXML($items_url, $item_xpath, $item_ID_xpath, $fields);
		$this->destination = new MigrateDestinationTerm('vocabulary_8');
		// Instantiate the map.
		$this->map = new MigrateSQLMap($this->machineName,
				array(
						'code' => array(
								'type' => 'varchar',
								'length' => 255,
								'not null' => TRUE,
								'description' => 'code',
								'alias' => 'c',
						),
				),
				MigrateDestinationTerm::getKeySchema()
		);
		// Instantiate the field mapping.
		$this->addFieldMapping('field_oecd_code', 'code')->xpath('@code');
		$this->addFieldMapping('name', 'name')->xpath('name');
// 		$this->addFieldMapping('field_term_icon', 'code')
// 		  ->xpath('@code')
// 		  ->sourceMigration('DevtracImportsSectorIcons');
// 		$this->addFieldMapping('field_term_icon:file_class')
// 		  ->defaultValue('MigrateFileFid');
	}
}

