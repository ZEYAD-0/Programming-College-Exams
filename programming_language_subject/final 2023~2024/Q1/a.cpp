#include <iostream>

int main()
{
  int num1 , num2;
  std::cout << "enter 2 numbers\n";
  std::cout << "number 1 : ";
  std::cin >> num1;
  
  std::cout << "number 2 : ";
  std::cin >> num2;
  std::cout << ( num1 > num2 ? num1 : num2 );
}