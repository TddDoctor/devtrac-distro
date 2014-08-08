@api
Feature: Devtrac Editor creates Question Test
  In order to create a question,
  you have to be logged in as an editor 
  and have the create questionnaire_question permission
  
  Scenario: Editor User accesses Question Form
    Given I am logged in as a user with the "editor" role
    And I am on "/node/add/questionnaire-question"
    Then I should see "Create Question"

  Scenario: Editor User adds a Select Question
    Given I am logged in as a user with the "editor" role
    And I am on "/node/add/questionnaire-question"
    When I fill in "Question " with "Do you like the standard of primary education in Jinja?"
    # And I fill in "taxonomy_vocabulary_1[und]" with "47"
    # And I fill in "field_question_subject[und]" with "494"
    And I fill in "The type of question. " with "select"
    And I fill in "questionnaire_question_options[und][0][value]" with "Yes"
    And I press "Add another item"
    And I fill in "questionnaire_question_options[und][1][value]" with "No"
    And I fill in "Sector" with "12"
    And I press "Save"
    Then I should see "Question Do you like the standard of primary education in Jinja? has been created."

  Scenario: Editor User adds a Checkboxes Question
    Given I am logged in as a user with the "editor" role
    And I am on "/node/add/questionnaire-question"
    When I fill in "Question " with "Do you like the standard of primary education in Kampala?"
    # And I fill in "taxonomy_vocabulary_1[und]" with "47"
    # And I fill in "field_question_subject[und]" with "494"
    And I fill in "The type of question. " with "checkboxes"
    And I fill in "questionnaire_question_options[und][0][value]" with "Yes"
    And I press "Add another item"
    And I fill in "questionnaire_question_options[und][1][value]" with "No"
    And I fill in "Sector" with "12"
    And I press "Save"
    Then I should see "Question Do you like the standard of primary education in Kampala? has been created."


  Scenario: Editor User adds a Radios Question
    Given I am logged in as a user with the "editor" role
    And I am on "/node/add/questionnaire-question"
    When I fill in "Question " with "Do you like the standard of primary education in Rakai?"
    # And I fill in "taxonomy_vocabulary_1[und]" with "47"
    # And I fill in "field_question_subject[und]" with "494"
    And I fill in "The type of question. " with "radios"
    And I fill in "questionnaire_question_options[und][0][value]" with "Yes"
    And I press "Add another item"
    And I fill in "questionnaire_question_options[und][1][value]" with "No"
    And I fill in "Sector" with "12"
    And I press "Save"
    Then I should see "Question Do you like the standard of primary education in Rakai? has been created."

  Scenario: Editor User adds a Number Question
    Given I am logged in as a user with the "editor" role
    And I am on "/node/add/questionnaire-question"
    When I fill in "Question " with "What is the standard number of teachers in a primary school?"
    # And I fill in "taxonomy_vocabulary_1[und]" with "47"
    # And I fill in "field_question_subject[und]" with "494"
    And I fill in "The type of question. " with "number"
    And I fill in "Sector" with "12"
    And I press "Save"
    Then I should see "Question What is the standard number of teachers in a primary school? has been created."

  Scenario: Editor User adds a Message Question
    Given I am logged in as a user with the "editor" role
    And I am on "/node/add/questionnaire-question"
    When I fill in "Question " with "Thank you for filling this questionnaire."
    # And I fill in "taxonomy_vocabulary_1[und]" with "47"
    # And I fill in "field_question_subject[und]" with "494"
    And I fill in "The type of question. " with "message"
    And I fill in "Sector" with "12"
    And I press "Save"
    Then I should see "Question Thank you for filling this questionnaire. has been created."

  Scenario: Editor User edits a question
    Given I am logged in as a user with the "editor" role
    And I am on "/node/add/questionnaire-question"
    When I fill in "Question " with "Do you like the standard of primary education in Jinja?"
    # And I fill in "taxonomy_vocabulary_1[und]" with "47"
    # And I fill in "field_question_subject[und]" with "494"
    And I fill in "The type of question. " with "select"
    And I fill in "questionnaire_question_options[und][0][value]" with "Yes"
    And I press "Add another item"
    And I fill in "questionnaire_question_options[und][1][value]" with "No"
    And I fill in "Sector" with "12"
    And I press "Save"
    And I visit "/question/do-you-standard-primary-education-jinja"
    And I follow "Edit" in the "content" region
    And I fill in "Sector" with "9"
    And I press "Save"
    Then I should see "Question Do you like the standard of primary education in Jinja? has been updated."

  Scenario: Editor User deletes a question
    Given I am logged in as a user with the "editor" role
    And I am on "/node/add/questionnaire-question"
    When I fill in "Question " with "Do you like the standard of primary education in Jinja?"
    # And I fill in "taxonomy_vocabulary_1[und]" with "47"
    # And I fill in "field_question_subject[und]" with "494"
    And I fill in "The type of question. " with "select"
    And I fill in "questionnaire_question_options[und][0][value]" with "Yes"
    And I press "Add another item"
    And I fill in "questionnaire_question_options[und][1][value]" with "No"
    And I fill in "Sector" with "12"
    And I press "Save"
    And I visit "/question/do-you-standard-primary-education-jinja"
    When I click "Edit" in the "content" region
    And I press "Delete"
    And I press "Delete"
    Then I should see "Question Do you like the standard of primary education in Jinja? has been deleted."