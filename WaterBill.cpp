// A program that calculates the price of a water bill using user-inputted
// values.

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

const double BASE_CHARGE = 40;

int main() {

  double unpaidBalance, usageCharge, amountDue, gallonsUsedOver1000, lateFee;
  int previousReading, currentReading, totalGallonsUsed, width;

  // getting user input to assign to variables

  cout << "Enter unpaid balance: ";
  cin >> unpaidBalance;

  cout << "Enter the previous meter reading: ";
  cin >> previousReading;

  cout << "Enter the current meter reading: ";
  cin >> currentReading;

  // calculations

  totalGallonsUsed = currentReading - previousReading;

  gallonsUsedOver1000 = totalGallonsUsed / 1000.00;

  usageCharge = gallonsUsedOver1000 * 1.89;

  amountDue = unpaidBalance + BASE_CHARGE + usageCharge;

  width = 2;

  // calculating the number of spaces needed after the word "gallons"

  if (totalGallonsUsed <= 9) {
    width = 7;
  } else if (totalGallonsUsed <= 99) {
    width = 6;
  } else if (totalGallonsUsed <= 999) {
    width = 5;
  } else if (totalGallonsUsed <= 9999) {
    width = 4;
  } else if (totalGallonsUsed <= 99999) {
    width = 3;
  }

  // setting the setprecision to 2 decimal places

  cout << fixed;
  cout << setprecision(2);
  cout << showpoint;

  // outputting the calculations to the screen

  cout << "\n"
       << setw(31) << left << "Unpaid Balance: "
       << "$" << setw(8) << right << unpaidBalance << endl;
  cout << setw(31) << left << "Base Charge: "
       << "$" << setw(8) << right << BASE_CHARGE << endl;
  cout << left << "Usage Charge (" << totalGallonsUsed << " gallons)"
       << setw(width) << ": "
       << "$" << setw(8) << right << usageCharge << endl;

  // late fee if statement

  if (unpaidBalance > 20) {
    lateFee = 10;

    amountDue += lateFee;

    cout << setw(31) << left << "Late fee: "
         << "$" << setw(8) << right << lateFee << endl;
  }

  cout << setw(31) << left << "Amount Due: "
       << "$" << setw(8) << right << amountDue << endl;

  return 0;
}
