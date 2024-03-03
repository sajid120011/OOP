//23k-0077
//Sajid Ali




#include<iostream>
#include<string>
using namespace std;
class LoanHelper
{
private:
  double rate;
  double amount;
  double amountOfMonths;
public:
  LoanHelper(double rate, double amount, double amountOfMonths) : rate(rate), amount(amount), amountOfMonths(amountOfMonths) {}
  double calculate()
  {
    double MonthlyAmount=amount/amountOfMonths;
    MonthlyAmount*=rate;
    return MonthlyAmount;
  }
  void display()
  {
    cout<<"You have to pay "<<calculate()<<" every month for "<<amountOfMonths<<" months to repay your loan."<<endl;
  }
};
int main()
{
  double rate, amount, amountOfMonths;
  cout<<"Enter the rate of interest: ";
  cin>>rate;
  cout<<"Enter the amount of loan: ";
  cin>>amount;
  cout<<"Enter the amount of months: ";
  cin>>amountOfMonths;
  // According to the provided formula, answer doesn't match the expectation.
  LoanHelper loan(rate, amount, amountOfMonths);
  loan.display();
  return 0;
}
