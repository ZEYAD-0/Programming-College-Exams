/*
  Classes: blueprint that defines data (attributes) and behavior (methods)
  Objects: object is an instance of a class

  Abstract class: has at least one pure virtual function. It cannot be instantiated and exists to be inherited, derived classes must implement the pure virtual functions.
  Final class: declared with final. It cannot be inherited from. (final on a virtual method prevents overriding).

  Static (compile-time): the function to call is resolved at compile time. Achieved through function overloading, operator overloading, and templates.
  Dynamic (run-time): the function is resolved at run time based on the object’s actual type. Achieved through virtual functions and base-class pointers.
*/
#include <iostream>
#include <algorithm>
using namespace std;

class triangle
{
private:
  int sideA;
  int sideB;
  int sideC;

public:
  triangle()
  {
    sideA = 1;
    sideB = 1;
    sideC = 1;
  }

  void setSideValues(int s1, int s2, int s3)
  {
    if (s1 <= 0 or s2 <= 0 or s3 <= 0)
    {
      return;
    }
    sideA = s1;
    sideB = s2;
    sideC = s3;
  }

  int getSideA() { return sideA; }
  int getSideB() { return sideB; }
  int getSideC() { return sideC; }

  bool isRight()
  {
    int minSide = min({sideA, sideB, sideC});
    int maxSide = max({sideA, sideB, sideC});
    int midSide = sideA + sideB + sideC - minSide - maxSide;

    return (minSide * minSide + midSide * midSide == maxSide * maxSide);
  }
};

/* Broken */
// class Objcounter
// {
// private:
//   static int m_nCount;
//   counter() { m_nCount++ }
//   void PrintMe() { cout << "I'm object number " << m_nCount << "\n" };
// };

/*Fixed*/
class Objcounter
{
public:
  static int m_nCount;
  int counter() { return (++m_nCount); }
  void PrintMe() { cout << "I'm object number " << counter() << "\n"; }
};

int Objcounter::m_nCount = 0;

int main()
{
  triangle t1;
  cout << t1.getSideA() << '\n';
  cout << t1.getSideB() << '\n';
  cout << t1.getSideC() << '\n';
  t1.setSideValues(3, 4, 5);
  cout << t1.getSideA() << '\n';
  cout << t1.getSideB() << '\n';
  cout << t1.getSideC() << '\n';
  cout << t1.isRight() << '\n';

  Objcounter c1, c2, c3;

  c1.PrintMe(); // I'm object number 1
  c2.PrintMe(); // I'm object number 2
  c3.PrintMe(); // I'm object number 3

  Objcounter arr[3];

  for (int i = 0; i < 3; i++)
  {
    arr[i].PrintMe();
  }
}

/*
Port Said University                                                                                                Advanced Programming  (C412)
Faculty of Science                          Midterm Exam 2023/2024                          Time: 1 hrs
Math. and Computer Dept.                                                                                   Date: 18/11/2023
-------------------------------------------------------------------------------------------------------------------------------------------
Answer the following questions: (15 marks)
 Question 1: (8 marks)
a) Briefly clarify the following concepts in the context of object oriented programming: -(i)
Classes and Objects (ii) Abstract and Final Classes (iii) Static and dynamic polymorphism
b) Write a C++ class called triangle that can represent triangle objects. The class should have three
data members: sideA, sideB and sideC that hold the length of the three sides of the triangle.
The class should also has a default constructor that sets the values of the  three data members
to 1. Write a member function called SetSideValues that set the values of the three sides. The
function should make sure that the input values are positive before changing the class member
variables.  Write  three functions that return the values of each side individually. Finally, write
a function called IsRight() that checks if the  given side values form a right triangle or not
(Hence right triangle has the property
a
2
+
b
2
=
c
2
 , where c is the value of hypotenuse of
triangle, and a; and b are the values of the other two sides )
c) Write a main function  to test the class in  (b)
Question 2: (7 marks)
 Consider the following C++ program:
class Objcounter
{
    private:
         static int m_nCount;
         counter(){m_nCount++}
         void PrintMe(){cout<<"I'm object number "<< m_nCount <<"\n"};
}
int Main()
{
     Objcounter c1,c2,c3;

             c1. PrintMe();
             c2. PrintMe();
             c3. PrintMe();
}

a) Correct this program so that it can compile without errors.
b) What is the output of this program?
c) Extend this program so that it stores the objects in an array and it can call
PrintMe() using a for loop.

*/