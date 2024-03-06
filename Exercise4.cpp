#include <iostream>
using namespace std;

// TO DO:
// 1) Add the code nessesary to perform the remaining conversions and display
// the result 2) Add code to display the message
int main() {
  int convType;

  cout << "\t\tTemperature converter\n\n";
  cout << "\t1 - Convert from Fahrenheit to Celsius\n";
  cout << "\t2 - Convert from Celsius to Fahrenheit\n";
  cout << "\nEnter the number of your selection: ";
  cin >> convType;

  double cels, fahr;

  // If conversion is Fahr to Cels

  if (1 == convType) {
    cout << "Enter the Fahrenheit temperature: ";
    cin >> fahr;
    cels = 5.0 / 9.0 * (fahr - 32);
    cout << "\nThe converted temperature is " << cels << " degrees Celsius.\n";
  } else if (2 == convType) {
    cout << "Enter the Celsius temperature: ";
    cin >> cels;
    fahr = 9.0 / 5.0 * cels + 32;
    cout << "\nThe converted temperature is " << fahr
         << " degrees Fahrenheit.\n";
  } else {
    cout << "\nInvalid menu selection.\n";
  }

  return 0;
}
