// a program that finds the average bats

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// function prototyping

double calcBatAvg(const char[], const int);
void dispPlyrStats(const int, const char[], const int, const double);

int main() {

  string file;

  cout << "Enter the name of the file: "
       << endl; // prompts the user for the file name
  cin >> file;  // assign the file to variables
  ifstream input;
  input.open(file); // opens the file

  if (input.is_open()) // test if file is valid
  {
    string line;
    while (getline(input, line)) {
      int pos = line.find(' ');
      int num = stoi(line.substr(0, pos));
      string seq = line.substr(pos + 1, line.length() - pos);
      const char *c = seq.c_str();
      double average = calcBatAvg(c, seq.length());
      dispPlyrStats(num, c, seq.length(), average);
    }
  } else {
    cout << "Error unable to open the file." << endl; // error message
  }
}

void dispPlyrStats(const int num, const char str[], const int n,
                   const double avg) {
  cout << "Player " << num << "'s bats this game: ";
  for (int i = 0; i < n; i++) {
    cout << str[i];
  }
  cout << fixed << setprecision(3);
  cout << "\t\tBatting Average: " << avg
       << endl; // displays the batting average
}

double calcBatAvg(const char str[], int n) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (str[i] == 'H') {
      count++;
    }
  }
  return (double)count / (double)n;
}
