#include <iostream>
using namespace std;

int main() {
    string inputStr;

    std:: cout << "Enter a character: ";
    std:: cin >> inputStr;
   
    char inputChar = inputStr[0];

    if (isalpha(inputChar)) {
        if (inputChar == 'a' || inputChar == 'e' || inputChar == 'i' || inputChar == 'o' || inputChar == 'u' ||
            inputChar == 'A' || inputChar == 'E' || inputChar == 'I' || inputChar == 'O' || inputChar == 'U') {
            cout << "Vowel" << endl;
        } else {
            cout << "Consonant" << endl;
        }
    } else if (isdigit(inputChar)) {
        cout << "Digit" << endl;
    } else if (ispunct(inputChar)) {
        cout << "Punctuation" << endl;
    } else {
        cout << "Unrecognized" << endl;
    }

    return 0;
}


