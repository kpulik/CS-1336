// A multi-function program that reads three student scores and
// determines both the average of the scores and the grade earned in the course
// based on the rules given

#include <iomanip>
#include <iostream>
using namespace std;

double average(int student1, int student2, int student3);
char getLetterGrade(double averageDisplay, int student3);
bool getScore(int &student1, int &student2, int &student3);

int main() {

  int student1, student2, student3;

  bool validData;
  validData = getScore(student1, student2, student3);

  double averageDisplay;
  averageDisplay = average(student1, student2, student3);

  char letterGrade;
  letterGrade = getLetterGrade(averageDisplay, student3);

  // displays the average and grade if the data is valid

  if (validData) {
    cout << fixed << setprecision(1);
    cout << "Course Average: " << averageDisplay << endl;
    cout << "Grade: " << letterGrade << endl;
  }

  return 0;
}

double average(int student1, int student2, int student3) {
  // calculating the average score

  double averageScore = (student1 + student2 + student3) / 3.0;

  return (averageScore);
}

char getLetterGrade(double averageDisplay, int student3) {
  char letter;

  if (averageDisplay >= 90) {
    letter = 'A';
  } else if (averageDisplay >= 80 && averageDisplay < 90 && student3 >= 95) {
    letter = 'A';
  } else if (averageDisplay >= 80 && averageDisplay < 90 && student3 < 95) {
    letter = 'B';
  } else if (averageDisplay >= 70 && averageDisplay < 80 && student3 >= 85) {
    letter = 'B';
  } else if (averageDisplay >= 70 && averageDisplay < 80 && student3 < 85) {
    letter = 'C';
  } else if (averageDisplay >= 60 && averageDisplay < 70 && student3 >= 75) {
    letter = 'C';
  } else if (averageDisplay >= 60 && averageDisplay < 70 && student3 < 85) {
    letter = 'D';
  } else if (averageDisplay < 70 && student3 >= 70) {
    letter = 'D';
  } else {
    letter = 'F';
  }
  return (letter);
}

bool getScore(int &student1, int &student2, int &student3) {

  bool validScore = true;

  // prompts the user for the student's test score

  cout << "Enter student 1 test score:";

  // assigning the input to variable

  cin >> student1;

  // testing if the student's test score is valid

  if (student1 < 0 || student1 > 100) {
    // Display invalid score message

    cout << "invalid, valid score range is 0 through 100" << endl;
    validScore = false;
  } else {
    // prompts the user for the student's test score

    cout << "Enter student 2 test score:";

    // assigns the input to the variable

    cin >> student2;

    // Test if student score is valid

    if (student2 < 0 || student2 > 100) {
      // displays the invalid score message

      cout << "invalid, valid score range is 0 through 100" << endl;
      validScore = false;
    } else {
      // prompts the user for the student's test score

      cout << "Enter student 3 test score:";

      // assigns the input to the variable

      cin >> student3;

      // tests if the student's score is valid

      if (student3 < 0 || student3 > 100) {
        // displays invalid score message

        cout << "invalid, valid score range is 0 through 100" << endl;
        validScore = false;
      }
    }
  }
  return validScore;
}
