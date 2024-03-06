#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

void useMathFunctions(double);

int nextChar;
double usrArray[101], newArray[101];

int main() {
  cout << "Enter up to 100 numbers and end with a negative number: ";
  do {
    nextChar = cin.get(usrArray);
  } while (nextChar != ', ' && nextChar != '-');
}

int useMathFunctions(double usrArray[101]) {}
