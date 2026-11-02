#include <iostream>
using std::cout;


int main()
{
  int var1 = 80;
  cout << var1++; // 80
  /* first it will print var1 which is 80
  then it will increment var1 by 1 => so var1 is now 81 */

  cout << --var1; // 80
  /* first it will decrement var1 by 1 => so var1 is now 80
  then it will print var1 */
}