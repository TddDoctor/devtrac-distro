Feature: Devtrac Behat Create Site Report Test
  Background: In order to create a field trip, you have to be logged, and have an existing site report. 
  There are three types of site reports (1)Site Visit (2)Roadsite Observation (3) Human Interest Story

  @api
  Scenario: Devtrac Behat create Site Visit Field report
    Given I am logged in as a user with the "field worker" role
    When I visit "/node/add/fieldtrip"
    Then I should see "Create Field Trip"
    And "fieldtrip" nodes:
    | Title          | User | Purpose |  Percentage | field_fieldtrip_start_end_date[und][0][value][date] | field_fieldtrip_start_end_date[und][0][value2][date] |      field_fieldtrip_user  |
    | fieldtripTest  | 123456789        | 1                |    100                     |     14/7/2012    |       14/7/2017 | 1 |
    
    When I press the "Save" button
    Then I am on "/fieldtrip/fieldtripTest"

  @api
  Scenario: Devtrac Behat create Site Visit Field report Add Location on Site Visit
    Given I am logged in as a user with the "field worker" role
    And I am on "/fieldtrip/fieldtripTest"
    Then I should see "In Progress"
    And I follow "Add Site Report"
    Then I should see "Site Report Type"
    When I select the radio button "Site Visit"
    And I select "Kampala" from "District"
    And I press the "Submit" button
    Then I should see "Create Location"
    And I fill hidden longitude and latitude field with "32.57240281174459" and "0.3536203279726586"

    And "place" nodes:
    |    Name           |  Location Type | Admin Unit |
    | SiteVisitLocation |  NGO           | Kampala    |

    And I press the "Save" button
    Then I am "/fieldtrips/fieldtripTest"
    
  @api
  Scenario: Devtrac Behat Site Visit check if the forms are empty
    Given I am logged in as a user with the "field worker" role
    And I am on "/fieldtrip/fieldtripTest"
    Then I should see "Create Location"
     And "place" nodes:
    |    Name           |  Location Type | Admin Unit |
    |                   |  NGO           | Kampala    |
    | SiteVisitLocation |                | Kampala    |
    | SiteVisitLocation |  NGO           |            |
    
    And I fill hidden longitude and latitude field with "32.57240281174459" and "0.3536203279726586"
    And I press the "Save" button
    Then I should see "ERROR"



 

 @api
  Scenario: Devtrac Behat create Roadside observation Field report
    Given I am logged in as a user with the "field worker" role
    And I am on "/node/add/fieldtrip"
    Then I should see "Create Field Trip"
    And "fieldtrip" nodes:
    | Title          | User | Purpose |  Percentage | field_fieldtrip_start_end_date[und][0][value][date] | field_fieldtrip_start_end_date[und][0][value2][date] |      field_fieldtrip_user  |
    | fieldtripTest  | 123456789        | 1                |    100                     |     14/7/2012    |       14/7/2017 | 1 |
    
    When I press the "Save" button
    Then I am on "/fieldtrip/fieldtripTest"

  @api
  Scenario: Devtrac Behat create Roadside observation Field report Add Location on Site Visit
    Given I am logged in as a user with the "field worker" role
    And I am on "/fieldtrip/fieldtripTest"
    Then I should see "In Progress"
    And I follow "Add Site Report"
    Then I should see "Site Report Type"
    When I select the radio button "Roadside Observation"
    And I select "Kampala" from "District"
    And I press the "Submit" button
    Then I should see "Create Field Trip Report Item"


    And "ftritem" nodes:
    |    Title of Site Visit              | Admin Unit | Sector                             | Visited on  | Public Summary |   Full Report           |
    |    Roadside Observation             | Kampala    | Action relating to debt category   | 27/6/2014   | public_summary |   This_is_a_full_report |

    And I fill hidden longitude and latitude field with "32.57240281174459" and "0.3536203279726586"
    And I press the "Save" button
    Then I am on "/fieldtrips/fieldtripTest"

  @api
  Scenario: Devtrac Behat Roadside observation check for empty fields on the form
    Given I am logged in as a user with the "field worker" role
    And I am on "/fieldtrip/fieldtripTest"
    Then I should see "In Progress"
    And I follow "Add Site Report"
    Then I should see "Site Report Type"
    When I select the radio button "Roadside Observation"
    And I select "Kampala" from "District"
    And I press the "Submit" button
    Then I should see "Create Field Trip Report Item"

    And "ftritem" nodes:
    |    Title of Site Visit              | Admin Unit | Sector                             | Visited on  | Public Summary |   Full Report           |
    |                                     | Kampala    | Action relating to debt category   | 27/6/2014   | public_summary |   This_is_a_full_report |
    |    Roadside Observation             |            | Action relating to debt category   | 27/6/2014   | public_summary |   This_is_a_full_report |
    |    Roadside Observation             | Kampala    |                                    | 27/6/2014   | public_summary |   This_is_a_full_report |
    |    Roadside Observation             | Kampala    | Action relating to debt category   |             | public_summary |   This_is_a_full_report |
    |    Roadside Observation             | Kampala    | Action relating to debt category   | 27/6/2014   |                |   This_is_a_full_report |
    |    Roadside Observation             | Kampala    | Action relating to debt category   | 27/6/2014   | public_summary |                         |

    And I fill hidden longitude and latitude field with "32.57240281174459" and "0.3536203279726586"
    And I press the "Save" button
    Then I should see "ERROR"





  @api
  Scenario: Devtrac Behat create Roadside Human Interest Story Field report
    Given I am logged in as a user with the "field worker" role
    When I visit "/node/add/fieldtrip"
    Then I should see "Create Field Trip"
    And "fieldtrip" nodes:
    | Title          | User | Purpose |  Percentage | field_fieldtrip_start_end_date[und][0][value][date] | field_fieldtrip_start_end_date[und][0][value2][date] |      field_fieldtrip_user  |
    | fieldtripTest  | 123456789        | 1                |    100                     |     14/7/2012    |       14/7/2017 | 1 |
    
    When I press the "Save" button
    Then I am on "/fieldtrip/fieldtripTest"

  @api
  Scenario: Devtrac Behat create Human Interest Story Field report Add Location on Site Visit
    Given I am logged in as a user with the "field worker" role
    And I am on "/fieldtrip/fieldtripTest"
    Then I should see "In Progress"
    And I follow "Add Site Report"
    Then I should see "Site Report Type"
    When I select the radio button "Roadside Observation"
    And I select "Kampala" from "District"
    And I press the "Submit" button
    Then I should see "Create Location"

    And "place" nodes:
    |    Name                  |  Location Types        |              Admin Unit | 
    |    HumN Interest Story   |   NGO                  | Kampala                 |

    And I fill hidden longitude and latitude field with "32.57240281174459" and "0.3536203279726586"
    And I press the "Save" button
    Then I am on "/fieldtrips/fieldtripTest"

  @api 
  Scenario: Devtrac Behat Test for Human Interest Story Empty Fields on the Form
    Given I am logged in as a user with the "field worker" role
    And I am on "/fieldtrip/fieldtripTest"
    Then I should see "In Progress"
    And I follow "Add Site Report"
    Then I should see "Site Report Type"
    When I select the radio button "Roadside Observation"
    And I select "Kampala" from "District"
    And I press the "Submit" button
    Then I should see "Create Location"

    And "place" nodes:
    |    Name                  |  Location Types        |              Admin Unit | 
    |                          |   NGO                  | Kampala                 |
    |    HumN Interest Story   |                        | Kampala                 |
    |    HumN Interest Story   |   NGO                  |                         |

    And I fill hidden longitude and latitude field with "32.57240281174459" and "0.3536203279726586"

    And I press the "Save" button
    Then I should see "ERROR"

  @api
  Scenario: Remove/de-activate the demo user account
    Given I am logged in with the "administrator" role
    And I am on "/admin/people"
    Then I should see "People"
    And I should see "Update options"
    When I check "user_demo"
    And I select "Block the selected users" from "operation"
    And i press the "Update" button
    Then I should see "The update has been performed."
    When I follow "Sign out"
    Then I am on "/"
    
