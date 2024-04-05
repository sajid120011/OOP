// 23k-0077
// Sajid Ali

#include<iostream>
#include<math.h>
using namespace std;
const float PI = 3.14159;
class Shape
{
public:
  virtual double area() const = 0;
  virtual double perimeter() const = 0;
  virtual void displayProperites() const = 0;
};
class Circle : public Shape
{
private:
  double radius;
public:
  Circle(double r)
  {
    radius = r;
  }
  double area() const
  {
    return PI * radius * radius;
  }
  double perimeter() const
  {
    return 2 * PI * radius;
  }
  void displayProperites() const
  {
    cout<<"Circle Properties:"<<endl;
    cout<<"Radius: "<<radius<<endl;
    cout<<"Area: "<<area()<<endl;
    cout<<"Perimeter: "<<perimeter()<<endl;
  }
};
class Rectangle : public Shape
{
private:
  double length;
  double width;
public:
  Rectangle(double l, double w)
  {
    length = l;
    width = w;
  }
  double area() const
  {
    return length * width;
  }
  double perimeter() const
  {
    return 2 * (length + width);
  }
  void displayProperites() const
  {
    cout<<"Rectangle Properties:"<<endl;
    cout<<"Length: "<<length<<endl;
    cout<<"Width: "<<width<<endl;
    cout<<"Area: "<<area()<<endl;
    cout<<"Perimeter: "<<perimeter()<<endl;
  }
};
class Square : public Shape
{
private:
  double side;
public:
  Square(double s)
  {
    side = s;
  }
  double area() const
  {
    return side * side;
  }
  double perimeter() const
  {
    return 4 * side;
  }
  void displayProperites() const
  {
    cout<<"Square Properties:"<<endl;
    cout<<"Side: "<<side<<endl;
    cout<<"Area: "<<area()<<endl;
    cout<<"Perimeter: "<<perimeter()<<endl;
  }
};
class Triangle : public Shape
{
private:
  double base;
  double height;
  double hypotenuse;
public:
  Triangle(double b, double h, double hyp)
  {
    base = b;
    height = h;
    hypotenuse = hyp;
  }
  double area() const
  {
    return 0.5 * base * height;
  }
  double perimeter() const
  {
    return base + height + hypotenuse;
  }
  void displayProperites() const
  {
    cout<<"Triangle Properties:"<<endl;
    cout<<"Base: "<<base<<endl;
    cout<<"Height: "<<height<<endl;
    cout<<"Hypotenuse: "<<hypotenuse<<endl;
    cout<<"Area: "<<area()<<endl;
    cout<<"Perimeter: "<<perimeter()<<endl;
  }
};
class EquilateralTriangle : public Triangle
{
private:
  double side;
public:
  EquilateralTriangle(double side) : Triangle(side, side, side) {}
  double area() const
  {
    return sqrt(3) * side * side;
  }
  void displayProperites() const 
  {
    cout<<"Equilateral Triangle Properties:"<<endl;
    cout<<"Side: "<<side<<endl;
    cout<<"Area: "<<area()<<endl;
    cout<<"Perimeter: "<<perimeter()<<endl;
  }
};
int main()
{
  Shape shape[5];
  shape[0] = Circle(5);
  shape[1] = Rectangle(4, 6);
  shape[2] = Square(3);
  shape[3] = Triangle(3, 4, 5);
  shape[4] = EquilateralTriangle(5);
  int choice;
  double radius, length, width, side, base, height, hypotenuse;
  cout<<"Select Shape:"<<endl;
  cout<<"1. Circle"<<endl;
  cout<<"2. Rectangle"<<endl;
  cout<<"3. Square"<<endl;
  cout<<"4. Triangle"<<endl;
  cout<<"5. Equilateral Triangle"<<endl;
  cin>>choice;
  switch(choice)
  {
    case 1:
      cout<<"Enter radius of circle: ";
      cin>>radius;
      shape[0] = Circle(radius);
      Circle c;
      c.displayProperites();
      break;
    case 2:
      cout<<"Enter length and width of rectangle: ";
      cin>>length>>width;
      shape[1] = Rectangle(length, width);
      Rectangle r;
      r.displayProperites();
      break;
    case 3:
      cout<<"Enter side of square: ";
      cin>>side;
      shape[2] = Square(side);
      Square s;
      s.displayProperites();
      break;
    case 4:
      cout<<"Enter base, height, and hypotenuse of triangle: ";
      cin>>base>>height>>hypotenuse;
      shape[3] = Triangle(base, height, hypotenuse);
      Triangle t;
      t.displayProperites();
      break;
    case 5:
      cout<<"Enter side of equilateral triangle: ";
      cin>>side;
      shape[4] = EquilateralTriangle(side);
      EquilateralTriangle et;
      et.displayProperites();
      break;
    default:
      cout<<"Invalid choice"<<endl;
      break;
  }
  
}
