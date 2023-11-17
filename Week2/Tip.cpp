#include <iostream>
int main ()
{

  double Pounds;
  double Tip;
  

  std::cout << "Enter the price (Pounds): ";
  
  std::cin >> Pounds;

  std::cout << "Enter the Percentage of Tip: ";

  std::cin >> Tip;

  double Tip_amount   = Pounds  / 10;
   double Total_amount  = Pounds + Tip_amount;
  std::cout << "Test" << Total_amount << std::endl;

  std::cout << "The Tip is: " << Tip_amount << std::endl;
  std::cout << "Total amount to pay is: " << Total_amount << std::endl;

  return 0;

}
