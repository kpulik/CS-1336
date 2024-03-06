#include <iostream>
using namespace std;

const double CM_PER_INCH = 2.54;

// A function that finds and displays the length in centimeters
// equivalent to the length received as an argument which is in inches
// PARAMS:
//  length - A double containing a length in inches
// RETURNS:

void findCM(double length) {
  cout << length << " inches = ";
  length *= CM_PER_INCH;
  cout << length << " centimeters\n";
  return;
}

int main() {
  double inches;

  // Get a length in inches from the user

  cout << "Enter a length in inches: ";
  cin >> inches;

  // Call a function to find the equivalent length in centimeters

  findCM(inches);
  { cout << "inches = " << inches << endl; }

  int length = 5;

  findCM(length);

  cout << "ge=";

  return 0;
}
