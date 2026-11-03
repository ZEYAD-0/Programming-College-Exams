#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Q1
class Shape
{
protected:
  string color_;

public:
  Shape(string color) : color_(color) {}
  virtual void draw()
  {
    cout << color_ << " Shape Drawing\n";
  }
  /*
   * if draw() was not declared as virtual code would not compile
   * and could not override it in child classes.
   */

  virtual ~Shape() {}
};

class Circle : public Shape
{
public:
  Circle(string color) : Shape::Shape(color) {}
  void draw() override
  {
    cout << color_ << " Circle Drawing\n";
  }
};

class Rectangle : public Shape
{
public:
  Rectangle(string color) : Shape::Shape(color) {}
  void draw() override
  {
    cout << color_ << " Rectangle Drawing\n";
  }
};

void renderScene(const vector<Shape *> &shapes)
{
  for (int i = 0; i < shapes.size(); ++i)
  {
    shapes[i]->draw();
  }
}

// Q2
class Complex
{
private:
  int real_;
  int img_;

public:
  Complex(int real, int img) : real_(real), img_(img) {}

  friend ostream &operator<<(ostream &out, const Complex &c)
  {
    out << '(' << c.real_ << ", " << c.img_ << ')';
    return out;
  }

  Complex operator+(const Complex &rhs)
  {
    Complex result(this->real_ + rhs.real_, this->img_ + rhs.img_);
    return result;
  }

  Complex operator-(const Complex &rhs)
  {
    Complex result(this->real_ - rhs.real_, this->img_ - rhs.img_);
    return result;
  }
};

int main()
{
  Shape s1("red");
  s1.draw();
  Circle c1("blue");
  c1.draw(); // Runtime Polymorphism
  Rectangle r1("yellow");
  r1.draw(); // Runtime Polymorphism

  vector<Shape *> shapes = {&s1, &c1, &r1};
  renderScene(shapes);

  /*-----------------------------*/

  Complex com1(1, 2);
  Complex com2(3, 5);
  cout << com1 + com2 << '\n';
  cout << com1 - com2 << '\n';

  /*
  * Operator overloading lets user-defined classes use built-in operators, which improves both readability and
  * maintainability.
  * Readability: Clearer that use function calls.
  * Maintainability: Code that uses operators doesn't depend on how a class is implemented.
  */
}

/*
Port Said University                                                                                                Advanced Programming  (C412)
Faculty of Science                          Midterm Exam 2025/2026                          Time: 1 hrs
Math. and Computer Dept.                                                                                   Date: 9/11/2025
-------------------------------------------------------------------------------------------------------------------------------------------
Answer the following questions: (15 marks)
 Question 1: (7 marks)
You are designing a graphics application where different shapes can be drawn on the
screen. You decide to create a base class called Shape with a virtual function draw()
 that each shape should override, such that:
• The base class Shape contains a method draw() and a data member color.
• The derived classes Circle and Rectangle each implement draw() differently.
• A function renderScene() receives a std::vector<Shape*> and calls draw() on each
element.
a) Write the class definitions for Shape, Circle, and Rectangle. (3)
b) Demonstrate polymorphic behavior by showing how the correct draw() method
is called at runtime. (2)
c) Explain what would happen if draw() was not declared as virtual in the base
class. (2)
Question 2: (8 marks)
You are asked to design a simple Complex Number class for a scientific computation
module. The system should support operations between complex numbers in a
natural and readable way using operator overloading, such that:
• Users should be able to add and subtract two complex numbers using the + and -
operators.
• The class should also support displaying a complex number using the << operator
for output streams (e.g., cout << c1;).
• The system should print the result in the format (real, imag).
a) Define the Complex class with appropriate constructors.
b) Overload the +, -, and << operators.
c) Write a main program that creates two complex numbers, performs addition and
subtraction, and displays the results.
d) Explain how operator overloading improves readability and maintainability in
C++ programs.

*/