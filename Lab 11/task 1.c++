#include<iostream>
#include<string>
using namespace std;
class Convert
{
protected:
  double val1;
  double val2;
public:
  Convert(double v1, double v2) 
  {
    val1 = v1;
    val2 = v2;
  }
  virtual void convert() = 0;
};
class l_to_g : public Convert
{
public:
  l_to_g(double v1, double v2) : Convert(v1, v2) {}
  void convert() override
  {
    cout<<"Liters: "<<val1<<endl;
    val2 = val1 * 0.264172;
    cout<<"Liters to Galons: "<<val2<<endl;
  }
};
class f_to_c : public Convert
{
public:
  f_to_c(double v1, double v2) : Convert(v1, v2) {}
  void convert() override
  {
    cout<<"Farneheit: "<<val1<<endl;
    val2 = (val1 - 32) * 5/9;
    cout<<"Fahrenheit to Celsius: "<<val2<<endl;
  }
};
int main()
{
  l_to_g l(4, 0);
  l.convert();
  f_to_c f(70, 0);
  f.convert();
  return 0;
}
