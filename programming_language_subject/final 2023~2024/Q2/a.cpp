#include <iostream>
using std::cout;

void test();

int main()
{
  test();
  test();
  test();
}

void test()
{
  static int called = 0;
  called++;
  cout << "Function Called : " << called << " times.\n";
}