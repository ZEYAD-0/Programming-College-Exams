#include <iostream>
using std::cout;

int main()
{
  for(int i = 1; i <= 20; ++i)
  {
    if(i % 5 == 0) continue;
    else cout << i << ' ';
  }
}