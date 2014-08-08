Feature: Login Devtrac Behat Test
  Background: In order to login, i have to be on home/index page

  Scenario: Devtac behatActual login
    Given I am on "/user"
    When I fill in name with "admin"
    And I fill in password with "admin"
    And I press the "Login" button
    Then I should see "FIELD TRIPS" in the "nice-menu-1" region
    And I should see "IMAGES" in the "nice-menu-1" region
    And I should see "ACTION ITEMS" in the "nice-menu-1" region
    And I should see "Open FieldTrips" in the "item-list" region
    And I should see "Team Members" in the "item-list" region
    And I should see "Content" in the "admin-menu" region
    And I should see "Structure" in the "admin-menu" region
    And I should see "People" in the "admin-menu" region
    And I should see "Devtrac 7" in the "admin-menu" region
    And I should see "Modules" in the "admin-menu" region
    And I should see "Configuration" in the "admin-menu" region
    And I should see "Reports" in the "admin-menu" region
    And I should see "Help" in the "admin-menu" region
    And I should see "Admin" in the "admin-menu" region
