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