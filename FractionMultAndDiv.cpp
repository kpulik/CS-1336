#include <cmath>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

void multiplicationQuiz(int);
void divisionQuiz(int);
void gcd(int, int);
void RandNumGen(int);

int main() {

  // setting up the random number generator

  unsigned int seed;
  // seed = time(0); // This code should not be a comment when testing the code
  cin >> seed; // This code should not be a comment when submitting
  cin.ignore();
  srand(seed);

  int MenuNum, correctAns, i = 0;
  bool ValidNum;

  cout << "\tFraction Quizlet Menu\n\n";
  cout << "\t1 - Multiplication quiz\n";
  cout << "\t2 - Division quiz\n";
  cout << "\t3 - Quit program\n\n";
  cout << "Enter the number of your choice: ";
  cin >> MenuNum;

  if (MenuNum == 1 || 2 || 3) {
    ValidNum = true;
  } else {
    ValidNum = false;
    cout << "\nInvalid menu choice entered.\n\n";
    cout << "Enter the number of your choice: ";
    cin >> MenuNum;
  }

  if (ValidNum == true && MenuNum == 1) {
    int multiplicationQuiz();
  } else if (ValidNum == true && MenuNum == 2) {
    int divisionQuiz();
  } else if (ValidNum == true && MenuNum == 3) {
    return 0;
  }
  int gcd();
}

void multiplicationQuiz(int RandNumGen()) {

  int RandOne, RandTwo, RandThree, RandFour, nextChar, answer, userAns,
      correctAns, i = 0;

  while (i <= 5) {
    cout << "Question #1: What is the result of the following?\n\n";
    cout << "  " << RandNumGen() << "       ";
    cin >> RandOne;
    cout << "  " << RandNumGen() << "       \n";
    cin >> RandTwo;
    cout << "----- * -----";
    cout << "  " << RandNumGen() << "       ";
    cin >> RandThree;
    cout << "  " << RandNumGen() << "       \n";
    cin >> RandFour;
    cout << "Enter the answer in the form x / y or just x: ";
    do {
      nextChar = cin.get();
    } while (nextChar != '/' && nextChar != '\n');
    answer = ((RandOne / RandTwo) * (RandThree / RandFour));
    if (userAns != answer) {
      cout << "\nThat is incorrect.\n\n";
      cout << "  " << RandOne << "       ";
      cout << "  " << RandTwo << "       \n";
      cout << "----- * -----";
      cout << "  " << RandThree << "       ";
      cout << "  " << RandFour << "       \n";
      cout << "  "
           << " = " << answer << "\n";
    } else if (userAns == answer) {
      cout << "That is correct!\n";
      correctAns += 1;
    }
    i = ++i;
  }
  if (correctAns == 1 && correctAns <= 5) {
    cout << "You should pay attention in class more.";
  } else if (correctAns == 2 && correctAns <= 5) {
    cout << "You need more practice.";
  } else if (correctAns == 3 && correctAns <= 5) {
    cout << "Good job, but there is room for improvement.";
  } else if (correctAns == 4 && correctAns <= 5) {
    cout << "Outstanding work!";
  } else if (correctAns == 5 && correctAns <= 5) {
    cout << "Perfect score!";
  }
  cout << "\nYou got " << correctAns << " of 5 problems correct.\n\n\n";
}

void divisionQuiz(int RandNumGen()) {

  int RandOne, RandTwo, RandThree, RandFour, nextChar, answer, userAns,
      correctAns, i = 0;

  while (i <= 5) {
    cout << "Question #1: What is the result of the following?\n\n";
    cout << "  " << RandNumGen() << "       ";
    cin >> RandOne;
    cout << "  " << RandNumGen() << "       \n";
    cin >> RandTwo;
    cout << "----- * -----";
    cout << "  " << RandNumGen() << "       ";
    cin >> RandThree;
    cout << "  " << RandNumGen() << "       \n";
    cin >> RandFour;
    cout << "Enter the answer in the form x / y or just x: ";
    do {
      nextChar = cin.get();
    } while (nextChar != '/' && nextChar != '\n');
    answer = ((RandOne / RandTwo) * (RandThree / RandFour));
    if (userAns != answer) {
      cout << "\nThat is incorrect.\n\n";
      cout << "  " << RandOne << "       ";
      cout << "  " << RandTwo << "       \n";
      cout << "----- / -----";
      cout << "  " << RandThree << "       ";
      cout << "  " << RandFour << "       \n";
      cout << "  "
           << " = " << answer << "\n";
    } else if (userAns == answer) {
      cout << "That is correct!\n";
      correctAns += 1;
    }
    i = ++i;
  }
  if (correctAns == 1 && correctAns <= 5) {
    cout << "You should pay attention in class more.";
  } else if (correctAns == 2 && correctAns <= 5) {
    cout << "You need more practice.";
  } else if (correctAns == 3 && correctAns <= 5) {
    cout << "Good job, but there is room for improvement.";
  } else if (correctAns == 4 && correctAns <= 5) {
    cout << "Outstanding work!";
  } else if (correctAns == 5 && correctAns <= 5) {
    cout << "Perfect score!";
  }
  cout << "\nYou got " << correctAns << " of 5 problems correct.\n\n\n";
}

int RandNumGen() {
  int RandomNum;
  RandomNum = (1 + rand() % 9);
  return RandomNum;
}

int gcd() {
  int a, b, greatestCommDenom;

  cout << "Enter a number: ";
  cin >> a;
  cout << "Enter another number: ";
  cin >> b;

  if (b == 0)
    return a;
  greatestCommDenom = (b, a % b);
}
