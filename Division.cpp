#include <iostream>
using namespace std;

int main() {

  int dividend, divisor, result;

  cout << "Enter a whole number that is the dividend: ";
  cin >> dividend;

  cout << "Enter a whole number that is the divisor: "
       << "\n";
  cin >> divisor;

  result = (dividend / divisor);

  double doubleDividend = dividend, doubleDivisor = divisor, doubleResult;

  doubleResult = (doubleDividend / doubleDivisor);

  cout << "The quotient of the integer division is: " << result << "\n";

  cout << "The quotient of the double division is: " << doubleResult << endl;

  return 0;
}
