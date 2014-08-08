Feature: Devtrac Site Behat Admin Test
  In order to login, you must be on the login page
  Background: In order to login, you must be on the login page, to create a demo user, you must have admin rights, in order to log out, you must be logged in

  Scenario: Devtrac Login Test
    Given Iam on "/user"
    When I fill in name with "admin"
    And I fill in password with "admin"
    And I press "Login"
    Then I am at "/users/admin"

  Scenario: Devtrac Complete Admin registation Test
    Given I am logged in as a user with the "administrator" role
    Given I am on "/admin/people/create"
    Then I should see "People"
    Then I should see "Username" field
    Then I should see "E-mail address" field
    Then I should see "Password" field
    Then I should see "Confirm Password" field
    Then I should see "Function" field
    Then I should see "Manager" field
    Then I should see "Department" field
    Then I should see "First Name" field
    Then I should see "Surname" field
    Then I should see "About Me" field
    Then I should see "Create new account" button
    
  Scenario: Devtrac Admin Fill add the remaining details
    Given I am on "/admin/people/create"
    And I am logged in as a user with the "administrator" role
    When I fill in "Username" with "user_demo"
    And I fill in "E-mail address" with "user_demo@mountbatten.net"
    And I fill in "Password" with "user_demo"
    And I fill in "Confirm Password" with "user_demo"
    And I fill in "Function" with "Evaluator"
    And I fill in "Manager" with "AdminTest AdminTest Sir (admin)"
    And I fill in "Department" with "Education"
    And I fill in "First Name" with "User Demo"
    And I check the box "unicef user "
    And I fill in "Surname" with "User Demo Demo"
    And I fill in "About Me" with "Iam a hoax user demo test account"
    And I press "Create new account"
    Then I should be redirected to "/admin/people/create"
   
  # An admin has the rights to create a demo user
   
  Scenario: Devtrac check if form for creating demo user exists
    Given I am on "/admin/people/create"
    And I am logged in as a user with the "administrator" role
    Then I should see "People"
    Then I should see "Username" field
    Then I should see "E-mail address" field
    Then I should see "Password" field
    Then I should see "Confirm Password" field
    Then I should see "Function" field
    Then I should see "Manager" field
    Then I should see "Department" field
    Then I should see "First Name" field
    Then I should see "Surname" field
    Then I should see "About Me" field
    Then I should see "Create new account" button

  Scenario: Devtrac Demo User Creation Test
    Given I am on "/admin/people/create"
    And I am logged in as a user with the "administrator" role
    When I fill in "Username" with "user_demo"
    And I fill in "E-mail address" with "user_demo@mountbatten.net"
    And I fill in "Password" with "user_demo"
    And I fill in "Confirm password" with "user_demo"
    And I fill in "Function" with "Evaluator"
    And I fill in "Manager" with "AdminTest AdminTest Sir (admin)"
    And I fill in "Department" with "Education"
    And I fill in "First Name" with "User Demo"
    And I fill in "Surname" with "User Demo Demo"
    And I fill in "About Me" with "Iam a hoax user demo test account"
    And I press the "Create new account" button
    Then I am at  "/admin/people/create"

   
  Scenario: Devtrac Logout Test
    Given I am logged in as a user with the "administrator" role
    And I press the "Sign Out" button
    Then I am at "/"

