#include<iostream>
#include<string>
using namespace std;
class Print;
class Perimeter
{
private:
  double length;
  double breadth;
public:
  Perimeter(double l, double b)
  {
    length = l;
    breadth = b;
  }
  void findPerimeter(int num)
  {
    if(num == 1)
    {
    cout<<"Perimeter of rectangle is: "<<2*(length + breadth)<<endl;
    }
    if(num == 2)
    {
      cout<<"Perimeter of Circle is: "<<2*3.14*length<<endl;
    }
    if(num == 3)
    {
      cout<<"Perimeter of Triangle is: "<<length + breadth + length<<endl;
    }
    if(num == 4)
    {
      cout<<"Perimeter of Square is: "<<4*length<<endl;
    }
  }
  friend class Print;
};
class Print   
{
public:
  void print(Perimeter p)
  {
    cout<<"Length: "<<p.length<<endl;
    cout<<"Breadth: "<<p.breadth<<endl;
    p.findPerimeter(1);
    p.findPerimeter(2);
    p.findPerimeter(3);
    p.findPerimeter(4);
  }
};
int main()
{
  Perimeter p(10,20);
  Print p1;
  p1.print(p);  
  return 0;
}
