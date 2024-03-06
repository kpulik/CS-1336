// A program that gets a whole number, a real number and a character from the
// user and prints them on the screen.

#include <iostream>
using namespace std;

int main() {

  // Define variables for storing a while number, a real number, and a character

  int num;
  double val;
  char char1;

  // Get a whole number from the user and printing it on the screen

  // cout << "Enter a whole number: ";
  // cin >> num;
  // cout << "num = " << num << endl;

  // Get a real number from the user and print it on the screen

  // cout << "Enter a number: ";
  // cin >> val;
  // cout << "val = " << val << endl;

  // Get a character from the user and print it on the screen

  cout << "Enter a character: ";
  cin >> char1;
  cout << "char1 = " << char1 << endl;

  // Get another character from the user and print it on the screen

  cout << "Enter another character: ";
  char1 = cin.get();
  cout << "Hi, " << char1 << "was the second character entered.\n";
}
