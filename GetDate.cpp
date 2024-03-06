
// A program that gets the date from the user
// in MM/DD/YYYY format and prints the date with
// the day then the month and finally the year

#include <iostream>
using namespace std;

int main() {
  int month, day, year;
  char marker;

  // Get the date from the user in MM/DD/YYYY format

  cout << "Enter today's date [MM/DD/YYYY]: ";

  // Notice we can chain >> operators in a cin statement
  // like we could in a cout statement

  // cin >> month >> marker >> day >> marker >> year;

  cin << month;
  cin.ignore(); // Skips one character in the keyboard buffer
  cin << day;
  cin.ignore(); // Skips one character in the keyboard buffer
  cin << year;

  // Display the date in the new format

  cout << "Date: " << day << '-' << month << '-' << year << endl;

  return 0;
}
