// A multi-function program that lets a user play a round of rock, paper,
// scissors against the computer

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <stdio.h>
using namespace std;

void scorePlay(int, int);

int main() {

  // setting up the random number generator

  unsigned int seed;
  // seed = time(0); // This code should not be a comment when testing the code
  cin >> seed; // This code should not be a comment when submitting
  // cin.ignore();
  srand(seed);

  int playNum, randomNumGen;
  bool ValidNumberEntered;

  cout << "Play Game of Rock, Paper, Scissors\n\n";
  cout << "\t1 = Rock\n\t2 = Paper\n\t3 = Scissors\n\n";
  cout << "Choose your play [1, 2, or 3]: ";
  cin >> playNum;
  cout << "\n";

  // making sure only the right values are accepted into the program

  if (playNum == 1 || 2 || 3) {
    ValidNumberEntered = true;
  } else if (playNum != 1 || 2 || 3) {
    ValidNumberEntered = false;
    cout << "Error, invalid menu choice ";
  }

  // if the correct values are entered, the code will run

  if (ValidNumberEntered == true) {
    randomNumGen = (1 + rand() % 4);
    scorePlay(randomNumGen, playNum);
  }
}

// The code that determines the correct output based on the user-inputted value
// and the randomly generated vaue
// Params: randomNumGen - the randomly generated number between 1-3
//         playNum - the user-inputted play that can only range from 1-3

scorePlay(int randomNumGen, int playNum) {
  if (playNum == 1 && randomNumGen == 1) {
    cout << "The game is a tie. Both the player and computer played rock";
  } else if (playNum == 1 && randomNumGen == 2) {
    cout << "The computer wins. The player played rock and the computer played "
            "paper. Paper covers rock.";
  } else if (playNum == 1 && randomNumGen == 3) {
    cout << "The player wins. The player played rock and the computer played "
            "scissors. Rock crushes scissors.";
  } else if (playNum == 2 && randomNumGen == 1) {
    cout << "The player wins. The player played paper and the computer played "
            "rock. Paper covers rock.";
  } else if (playNum == 2 && randomNumGen == 2) {
    cout << "The game is a tie. Both the player and computer played paper";
  } else if (playNum == 2 && randomNumGen == 3) {
    cout
        << "The computer wins. The player played paper and the computer played "
           "scissors. Scissors cut paper.";
  } else if (playNum == 3 && randomNumGen == 1) {
    cout << "The computer wins. The player played scissors and the computer "
            "played "
            "rock. Rock crushes scissors.";
  } else if (playNum == 3 && randomNumGen == 2) {
    cout << "The player wins. The player played scissors and the computer "
            "played paper. Scissors cut paper.";
  } else if (playNum == 3 && randomNumGen == 3) {
    cout << "The game is a tie. Both the player and computer played scissors";
  }
}
