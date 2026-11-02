#include <iostream>
using std::cout;

int find_max(int num1 , int num2);
double find_max(double num1 , double num2);

int main()
{
  int num1 = 7 , num2 = 5;
  cout << "larger number is " << find_max(num1 , num2) << '\n';
  
  double num3 = 7.5 , num4 = 5.2;
  cout << "larger number is " << find_max(num3 , num4) << '\n';

}

int find_max(int num1 , int num2)
{
  return ( num1 > num2 ? num1 : num2 );
}

double find_max(double num1 , double num2)
{
  return ( num1 > num2 ? num1 : num2 );
}