#include <iostream>
using namespace std;

int main() {

  // Define an integer variable

  int int1;

  // Calculate the difference between the characters lowercase a and uppercase A
  // and assign the calculated difference to the integer variable defined in the
  // last task

  int1 = ('a' - 'A');

  // Define two character variables

  char char1, char2;

  // Assign the character lowercase d to the first character variable

  char1 = 'd';

  // Calculate the difference between the first character variable and the
  // integer variable and assign it to the second character variable

  char2 = (char1 - int1);

  // Print the first character variable’s contents followed by a newline

  cout << char1 << "\n";

  // Print the second character variable’s contents followed by a newline

  cout << char2 << "\n";

  // Assign the character uppercase B to the first character variable

  char1 = 'B';

  // Calculate the sum of the first character variable and the integer variable
  // and assign the sum to the second character variable

  char2 = (char1 + int1);

  // Print the first character variable’s contents followed by a newline

  cout << char1 << "\n";

  // Print the integer variable’s contents followed by a newline

  cout << int1 << "\n";

  // Ask the user to enter a character

  cout << "Enter a character: ";

  // Store the character entered in your first character variable

  cin >> char1;

  // Use the static_cast operator to cast the character just stored in the first
  // character variable to an integer and store the result in the integer
  // variable

  int1 = static_cast<int>(char1);

  // Print the first character variable’s contents followed by a newline

  cout << char1 << "\n";

  // Print the integer variable’s contents followed by a newline

  cout << int1 << "\n";

  return 0;
}
