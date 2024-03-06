#include <iostream>
using namespace std;

int main() {

  // Define a character variables

  char char1;

  // Get a chracter from the user

  cout << "Enter a character: ";
  cin >> char1;

  // Display the contents of the character variable

  cout << endl;
  cout << "char1 = " << char1 << endl;

  // Add 1 to the contents of the input character and assign the result to char2

  char char2 = char1 + 1;

  cout << endl;
  cout << "char1 = " << char1 << endl << "char2 = " << char2 << endl;

  // Define 2 integer variables

  int num1, num2;

  // Assign the characters to the integer variables

  num1 = char1;
  num2 = char2;

  // Print the characters and the decimal equivalent of their ASCII codes

  cout << "\nchar1 = " << char1 << "\tnum1 = " << num1 << endl;
  cout << "\nchar2 = " << char2 << "\tnum2 = " << num2 << endl;

  cout << endl << ('Z' - 'A') << endl;

  cout << endl << ('A' + 1) << endl;

  return 0;
}
