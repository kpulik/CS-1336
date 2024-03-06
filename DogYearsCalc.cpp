// A program that calculates the age of a dog in dog years based off of
// the dog's age in human years and based on its weight

#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  int dogAgeHumanYrs, dogWeight;
  double dogAgeDogYears;

  // getting the dog's age in human years and its weight

  cout << "Enter the dogs age in human years: ";
  cin >> dogAgeHumanYrs;

  cout << "Enter the dogs weight in pounds: ";
  cin >> dogWeight;

  // making the setpercision to 1 decimal place

  cout << fixed << setprecision(1);

  if (dogAgeHumanYrs < 3 or dogAgeHumanYrs > 20) {

    // error message is outputted if the below requirement is not met

    cout << "Invalid age entered.\n";
  } else if (dogWeight <= 0) {

    // calculating the dog's age in dog years using the dog's age in human years
    // and its weight

    cout << "Invalid weight " << dogWeight << " entered.\n";
  } else if (dogWeight < 20 and dogAgeHumanYrs <= 7) {
    dogAgeDogYears = dogAgeHumanYrs * 7.2;

    cout << "\n" << dogAgeDogYears << endl;
  } else if (dogWeight < 20 and dogAgeHumanYrs <= 12) {
    dogAgeDogYears = dogAgeHumanYrs * 6.4;

    cout << "\n" << dogAgeDogYears << endl;
  } else if (dogWeight < 20 and dogAgeHumanYrs <= 20) {
    dogAgeDogYears = dogAgeHumanYrs * 6;

    cout << "\n" << dogAgeDogYears << endl;
  } else if (dogWeight < 50 and dogAgeHumanYrs <= 6) {
    dogAgeDogYears = dogAgeHumanYrs * 7.8;

    cout << "\n" << dogAgeDogYears << endl;
  } else if (dogWeight < 50 and dogAgeHumanYrs <= 9) {
    dogAgeDogYears = dogAgeHumanYrs * 6.8;

    cout << "\n" << dogAgeDogYears << endl;
  } else if (dogWeight < 50 and dogAgeHumanYrs <= 16) {
    dogAgeDogYears = dogAgeHumanYrs * 6.3;

    cout << "\n" << dogAgeDogYears << endl;
  } else if (dogWeight < 120 and dogAgeHumanYrs <= 5) {
    dogAgeDogYears = dogAgeHumanYrs * 9.5;

    cout << "\n" << dogAgeDogYears << endl;
  } else if (dogWeight < 120 and dogAgeHumanYrs <= 7) {
    dogAgeDogYears = dogAgeHumanYrs * 8.4;

    cout << "\n" << dogAgeDogYears << endl;
  } else if (dogWeight < 120 and dogAgeHumanYrs <= 12) {
    dogAgeDogYears = dogAgeHumanYrs * 8.0;

    cout << "\n" << dogAgeDogYears << endl;
  } else if (dogWeight >= 120 and dogAgeHumanYrs <= 3) {
    dogAgeDogYears = dogAgeHumanYrs * 13.0;

    cout << "\n" << dogAgeDogYears << endl;
  } else if (dogWeight >= 120 and dogAgeHumanYrs <= 5) {
    dogAgeDogYears = dogAgeHumanYrs * 11.1;

    cout << "\n" << dogAgeDogYears << endl;
  } else if (dogWeight >= 120 and dogAgeHumanYrs <= 9) {
    dogAgeDogYears = dogAgeHumanYrs * 10.6;

    cout << "\n" << dogAgeDogYears << endl;
  }

  return 0;
}
