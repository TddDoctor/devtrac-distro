<?php

use Behat\Behat\Context\ClosuredContextInterface;
use Behat\Behat\Context\TranslatedContextInterface;
use Behat\Behat\Context\BehatContext;
use Behat\Behat\Exception\PendingException;
use Behat\Gherkin\Node\PyStringNode;
use Behat\Gherkin\Node\TableNode;
use Drupal\DrupalExtension\Context\DrupalContext;

//
// Require 3rd-party libraries here:
//
//   require_once 'PHPUnit/Autoload.php';
//   require_once 'PHPUnit/Framework/Assert/Functions.php';
//

/**
 * Features context.
 */
class FeatureContext extends DrupalContext
{
    /**
     * Initializes context.
     * Every scenario gets its own context object.
     *
     * @param array $parameters context parameters (set them up through behat.yml)
     */
    public function __construct(array $parameters)
    {
        // Initialize your context here
    }
    
    /**
     * @Given /^I fill hidden longitude and latitude field with "(?P<arg1>([0-9]+\.[0-9]+))" and "(?P<arg2>([0-9]+\.[0-9]+))"$/
     */
     
    public function iFillHiddenLongitudeAndLatitudeFieldWithPoint2($arg1, $arg2) {
       $this->getSession()->getPage()->find('css','input[name="field_place_lat_long[und][0][geom]"]')->setValue("POINT(" . $arg1 . " " . $arg2 . ")");
            
    }
    
    
    
    
    
    
    
}
