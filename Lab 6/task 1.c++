23k-0077
  SAjid Ali


#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
private:  
  int accountID;
  double balance;
  int* transactionHistory;
  int numTransactions;
  const int maxTransactions = 20;
public:
  BankAccount(int accountID, double balance, int maxTransactions = 20)
  {
    this->accountID = accountID;
    this->balance = balance;
    this->numTransactions = 0;
    this->transactionHistory = new int[maxTransactions];
    for (int i = 0; i < numTransactions; i++)
    {
      this->transactionHistory[i] = transactionHistory[i];
    }
  }
  BankAccount(const BankAccount& other)
  {
    this->accountID = other.accountID;
    this->balance = other.balance;
    this->numTransactions = other.numTransactions;
    this->transactionHistory = new int[other.maxTransactions];
    for (int i = 0; i < other.numTransactions; i++)
    {
      this->transactionHistory[i] = other.transactionHistory[i];
    }
  }
  ~BankAccount()
  {
    delete[] transactionHistory;
  }
  void display()
  {
    cout << "Account ID: " << accountID << endl;
    cout << "Balance: " << balance << endl;
    cout << "Transaction History: ";
    for (int i = 0; i < numTransactions; i++)
    {
      cout << transactionHistory[i] << endl;
    }
  }
  void updateTransactionHistory(int* transactionHistory, int numTransactions)
  {
    delete[] transactionHistory;
    this->transactionHistory = new int[numTransactions];
    for (int i = 0; i < numTransactions; i++)
    {
      this->transactionHistory[i] = transactionHistory[i];
    }
  }
};
int main()
{
  int transactionHistory1[] = {100, 200, 300};
  BankAccount account1(1, 1000, 3);
  cout<<"Account 1:"<<endl;
  account1.display();
  BankAccount account2(account1);
  cout<<"Account 2:"<<endl;
  account2.display();
  account1.updateTransactionHistory(transactionHistory1, 3);
  cout<<"Updated transaction history for account 1:"<<endl;
  account1.display();
  account2.updateTransactionHistory(transactionHistory1, 2);
  cout<<"Updated transaction history for account 2:"<<endl;
  account2.display();
  return 0;
}
