// 23k-0077
// Sajid Ali

#include<iostream>
#include<string>
using namespace std;
const float PI = 3.14159;
class Shape
{
public:
  // Area of Circle
  float calculateArea(float radius)
  {
    return PI * radius * radius;
  }
  // Area of Rectangle
  float calculateArea(float length, float width)
  {
    return length * width;
  }
  // Area of Triangle
  float calculateArea(double base, double height)
  {
    return 0.5 * base * height;
  }
  // Perimeter of Circle
  float calculatePerimeter(float radius)
  {
    return 2 * PI * radius;
  }
  // Perimeter of Rectangle
  float calculatePerimeter(float length, float width)
  {
    return 2 * (length + width);
  }
  // Perimeter of Triangle
  float calculatePerimeter(float side1, float side2, float side3)
  {
    return side1 + side2 + side3;
  }
};
int main()
{
  Shape shape;
  int choice;
  float radius, length, width, base, height, side1, side2, side3;
  cout<<"Enter the shape you want to calculate the area and perimeter for:\n";
  cout<<"1. Circle\n";
  cout<<"2. Rectangle\n";
  cout<<"3. Triangle\n";
  cin>>choice;
  switch(choice)
  {
    case 1:
      cout<<"Enter the radius of the circle: ";
      cin>>radius;
      cout<<"Area of the circle: "<<shape.calculateArea(radius)<<endl;
      cout<<"Perimeter of the circle: "<<shape.calculatePerimeter(radius)<<endl;
      break;
    case 2:
      cout<<"Enter the length and width of the rectangle: ";
      cin>>length>>width;
      cout<<"Area of the rectangle: "<<shape.calculateArea(length, width)<<endl;
      cout<<"Perimeter of the rectangle: "<<shape.calculatePerimeter(length, width)<<endl;
      break;
    case 3:  
      cout<<"Enter the base and height of the triangle: ";
      cin>>base>>height;
      cout<<"Area of the triangle: "<<shape.calculateArea(base, height)<<endl;
      cout<<"Enter the three sides of the triangle: ";
      cin>>side1>>side2>>side3;
      cout<<"Perimeter of the triangle: "<<shape.calculatePerimeter(side1, side2, side3)<<endl;
      break;
    default:
      cout<<"Invalid choice\n";
      break;
  }
  return 0;
}
