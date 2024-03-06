// A program to demonstrate integer and floating-point variables.
// The user is asked to enter a number, we store the number entered in a double
// variable and then assign it to an integer variable. We use the double input
// in an arithemetic calculation and store the result in a double variable and
// an integer variable. We display the values of all variables as output.

#include <iostream>
using namespace std;

int main() {

  // Define two floating-point variables

  double val1, val2;

  // Define two integer variables

  int num1, num2;

  // Get a number from the user

  cout << "Enter a number: ";
  cin >> val1;

  // Assign the value in val1 to the interger variable num1

  num1 = val1;

  // Display the values of val1 and num1

  cout << " \nval1 = " << val1 << endl << "num1 = " << num1 << endl;

  // Do some math with the contents of a double variable

  val2 = val1 * 2.1;
  num2 = val1 * 2.2;

  // Display the values of val2 and num2

  cout << "val2 = " << val2 << endl << "num2 = " << num2 << endl;

  return 0;
}
