#include <iostream>
using std::cout;
using std::cin;

void order(float &num1 , float &num2);

int main()
{
  float num1 = 7.2, num2 = 6.5;

  cout << "** before order **\n";
  cout << "num1 : " << num1 << '\n';
  cout << "num2 : " << num2 << '\n';

  order(num1 , num2);
  cout << "=====================\n";

  cout << "** after order **\n";
  cout << "num1 : " << num1 << '\n';
  cout << "num2 : " << num2 << '\n';
}

void order(float &num1 , float &num2)
{
  if(num1 > num2)
  {
    float temp = num1;
    num1 = num2;
    num2 = temp;
  }
}