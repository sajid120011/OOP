#include<iostream>
#include<string>
using namespace std;
class ValidateString
{
private:
  string str;
public:
  ValidateString(string s)
  {
    str = s;
  }
// Function to check if the string is invalid.
  bool validate()
  {
    for(char ch : str)
    {
      if(!((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch=' ')))
      {
        cout<<"Invalid string"<<endl;
        return false;
      }
    }

    cout<<"Valid String"<<endl;
    return true;
  }
};
int main()
{
  string s;
  cout<<"Enter a string: "<<endl;
  getline(cin,s);
  ValidateString obj(s);
  obj.validate();
  return 0;
}

