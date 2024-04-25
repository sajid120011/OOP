#include<iostream>
using namespace std;
class Shape
{
private:
  double a, b;
public:
  Shape(double a, double b)
  {
    this->a = a;
    this->b = b;
  }
  double area()
  {
    return a * b;
  }
  Shape operator+(Shape s)
  {
    Shape temp(0, 0);
    temp.a = this->a + s.a;
    temp.b = this->b + s.b;
    return Shape(temp.a , temp.b);
  }
};
int main()
{
  Shape s1(10, 5);
  Shape s2(20, 10);
  Shape s3 = s1 + s2;
  cout<<"Area of s1: "<<s1.area()<<endl;
  cout<<"Area of s2: "<<s2.area()<<endl;
  cout<<"Total Area: "<<s3.area()<<endl;
  return 0;
}
