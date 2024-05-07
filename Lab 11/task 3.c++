#include<iostream>
#include<string>
using namespace std;
class vehicle
{
protected:
  string make;
  string model;
  int speed;
public:
  vehicle(string make, string model, int speed)
  {
    this->make = make;
    this->model = model;
    this->speed = speed;
  }
  virtual void accelerate() = 0;
  virtual void brake() = 0;
  virtual void CalculateFuelEfficiency() = 0;
  string getMake()
  {
    return make;
  }
  string getModel()
  {
    return model;
  }
  int getSpeed()
  {
    return speed;
  }
};
class Car : public vehicle
{
private:
  double fuelCapacity;
public:
  Car(string make, string model, int speed, double fuelCapacity) : vehicle(make, model, speed)
  {
    this->fuelCapacity = fuelCapacity;
  }
  void accelerate() override
  {
    speed += 5;
    cout<<"Car acceleration: "<<speed<<endl;
  }  
  void brake() override
  {
    speed -= 5;
    if(speed < 0)
    {
      speed = 0;
    }
    cout<<"Car speed after brake: "<<speed<<endl;
  }
  void CalculateFuelEfficiency() override
  {
    double fuelEfficiency = fuelCapacity / speed;
    cout<<"Car fuel efficiency: "<<fuelEfficiency<<endl;
  }
  void display()
  {
    cout<<"Car make: "<<getMake()<<endl;
    cout<<"Car model: "<<getModel()<<endl;
    cout<<"Car speed: "<<getSpeed()<<endl;
    cout<<"Car fuel capacity: "<<fuelCapacity<<endl;
  }
};
class Truck : public vehicle
{
private:
  int cargoCapacity;
public:
  Truck(string make, string model, int speed, int cargoCapacity) : vehicle(make, model, speed)
  {
    this->cargoCapacity = cargoCapacity;
  }
  void accelerate() override
  {
    speed += 5;
    cout<<"Truck acceleration: "<<speed<<endl;
  }
  void brake() override
  {
    speed -= 3;
    if(speed < 0)
    {
      speed = 0;
    }
    cout<<"Truck speed after brake: "<<speed<<endl;
  }
  void CalculateFuelEfficiency() override
  {
    double fuelEfficiency = cargoCapacity / speed;
    cout<<"Truck fuel efficiency: "<<fuelEfficiency<<endl;
  }
  void display()
  {
    cout<<"Make: "<<make<<endl;  
    cout<<"Model: "<<model<<endl;
    cout<<"Speed: "<<speed<<endl;
  }  
};
int main()
{
  cout<<"----------        CAR   DETAILS        ----------"<<endl;
  Car car("Toyota", "2021", 60, 50);
  car.accelerate();
  car.brake();
  car.CalculateFuelEfficiency();
  car.display();
  cout<<"----------        TRUCK   DETAILS        ----------"<<endl;
  Truck truck("Ford", "2023", 30, 100);
  truck.accelerate();
  truck.brake();
  truck.CalculateFuelEfficiency();
  truck.display();
  return 0;
}
