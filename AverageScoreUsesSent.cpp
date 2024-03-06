#include <iostream>
using namespace std;

int main() {
  int score;

  cout << "Enter the first test score or -999 to end input: ";
  cin >> score;

  while (-999 != score) {
    cout << "score = " << score << endl;

    cout << "Enter the first test score or -999 to end input: ";
    cin >> score;
  }

  return 0;
}
