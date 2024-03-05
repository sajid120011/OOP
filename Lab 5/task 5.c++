23k-0077
  Sajid Ali


#include<iostream>
#include<string>
using namespace std;
class Engine
{
public:
  void start()
  {
    cout<<"Engine started"<<endl;
  }
  void stop()
  {
    cout<<"Engine stopped"<<endl;
  }
};
class wheel
{
private:
  string position;
public:
  void setPosition(string pos)
  {
    position=pos;
  }
  string getPosition() const
  {
    return position;
  }
};
class Headlight
{
private:
  string Position;
public:
  Headlight(string p) : Position(p) {}
  string getPosition() const
  {
    return Position;
  }
};
class Steering
{
public:
  void turnLeft()
  {
    cout<<"Turning left"<<endl;
  }
  void turnRight()
  {
    cout<<"Turning right"<<endl;
  }
};
class Car
{
private:
  Engine engine;
  wheel wheels[4];
  Headlight* headlights[2];
  Steering steering;
public:
  Car(Engine e, wheel w[4], Headlight* h[2], Steering s)
  {
    engine=e;
    for(int i=0;i<4;i++)
    {
      wheels[i]=w[i];
    }
    for(int i=0;i<2;i++)
    {
      headlights[i]=h[i];    
    }
    steering=s;
  }
  void start()
  {
    cout<<endl<<"Starting car"<<endl;
  }
  void stop()
  {
    cout<<endl<<"Stopping car"<<endl;
  }
};
int main()
{
  Engine e;
  wheel w[4];
  w[0].setPosition("front left");
  w[1].setPosition("front right");
  w[2].setPosition("back left");
  w[3].setPosition("back right");
  Headlight* h[2];
  h[0]=new Headlight("front");
  h[1]=new Headlight("rear");
  Steering s;
  Car c(e,w,h,s);
  c.start();
  c.stop();
  return 0;
}
