#include<iostream>
#include<string>
using namespace std;
class OperatorOverload
{
private:
  int num;
public: 
  OperatorOverload(int n)
  {
    num = n;
  }
  OperatorOverload operator--()
  {
    num *= 4;
    return num;
  }
  OperatorOverload operator--(int)
  {
    OperatorOverload op(num);
    num /= 4;
    return op;
  }
  void display()
  {
    cout<<"Value: "<<num<<endl;
  }
};
int main()
{
  OperatorOverload obj(10);
  obj.display();
  obj--;
  obj.display();
  --obj;
  obj.display();
  return 0;
}
