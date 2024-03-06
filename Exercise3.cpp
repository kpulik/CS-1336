// A program that calculates and displays the volume of a sphere given its
// radius which is entered by the user.

// For Exercise #3
// Modify this code so that the volume is only calculated and displayed when
// a valid radius and when the radius isn't valid an error message is displayed

#include <cmath>
#include <iostream>
using namespace std;

const double PI = acos(-1);

int main() {

  double radius, volume;

  cout << "Enter the radius of a sphere: ";
  cin >> radius;
  cout << endl;

  // Calculate the volume of a sphere

  volume = 4 / 3 * PI * pow(radius, 3);

  // Output the volume

  cout << "\nA sphere with radius of " << radius << " has a volume of "
       << volume << "\n";

  return 0;
}
