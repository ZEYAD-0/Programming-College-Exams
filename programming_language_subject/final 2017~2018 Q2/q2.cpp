#include <iostream>
using std::cout;

int findMin(int arr[] , int index);
void sort(int arr[]);

int main()
{
  int N = 5;
  int arr[N] = {5 , 4 , 1 , 3 , 2};
  // cout << findMin(arr , 2);
  sort(arr);
  for(int i = 0; i < N; ++i)
  {
    cout << arr[i] << ' ';
  }
}


void sort(int arr[])
{
  int size = 5;
  for(int i = 0; i < size; ++i)
  {
    int minIndex = findMin(arr, i);
    // Swap the current element with the minimum element
    if (minIndex != i) 
    {
      std::swap(arr[i], arr[minIndex]);
    }
  }
}


int findMin(int arr[] , int index)
{
  int size = 5;
  int min = arr[index]; 
  for(int i = index + 1; i < size; ++i)
  {
    if(arr[i] < arr[index]) index = i;
  }
  return index;
}