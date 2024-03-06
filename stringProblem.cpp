#include <iostream>
#include <string>
using namespace std;

int main() {

  string str1, str2;

  // Getting a word from the user

  cout << "Enter a word: ";
  getline(cin, str1);
  cout << "\n";

  // Getting a phrase from the user

  cout << "Enter a phrase: ";
  getline(cin, str2);
  cout << "\n";

  // Combining the word and the phrase and assigning the new string to a
  // variable

  string str1and2 = str1 + str2;

  // Outputting the new string and the string size along with the first and last
  // letter of the phrase with 10 spaces in between

  cout << "\n" << str1and2 << "\n\n";

  cout << str1 << "          " << str2.size() << "\n";
  cout << "         " << str2[0] << "\n"
       << "         " << str2.back() << endl;

  return 0;
}
