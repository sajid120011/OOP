// 23k-0077
// Sajid Ali

#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
  int employeeID;
  string empoyeeName;
public:
  Employee(int id, string name)
  {
    employeeID = id;
    empoyeeName = name;
  }
  virtual double calculatePay() const = 0;
  virtual void displayDetails()
  {
    cout<<"Employee ID: "<<employeeID<<endl;
    cout<<"Employee Name: "<<empoyeeName<<endl;
  }
};
class FullTimeEmployee : public Employee
{
private:
  double monthlySalary;
public:
  FullTimeEmployee(int id, string name, double salary) : Employee(id, name)
  {
    monthlySalary = salary;
  }
  double calculatePay() const
  {
    return monthlySalary;
  }
  void displayDetails()
  {
    Employee::displayDetails();
    cout<<"Monthly Salary: "<<monthlySalary<<endl;
  }
};
class PartTimeEmployee : public Employee
{
private:
  double hourlyWage;
  int hoursWorked;
public:
  PartTimeEmployee(int id, string name, double wage, int hours) : Employee(id, name)
  {
    hourlyWage = wage;
    hoursWorked = hours;
  }
  double calculatePay() const
  {
    return hourlyWage * hoursWorked;
  }  
  void displayDetails()
  {
    Employee::displayDetails();
    cout<<"Hourly Wage: "<<hourlyWage<<endl;
    cout<<"Hours Worked: "<<hoursWorked<<endl;
  }
};
int main()
{
  FullTimeEmployee fullTimeEmployee(1, "John Elia", 5000);
  PartTimeEmployee partTimeEmployee(2, "Steve smith", 20, 40);
  Employee* employees[2] = {&fullTimeEmployee, &partTimeEmployee};
  for (int i = 0; i < 2; i++)
  {
    employees[i]->displayDetails();
    cout<<"Pay: "<<employees[i]->calculatePay()<<endl;
  }
  return 0;
}
