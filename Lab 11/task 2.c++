#include<iostream>
#include<string>
using namespace std;
class Account
{
protected:
  int accountNumber;
  double balance;
public:
  Account(int account, double Balance)
  {
    accountNumber = account;
    balance = Balance;
  }
  virtual void deposit(double amount) = 0;
  virtual void withdraw(double amount) = 0;
  virtual void calculateInterest() = 0;
  double getBalance()
  {
    return balance;
  }
  int getAccountNumber()
  {
    return accountNumber;
  }
};
class savingAccount : public Account
{
private:
  double interestRate;
public:
  savingAccount(int account, double Balance, double rate) : Account(account, Balance)
  {
    interestRate = rate;
  }
  void deposit(double amount) override
  {
    balance += amount;  
  }  
  void withdraw(double amount) override
  {
    if (amount <= balance)
    {
      balance -= amount;
    }
    else
    {
      cout<<"Insufficient balance"<<endl;
    }
  }
  void calculateInterest() override
  {
    double interest = balance * interestRate / 100;
    balance += interest;    
  }
};
class currentAccount : public Account
{
private:
  double overdraftLimit;
public:
  currentAccount(int account, double Balance, double limit) : Account(account, Balance)
  {
    overdraftLimit = limit;
  }
  void deposit(double amount) override
  {
    balance += amount;
  }
  void withdraw(double amount) override
  {
    if (amount <= balance + overdraftLimit)
    {
      balance -= amount;
    }
    else
    {
      cout<<"Balance exceeds overdraft limit"<<endl;
    }
  }
  void calculateInterest() override
  {
    cout<<"No interest for current account"<<endl;
  }
};
int main()
{
  savingAccount saving(1001, 1000, 5);
  saving.deposit(500);
  saving.withdraw(200);
  saving.calculateInterest();
  cout<<"Saving account balance: "<<saving.getBalance()<<endl;
  currentAccount current(1002, 2000, 500);
  current.deposit(1000);
  current.withdraw(3000);
  current.calculateInterest();
  cout<<"Current account balance: "<<current.getBalance()<<endl;
  return 0;
}
