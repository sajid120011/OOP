// 23k-0077
// Sajid Ali


#include<iostream>
#include<string>
using namespace std;
class Square
{
private:
  float sideLength;
  float area;
  static float allAreas;
public:
  Square() : sideLength(0), area(0) {}
  Square(float sideLength) : sideLength(sideLength), area(sideLength * sideLength) {}
  void calculate()
  {
    area=sideLength*sideLength;
    allAreas+=area;
  }
  float getSideLength() const
  {
    return sideLength;
  }
  float getArea() const
  {
    return area;
  }
  static float getAllAreas()
  {
    return allAreas;
  }
  void setSideLength(float sideLength)
  {
    this->sideLength=sideLength;
  }
  void setArea(float area)
  {
    this->area=area;
  }
  void display()
  {
    cout<<"Side Length: "<<sideLength<<endl;
    cout<<"Area: "<<area<<endl;
    cout<<"All Areas: "<<allAreas<<endl;
  }
};
float Square::allAreas=0;
int main()
{
  Square s1(5);
  s1.calculate();
  s1.display();
  cout<<"Area: "<<s1.getArea()<<endl;
  cout<<"All Areas: "<<Square::getAllAreas()<<endl;
  Square s2(10);
  s2.calculate();
  s2.display();
  cout<<"Area: "<<s2.getArea()<<endl;
  cout<<"All Areas: "<<Square::getAllAreas()<<endl;
  Square s3(15);
  s3.calculate();
  s3.display();
  cout<<"Area: "<<s3.getArea()<<endl;
  cout<<"All Areas: "<<Square::getAllAreas()<<endl;
  return 0;
}
