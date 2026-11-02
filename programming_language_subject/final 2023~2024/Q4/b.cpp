#include <iostream>
using std::cout;
using std::cin;

int index_of_largest(int size , int nums[]);

int main()
{
  int size = 5;
  int nums[size];
  cout << "**Enter Five Numbers**\n";
  for(int i = 0; i < size; ++i)
  {
    cout << "Enter number" << i + 1 << " : ";
    cin >> nums[i];
  }
  cout << "index of the largest element = " << index_of_largest(size , nums);
}

int index_of_largest(int size , int nums[])
{
  int large_index = 0;
  for(int i = 1; i < size; ++i)
  {
    if(nums[i] > nums[large_index])
    {
      large_index = i;
    }
  }
  return large_index;
}