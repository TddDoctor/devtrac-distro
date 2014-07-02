<?php
/**
 * @file.
 */
class CountryListJSON extends MigrateListJSON {
	/**
	 * The default implementation assumes the IDs are top-level array elements,
	 * but the array elements are the data items - we need to look inside them
	 * for the IDs.
	 */
	protected function getIDsFromJSON(array $data) {
		$ids = array ();
		foreach ( $data as $item ) {
			$ids [] = $item ['id'];
		}
		return $ids;
	}
}
class CountryItemJSON extends MigrateItemJSON {
	protected $data = array ();
	public function getItem($id) {
		// We cache the parsed JSON at $this->data.
		if (empty ( $this->data )) {
			$data = $this->loadJSONUrl ( $this->itemUrl );
			if (isset ( $data ) && ! empty ( $data )) {
				// Let's index the array by the ID for easy retrieval.
				foreach ( $data as $item ) {
					$this->data [$item->id] = $item;
				}
			} else {
				// Error-handling here....
			}
		}
		// Return the requested item
		if (isset ( $this->data [$id] )) {
			return $this->data [$id];
		} else {
			return NULL;
		}
	}
}

class CountryOutlines extends Migration {
	public function __construct() {
		$this->description = 'Imports country outlines';
		
		parent::__construct ( MigrateGroup::getInstance ( 'json_migration' ) );
		$item_url = getcwd() ."/". drupal_get_path("module", "devtrac7_import_countryoutlines")."/data/countryBoundary.geojson";
		$fields = array (
				'id' => 'id',
				'level' => 'level',
				'formal_en' => 'formal_en',
				'coordinates' => 'coordinates',
				'geo_type' => 'geo_type',
				'iso_a2' => 'iso_a2',
				'continent'=>'continent',
				 
		);
		$this->source = new MigrateSourceList ( new CountryListJSON ( $item_url ), new CountryItemJSON ( $item_url, array () ), $fields );
		$this->destination = new MigrateDestinationTerm ( 'vocabulary_6' );
		// map for the migration
		$this->map = new MigrateSQLMap ( $this->machineName, array (
				'id' => array (
						'type' => 'varchar',
						'length' => 16,
						'not null' => true,
						'description' => 'id',
						'alias' => 'id' 
				) 
		), MigrateDestinationTerm::getKeySchema () );
		
		$this->addFieldMapping ( 'name', 'formal_en' );
		$geo_arguments = array(
				'wkt' => array('source_field' => 'coordinates'),
				'geo_type' => array('source_field', 'geo_type'),
				'input_format' => array('source_field' => 'input_format'),
		);
		$this->addFieldMapping('field_district_geo', 'geo_type')->arguments($geo_arguments);
	}
	public function prepareRow($row) {
		$row->geo_type = drupal_strtolower($row->geometry->type);
		$row->input_format = 'wkt';
		$row->coordinates = $this->setcoordinates($row->geometry);
	}
	public function prepare($entity, $source_row) {
		$entity->name = $source_row->properties->name;
		
		$outlinemaptable = 'countryoutlines';
		
	}
	public function setcoordinates($geometry){
	  $wkt = $geometry->type . ' (';
	  if (isset($geometry->coordinates) && !empty($geometry->coordinates)) {
	    foreach ($geometry->coordinates as $polygon) {
	      $wkt .= '( ';
	      if ($geometry->type == 'Polygon') {
            if (isset($polygon) && !empty($polygon)) {
	          foreach ($polygon as $point) {
	      		$wkt .= $point[0] . ' ' . $point[1] . ', ';
	      	  }
	        }
	      }
	      else {
	      	if (isset($polygon) && !empty($polygon)) {
	      		$wkt .= '( ';
	      		foreach ($polygon as $points) {
	      		  foreach ($points as $point) {
	      		    $wkt .= $point[0] . ' ' . $point[1] . ', ';
	        	  }
	      		}
	            $wkt = substr($wkt, 0, strlen($wkt) - 2);
	      		$wkt .= '), ';
	      	}
	      }
	      $wkt = substr($wkt, 0, strlen($wkt) - 2);
	      $wkt .= '), ';
	  	}
	  }
	  $wkt = substr($wkt, 0, strlen($wkt) - 2);
	  $wkt .= ')';
	 // drupal_set_message($wkt);
	  return $wkt;
	}
}