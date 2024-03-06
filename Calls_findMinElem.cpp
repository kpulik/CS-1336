#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double smallest;
  array1[3] = {-10, 14, 7};
  smallest = findMinElem(array1, 3);
  cout << "smallest = " << smallest << endl;

  double array2[5] = {23, 21, 10, 17, 2};
  smallest = findMinElem(array2, 5);
  cout << "smallest = " << smallest << endl;

  double array3[8] = {7, 12, 87, -4, 0, 21, 24, -2};
  smallest = findMinElem(array3, 8);
  cout << "smallest = " << smallest << endl;

  return 0;
}

/* a Function that finds and returns the smallest element in an array.
 * Params:
 * array - An array fo doubles
 * numElems - The number of doubles in the array
 * Returns: The double that has the smallest vlaue of the doubles in the array
 */

double findMinElem(const double array[], const int numElems) {
  // Initializing currentMin to the first element

  double currentMin = array[0];

  for (int offset = 1; offset < numElems; ++offset) {
    if (array[offset] < currentMin) {
      currentMin = array[offset];
    }
  }

  return currentMin;
}
