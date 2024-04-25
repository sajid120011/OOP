#include<iostream>
#include<string>
using namespace std;
class Platform;
class Server;
class Logo
{
private:
  string logo;
public:
  Logo() : logo("Blue Bird") {}
  void changeLogo(string newLogo)
  {
    if(newLogo=="Doge Coin")
    {
      logo = newLogo;
      cout<<"Logo Changed Succesfuly"<<endl;
    }
    else
    {
      cout<<"Not what elon musk wanted"<<endl;  
    }
  }
string getLogo()
  {
    return logo;
  }
};
class Platform
{
private:
  string name;
  int user;
public:
  Platform() : name("Twitter"), user(2000000) {}
  void display(Logo& l)
  {
    cout<<"Platform Name: "<<name<<endl;
    cout<<"Toatl Number of Users: "<<user<<endl;
    cout<<"Logo: "<<l.getLogo()<<endl;
  }
};
class Server
{
private:
  string location;
  string status;
public:
  Server() : location("USA"), status("Online") {}
  void display(Logo& l)
  {
    cout<<"Server Location: "<<location<<endl;
    cout<<"Server Status: "<<status<<endl;
    cout<<"Logo: "<<l.getLogo()<<endl;
  }
};
int main()
{
  Logo logo;
  Platform p;
  Server s;
  cout<<"Before logo change"<<endl;
  p.display(logo);
  s.display(logo);
  cout<<"After logo change"<<endl;
  logo.changeLogo("Doge Coin");
  p.display(logo);
  s.display(logo);
  return 0;
}
