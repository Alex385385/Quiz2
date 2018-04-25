#include "stdafx.h"
#include <iostream>
using namespace std;

class Circle
{
   double radius;
   const double pi = 3.14159;
public:
   Circle()
   {
      radius = 0.0;
   }
   Circle(double r)
   {
      radius = r;
   }
   void setRadius(double r)
   {
      radius = r;
   }
   double getRadius()
   {
      return radius;
   }
   double getArea()
   {
      double area;
      return area = pi * radius * radius;
   }
   double  getDiameter()
   {
      double diameter;
      return diameter  = radius * 2;
   }
   double getCircumference()
   {
      double circumference;
      return circumference  = 2 * pi * radius;
   }
};

int main()
{
   int rad;
   cout << "Please enter the circle's radius: ";
   cin >> rad;
   cout << endl;

   Circle c1(rad);

   cout << "Circle's area: " << c1.getArea() << endl;
   cout << "Circle's diameter: " << c1.getDiameter() << endl;
   cout << "Circle's circumference: " << c1.getCircumference() << endl;
}
