#include <iostream>
#include <string>
using namespace std;

int main() {

  string response = "Sorry, no admittance.";

  int age;

  // Get the age

  cout << "Enter your age: ";
  cin >> age;

  // Test the age

  if (age >= 21) {
    response = "Welcome!";
  }

  // Display the message indicating whether the user can enter or not

  cout << response << endl;

  return 0;
}
