#include <iostream>
using std::cout;

float calculate_average(int arr[] , int size);

int main()
{
  int size = 3;
  int arr[size] = {5 , 10 , 15};
  cout << "Average = " << calculate_average(arr , size);
}

float calculate_average(int arr[] , int size)
{
  float avg = 0;
  for(int i = 0; i < size; ++i)
  {
    avg += arr[i];
  }
  avg = avg / size;
  return avg;
}