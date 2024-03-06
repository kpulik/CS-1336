#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int fillArray(const double array[], const int maxElems);

// just a driver to test fillArray

int main() {
  double list[100];
  int actualElems = fillArray(list, 100);

  cout << endl;
  cout << "The array contains:\n";

  for (int offset = 0; offset < actualElems; ++offset) {
    cout << list[offset] << endl;
  }
  return 0;
}
