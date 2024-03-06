#include <iostream>
using namespace std;

const double CM_PER_INCH = 2.54;

// A fucntion that converts a length from inches to centimeters
// PARAMS: length - A double containing a length in inches
// RETURNS: The equivalent length in centimeters as a double

double convToCM(double length) {
  length *= CM_PER_INCH;
  return length;
}

int main() {
  double inches;

  cout << "Enter a length in inches: ";
  cin >> inches;

  // Call a function to find the equivalent length in centimeters

  double cent = convToCM(inches);
  cout << inches << " inches = " << cent << " = centimeters.\n";

  return 0;
}
