#include <iostream>
using namespace std;

int main() {
  int score; // To hold a numeric test score

  // Get the numeric test score

  cout << "Enter your numeric test score and I will tell you the letter grade "
          "you earned: ";
  cin >> score;

  if (score < 0 || score > 100) {
    cout << "\nInvalid score " << score << " entered.\n";
    cout << "Valid scores are in the range 0 through 100 inclusive.\n";
  }

  else {
    // Determine the letter grade
    if (score >= 90) {
      cout << "Your grade is A.\n";
    } else if (score >= 80) {
      cout << "Your grade is B.\n";
    } else if (score >= 70) {
      cout << "Your grade is C.\n";
    } else if (score >= 60) {
      cout << "Your grade is D.\n";
    } else if (score >= 50) {
      cout << "Your grade is F.\n";
    }
  }
  return 0;
}
