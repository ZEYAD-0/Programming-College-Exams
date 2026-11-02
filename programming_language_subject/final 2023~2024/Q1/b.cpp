#include <iostream>
#include <limits>
using std::cout;
using std::cin;

double circle_area();
double rectangle_area();
double triangle_area();

int main()
{
  cout << "choose a shape\n";
  cout << "1.circle\n";
  cout << "2.rectangle\n";
  cout << "3.triangle\n";
  int choice;
  cout << "choice : ";
  cin >> choice;
  
  switch(choice)
  {
    case 1:
    {
      cout << "** circle area **\n";
      double c_area = circle_area();
      cout << "circle area = " << c_area;
      break;
    }
    case 2:
    {
      cout << "** rectangle area **\n";
      double r_area = rectangle_area();
      cout << "rectangle area = " << r_area;
      break;
    }
    case 3:
    {
      cout << "** triangle area **\n";
      double t_area = triangle_area();
      cout << "triangle area = " << t_area;
      break;
    }
    default:
    {
      cout << "Wrong Choice, try again\n";
      break;
    }
  }
}

double circle_area()
{
  const double pi = 3.14;
  double radius;
  cout << "enter radius: ";
  cin >> radius;
  double area = pi * radius * radius;
  return area;
}

double rectangle_area()
{
  double lenght , width;
  cout << "enter lenght: ";
  cin >> lenght;

  cout << "enter width: ";
  cin >> width;

  double area = lenght * width;
  return area;
}

double triangle_area()
{
  double base , height;
  cout << "enter base: ";
  cin >> base;
  cout << "enter height: ";
  cin >> height;
  double area = 0.5 * base * height;
  return area;
}