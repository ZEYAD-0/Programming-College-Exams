#include <iostream>
using std::cout;
using std::cin;

double power(double base , int exponent = 2);

int main()
{
  double n;
  int p;
  cout << "Enter Base Number: ";
  cin >> n;

  cout << "Enter Exponent Number: ";
  cin >> p;
  cout << "result = " << power(n , p);
}

double power(double base , int exponent)
{
  if(exponent == 0) return 1;
  return base * power(base , exponent - 1);
}