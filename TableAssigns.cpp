#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  // Defining all variables

  int n;
  double nFactorial, totalComb, fourFactorial, nMinusFourFactorial, sqrtNum,
      sqrtNumFour, sqrtNumNminusFour, result;

  // Assigning value of π to PI

  const double PI = acos(-1);

  // Getting the number of students from the user and assigning the value to n

  cout << "Enter the number of students: \n";
  cin >> n;
  cout << "\n";

  // Assigning values to use in the upcoming calculations

  sqrtNum = (2 * PI * n);
  sqrtNumFour = (2 * PI * 4);
  sqrtNumNminusFour = (2 * PI * (n - 4));

  // Calculating the factorials of n, 4, and (n - 4)

  nFactorial = ((pow(n, n) / (exp(n))) * sqrt(sqrtNum));

  fourFactorial = ((pow(4, 4) / (exp(4))) * sqrt(sqrtNumFour));

  nMinusFourFactorial =
      ((pow(n - 4, n - 4) / (exp(n - 4))) * sqrt(sqrtNumNminusFour));

  // Calculating the number of students that can be assigned into groups of 4

  totalComb = (nFactorial / (fourFactorial * nMinusFourFactorial));

  result = totalComb;

  // Outputting the results

  cout << "n! is equal to: " << nFactorial << "\n" << endl;

  cout << fixed << setprecision(0);
  cout << result << " students can be assigned into groups of 4 students"
       << endl;

  return 0;
}
