// A program that takes an ordered pair of the form (par, strokes) and scores
// the hole by displaying one of the appropriate golf terms.
#include <iostream>
using namespace std;

int main() {

  int par, strokes;
  bool ValidPar, ValidStrokes;

  // Extracting the par and strokes values from the input
  cout << "Enter the par for the hole and the strokes taken in the form (par, "
          "strokes): ";
  cin.ignore();
  cin >> par;
  cin.ignore();
  cin.ignore();
  cin >> strokes;
  cin.ignore();

  ValidPar = true;
  ValidStrokes = true;

  // Making sure only the correct possible values are accepted
  if (par == 3 || par == 4 || par == 5 || par == 6) {
    ValidPar = true;
  } else {
    ValidPar = false;
    cout << "Invalid par";
  }

  // Making sure only the correct possible values are accepted
  if (strokes >= 1) {
    ValidStrokes = true;
  } else {
    ValidStrokes = false;
    cout << "Invalid strokes";
  }

  // Switch statement that only runs if a valid number of pars is entered
  // Then the code checks if a valid number of strokes is inputted and
  // determines what to output
  switch (ValidPar) {
  case true:
    if (ValidStrokes == true) {
      if (par == 3 || par == 4 || par == 5 || par == 6) {
        if (strokes == (par - 1)) {
          cout << "That is a birdie."
               << "\n";
        } else if (strokes == (par - 2)) {
          cout << "That is an eagle."
               << "\n";
        } else if (strokes == (par - 3)) {
          cout << "That is a double eagle."
               << "\n";
        } else if (strokes <= (par - 4)) {
          cout << "Unbelieveable."
               << "\n";
        } else if (strokes == (par + 1)) {
          cout << "That is a bogey."
               << "\n";
        } else if (strokes == (par + 2)) {
          cout << "That is a double bogey."
               << "\n";
        } else if (strokes == (par + 3)) {
          cout << "That is a triple bogey."
               << "\n";
        } else if (strokes >= (par + 4)) {
          cout << "Wah wah."
               << "\n";
        }
      }
      break;
    }
  }
}
