// A program that takes input from the user and allows 2 players
// to play a game of pig

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

void read(string &p1, string &p2);

int playersTurn(string name, int currentScore, int opponentScore);

int main() {

  // using the time function

  unsigned seed;
  cin >> seed;
  cin.ignore();
  srand(seed);

  string p1, p2;
  int p1Score = 0, p2Score = 0;

  //
  read(p1, p2);

  do {
    p1Score = playersTurn(p1, p1Score, p2Score);

    if (p1Score >= 100) {
      // displaying the final scores

      cout << "\n"
           << p1 << " wins! Final score: " << p1 << " = " << p1Score << "\t"
           << p2 << " = " << p2Score;
      return 0;
    }

    // displaying the current standings

    cout << "Current standings: " << p1 << " = " << p1Score << "\t" << p2
         << " = " << p2Score << endl;

    if (p1Score < 100) {
      p2Score = playersTurn(p2, p2Score, p1Score);

      if (p2Score >= 100) {
        // displaying the final scores

        cout << "\n"
             << p2 << " wins! Final score: " << p1 << " = " << p1Score << "\t"
             << p2 << " = " << p2Score;
        return 0;
      }

      // displaying the current standings

      cout << "Current standings: " << p1 << " = " << p1Score << "\t" << p2
           << " = " << p2Score << endl;
    }

  } while (p1Score < 100 && p2Score < 100);

  return 0;
}

/*  a function that gets the players names from the user and assigns them to
 * the correct variables
   PARAMS:
   p1 - A reference string that will store the first
 * player's name p2 - A reference string that will store the second player's
 * name RETURNS : Void
 */

void read(string &p1, string &p2) {
  // get the name from user

  cout << "Enter first player's name" << endl;

  // assign the user input to variable

  getline(cin, p1);

  // get the name from user

  cout << "Enter second player's name" << endl;

  // assign the user input to the variable

  getline(cin, p2);

  return;
}

/*  a function that creates a random roll from a die
 *   PARAMS:
 *	 name - A string that will store the players name
 *	 currentScore - An integer variable that will store the players current
 *   score opponentScore - An integer variable that will store the opponents
 *   score RETURNS : int data type that is the new score for this players turn
 */

int playersTurn(string name, int currentScore, int opponentScore) {
  char decision = 'N';
  int roll, newScore = 0;

  do {
    decision = 'N';

    roll = rand() % 6 + 1;

    if (roll != 1) {
      newScore += roll;

      // asks  the user if they want to roll the dice again

      cout << "Would you like to roll again?" << endl;
      cout << " Enter Y for Yes and N for No" << endl;

      // place the user input in the variable

      cin >> decision;
    } else {
      newScore = 0;
    }

    // display the roll value

    cout << name << "'s roll is " << roll << "." << endl;

  } while (decision == 'Y' && newScore < 100);

  newScore += currentScore;

  return (newScore);
}
