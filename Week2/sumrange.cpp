#include <iostream>
int sumRange(int no1, int no2);
int main()
{
  int start;
  int finish;
  int sum = 0;
  std::cout << "Enter two numbers: ";
  std::cin >> start >> finish;

  int index = start;

  while (index <= finish){
    sum = sum + index;
    index++;
  }

  std::cout << "Sum from " <<  start << " to " << finish << " is : " << sum <<  std::endl;
  int gov =sumRange(start, finish);
  std::cout << "SumRange from " <<  start << " to " << finish << " is : " << gov <<  std::endl;
  return 0;
}

int sumRange(int begin, int fin){
  int total = 0;
  int step = begin;
  
  while (step <= fin){
    total = total + step;
    step++;
  }
  return total;
}