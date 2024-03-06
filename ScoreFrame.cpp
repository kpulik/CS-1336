// A program that calculates and displays the score for one frame of a game of
// bowling.
#include <iostream>
using namespace std;

int main() {

  int attempt1, attempt2, attempt3, FrameTotalPoints;
  bool ValidNumber1, ValidNumber2;

  // Getting the number of pins knocked down in attempt #1
  cout << "Enter the number of pins knocked down in attempt #1: ";
  cin >> attempt1;

  // an If statement determining whether the number of pins entered is less than
  // or equal to 10 and if 10 pins were knocked down on the first attempt
  if (attempt1 <= 10) {

    ValidNumber1 = true; // If this is true the other if statements will run

    if (attempt1 == 10) {
      cout << "Congratulations you got a strike!\n";
    }
  } else { // if a number greater than 10 was entered for attempt 1 this will
           // output
    ValidNumber1 = false;
    cout << "Error, an invalid number was entered.";
  }

  if (ValidNumber1 == true) {
    // Getting the number of pins knocked down in attempt #2
    cout << "Enter the number of pins knocked down in attempt #2: ";
    cin >> attempt2;

    // an If statement determining whether the number of pins entered for
    // attempt 2 is less than or equal to 10 and if attempt 1 + attempt 2 equals
    // 10
    if (attempt2 <= 10) {

      ValidNumber2 = true; // If this is true the other if statements will run

      if (attempt1 + attempt2 == 10) {
        cout << "Congratulations you got a spare!\n";
      }
    } else { // if a number greater than 10 was entered this will output
      ValidNumber2 = false;
      cout << "Error, an invalid number was entered.";
    }
  }

  if (ValidNumber1 == true && ValidNumber2 == true) {
    cout << "Enter the number of pins knocked down in attempt #3: ";
    cin >> attempt3;

    if (attempt3 <= 10) {
      // blank
    } else { // if a number greater than 10 was entered this will output
      cout << "Error, an invalid number was entered.";
    }
  }

  // Calculating the total frame points and outputting the result
  FrameTotalPoints = attempt1 + attempt2 + attempt3;
  cout << "Frame total = " << FrameTotalPoints << "\n";

  return 0;
}
