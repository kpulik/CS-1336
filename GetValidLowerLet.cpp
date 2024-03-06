#include <iostream>
using namespace std;

int main() {
  char inChar;

  // getting a lowercase letter from the user

  cout << "Enter a lowercase letter: ";
  cin >> inChar;

  // while the character entered is outside the range of lowercase letter

  while (inChar < 'a' || inChar > 'z') {
    cout << "\nError, you entered: " << inChar << endl;

    // read the 2nd and subsequent letters entered (if any)

    cout << "Enter a lowercase letter: ";
    cin >> inChar;
  }

  cout << "\nFinally, got a lowercase letter: " << inChar << endl;
}
