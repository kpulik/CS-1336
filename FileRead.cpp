#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  // creating a file stream
  ifstream inFile;
  string filename;
  int number;
  // Reading filename from the user
  // cout << "Enter the file name: ";
  cin >> filename;

  // opening the desired file
  inFile.open(filename);
  if (inFile) {
    string word;
    int wordcount = 0, consonant = 0, vowel = 0;

    // counting word, consonants and vowels until the end of the file
    while (inFile >> number) {
      inFile >> word;
      wordcount++;
      for (int i = 0; i < word.length(); i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' or
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' or
            word[i] == 'E' || word[i] == 'I' || word[i] == 'O' or
            word[i] == 'U')
          consonant++;
        else
          vowel++;
      }
    }
    // Displaying the data
    cout << filename << " contains:\n";
    cout << "words = " << wordcount << endl;
    cout << "consonants = " << consonant << endl;
    cout << "vowels = " << vowel << endl;
  } else {
    cout << "Error! Unable to open file " << filename << "." << endl;
  }

  return 0;
}
