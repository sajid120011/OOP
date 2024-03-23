#include<iostream>
#include<string>
using namespace std;
class Position
{
private:
  float x, y, z;
public:
  Position(float x, float y, float z)
  {
    this->x = x;
    this->y = y;
    this->z = z;
  }
  void display()
  {
    cout<<"x cordinate: "<<x<<endl;
    cout<<"y cordinate: "<<y<<endl;
    cout<<"z cordinate: "<<z<<endl;
  }
};
class Health
{
private:
  int health;
public:
  Health(int health)
  {
    this->health = health;
  }
  void display()
  {
    cout<<"Health: "<<health<<endl;
  }
};
class Character : public Position, public Health
{
private:
  string name;
  int damage;
  string type;  // e.g: Mage, Warrior, Archer, etc
public:
  Character(string name, int health, int damage, string type, float x, float y, float z) : Position(x, y, z), Health(health)
  {
    this->name = name;
    this->damage = damage;
    this->type = type;
  }
  void display()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Damage: "<<damage<<endl;
    cout<<"Type: "<<type<<endl;
    Position::display();
    Health::display();
  }
};
int main()
{
  Character c1("Knight King", 100, 10, "Mage", 0, 0, 0);
  c1.display();
  return 0;
}
