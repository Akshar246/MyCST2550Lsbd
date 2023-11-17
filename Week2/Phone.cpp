#include <iostream>
#include <string>

using namespace std;

  string PhoneNumber(string inputNumber);
  {
    string MainPhoneNumber = "(" + inputNumber.substr(0, 3) + ") " + inputNumber.substr(3, 4) + " " + inputNumber.substr(7);
    return MainPhoneNumber;
  }

int main() {
  string TelePhoneNumber;
  cout << "Enter a (11) digit  phone number ";
  cin >> TelePhoneNumber;

  string MainPhoneNumber = PhoneNumber(TelePhoneNumber);
  std::cout << "The formatted Phone Number is: " << MainPhoneNumber << endl;

  return 0;
}
 
 


