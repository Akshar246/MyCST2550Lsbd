#include <iostream>
int main()
{
  double x,y;
  
  std::cout << "Please enter two numbers: ";
  std::cin >>  x >>  y;
  double sum = x + y;
  std::cout << "The sum of " << x  << " and " << y
	    << "is: " << sum  << std::endl;
  return 0;
}
