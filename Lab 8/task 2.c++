// 23k-0077
// Sajid Ali

#include<iostream>
#include<string>
using namespace std;
class Character
{
private:
  int health;
  int damage;
public:
  Character(int health, int damage)
  {
    this->health = health;
    this->damage = damage;
  }
  void display()
  {
    cout<<"Character"<<endl;
    cout<<"Health: " <<health<<endl;
    cout<<"Damage: " <<damage<<endl;
  }
};
class Enemy : public Character
{
public:
  Enemy(int health, int damage) : Character(health, damage) {}
  void display()
  {
    cout<<"Enemy"<<endl;
    Character::display();
  }
};
class Player : public Character
{
public:
  Player(int health, int damage) : Character(health, damage) {}
  void display()
  {
    cout<<"Player"<<endl;
    Character::display();
  }
};
class Wizard : public Player
{
private:
  int magicPower;
  string spells;
public:
  Wizard(int health, int damage, int magicPower, string spells) : Player(health, damage) {}
  void display()
  {
    cout<<"Wizard"<<endl;
    Player::display();
    cout<<"Magic Power: " <<magicPower<<endl;
    cout<<"Spells: " <<spells<<endl;
  }
};
int main()
{
  Wizard wizard(100, 20, 50, "Wind Tornado");
  wizard.display();
  return 0;
}
