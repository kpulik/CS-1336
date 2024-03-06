#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  int roll;

  // This call to the time function returns the number of seconds elapsed since
  // midnight Janurary the 1st 1970

  unsigned int seed = time(0);

  srand(seed);

  // Role 3 times and display the value's rolled

  roll = rand() % 6 + 1;
  cout << "Roll 1 = " << roll << endl;

  roll = rand() % 6 + 1;
  cout << "Roll 2 = " << roll << endl;

  roll = rand() % 6 + 1;
  cout << "Roll 3 = " << roll << endl;

  return 0;
}
