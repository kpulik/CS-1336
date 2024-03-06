#include <iostream>
#include <string>
using namespace std;

int main() {

  string response = "Initializer";

  int age;

  // Get the user's age

  cout << "Enter your age: ";
  cin >> age;

  if (age < 21) {
    response = "Sorry, no admittance.";
  } else {
    response = "Welcome!";
  }

  cout << response << endl;

  return 0;
}
