#include <iostream>
using namespace std;
class Counter
{
  private:
  public:
  unsigned int c = 0; // should be public to work
  void DisplayCount() { cout << c; } /*
  semi colon ; have to be before curly braces } */
}; // put semi colon ; here

int main()
{
  Counter c1; // and here ;
  c1.c = 0;
  c1.DisplayCount();
  return 0;
}
