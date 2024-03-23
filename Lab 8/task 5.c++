#include<iostream>
#include<string>
using namespace std;
class Vehicle
{
private:
  string make;
  string model;
  int year;
public:
  Vehicle(string make, string model, int year)
  {
    this->make = make;
    this->model = model;
    this->year = year;
  }
  void display()
  {
    cout<<"Make: "<<make<<endl;
    cout<<"Model: "<<model<<endl;
    cout<<"Year: "<<year<<endl;
  }
};
class Car : public Vehicle
{
private:
  int doors;
  float fuelEfficiency;
public:
  Car(string make, string model, int year, int doors, float fuelEfficiency) : Vehicle(make, model, year)
  {
    this->doors = doors;
    this->fuelEfficiency = fuelEfficiency;
  }
  void display()
  {
    Vehicle::display();
    cout<<"Doors: "<<doors<<endl;
    cout<<"Fuel Efficiency: "<<fuelEfficiency<<"liter"<<endl;
  }
};
class ElectricCar : public Car
{
private:
  float batteryLife;
public:
  ElectricCar(string make, string model, int year, int doors, float fuelEfficiency, float batteryLife) : Car(make, model, year, doors, fuelEfficiency)
  {
    this->batteryLife = batteryLife;
  }
  void display()
  {
    Car::display();
    cout<<"Battery Life: "<<batteryLife<<"hours"<<endl;
  }
};
int main()
{
  ElectricCar ecar("Tesla", "Tesla", 2020, 4, 10.5, 24);
  ecar.display();
  return 0;
}
