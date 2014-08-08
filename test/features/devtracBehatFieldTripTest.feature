Feature: Devtrac Site Behat Create Field Trip Test
  In order to create a field trip, you have to be logged in and have permissions to create a field trip
  Background: In order to create a field trip, you have to be logged in and have permissions to create a field trip
  
  @api
  Scenario: Devtrac Site Behat Check For Field Trip form Test
    Given I am logged in as a user with the "field worker" role
    And I am on "/node/add/fieldtrip"
    Then I should see "Create Field Trip"

  @api
  Scenario: Devtrac Demo User Tries creating new user Test
    Given I am logged in as a user with the "field worker" role
    And I am on "/node/add/fieldtrip"
    When I fill in "Title" with "fieldtitle"
    And I fill in "Purpose " with "1"
    And I fill in "Percentage" with "100"
    And I fill in "field_fieldtrip_start_end_date[und][0][value][date]" with "14/7/2012"
    And I fill in "field_fieldtrip_start_end_date[und][0][value2][date]" with "14/7/2017"
    And I press "Save"
    Then I am on "/fieldtrip/fieldtitle"

  @api
  Scenario: Devtrac Testing for all empty fields cases
    Given I am logged in as a user with the "field worker" role
    And I am on "/node/add/fieldtrip"
    And "fieldtrip" nodes:
    | Title          | Purpose    | Percentage  | field_fieldtrip_start_end_date[und][0][value][date] | field_fieldtrip_start_end_date[und][0][value2][date] | User |
    |                |  1         |    100      |     14/7/2012    |       14/7/2017 | 1 |
    | fieldtriptitle |            |    100      |     14/7/2012    |       14/7/2017 | 1 | 
    | fieldtriptitle |  1         |             |     14/7/2012    |       14/7/2017 | 1 |
    | fieldtriptitle |  1         |    100      |                  |       14/7/2017 | 1 |
    | fieldtriptitle |  1         |    100      |     14/7/2012    |       14/7/2017 | 1 |
    | fieldtriptitle |  1         |    100      |     14/7/2012    |                 | 1 |
    | fieldtriptitle |  1         |    120      |     14/7/2012    |      14/7/2017  |   |
    | fieldtriptitle |  1         |    50       |     14/7/2012    |      14/7/2017  | 1 |
    And I press "Save"
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
