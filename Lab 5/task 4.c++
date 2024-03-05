#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
private:
  int accountNumber;
  string accountHolderName;
  double balance;
public:
  BankAccount(int accountNumber, string accountHolderName, double balance)
  {
    this->accountNumber=accountNumber;
    this->accountHolderName=accountHolderName;
    this->balance=balance;
  }
  void deposite(double amount)
  {
    balance+=amount;
  }
  void withdraw(double amount)
  {
    if(amount<=balance)
    {
      balance-=amount;
    }
    else
    {
      cout<<"Insufficient balance"<<endl;
    }
  }
  void display()
  {
    cout<<"Account Number: "<<accountNumber<<endl;
    cout<<"Account Holder Name: "<<accountHolderName<<endl;
    cout<<"Balance: "<<balance<<endl;
  }
};
int main()
{
  BankAccount account[3]={BankAccount(1001,"Sadaqat",1000),BankAccount(1002,"Asad",2000),BankAccount(1003,"Farhan",3000) };
  for(int i=0;i<3;i++)
  {
    account[i].display();
  }
  for(int i=0;i<3;i++) 
  {
      account[i].deposite(500.0);
      cout << "After deposit:" << endl;
      account[i].display();
      account[i].withdraw(200.0);
      cout << "After withdrawal:" << endl;
      account[i].display();
      cout << endl;
  }
  return 0;
}
