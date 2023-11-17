#include <iostream>
int main()
{
  double x,y,z;
  std::cout << "Enter three integers: " ;
  std::cin >> x >> y >> z;

  if(x < y && y < z) {
    std::cout << "It is in order";
  }
  else if( z < y && y < x) {
    std::cout << "In order";
  }

  else {
    std::cout << "Not  in order";
  }

  return 0;
}
    
