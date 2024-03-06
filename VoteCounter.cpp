// a program that reads votes from a user input file

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {

  string fileName = "";
  int num = 0;

  int candiate[10];                       // create an array
  cout << "Enter the name of the file: "; // prompt the user for the file name
  cin >> fileName;                        // assign the file to a variable

  fstream file;
  file.open(fileName);

  if (file.is_open()) // test if the file is valid
  {
    for (int i = 0; i < 10; i++) {
      candiate[i] = 0;
    }

    while (file >> num) {

      if (num > 0 && num <= 10) {
        int value = candiate[num - 1];
        candiate[num - 1] = value + 1;
      }
    }

    file.close(); // close the file

    // display the data

    cout << right;
    cout << setw(11) << "\n Candidate\t" << setw(11) << " Votes\n" << endl;

    for (int i = 0; i < 10; i++) {
      cout << setw(10) << i + 1 << "\t" << setw(10) << candiate[i] << endl;
    }
  } else {
    cout << "Error unable to open file." << endl; // error message
  }

  return 0;
}
