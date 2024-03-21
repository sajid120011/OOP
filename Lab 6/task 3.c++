// 23k-0077
// Sajid Ali

#include<iostream>
#include<string>
using namespace std;
class Appointment
{
private:
  string customerName;
  static int appointmentsMade;
  static float totalEarnings;
  float cost;
public:
  Appointment(string customer, float Cost)
  {
    customerName = customer;
    cost = Cost;
    appointmentsMade++;
    totalEarnings += cost;
  }
  string getName()
  {
    return customerName;
  }
  float getCost()
  {
    return cost;
  }
  static int getAppointmentsMade()
  {
    return appointmentsMade;
  }
  static float getTotalEarnings()
  {
    return totalEarnings;
  }
  static float CalculateAverage()
  {
    if(appointmentsMade == 0)
    {
      return 0;
    }
    return totalEarnings/appointmentsMade;
  }
};
int Appointment::appointmentsMade = 0;
float Appointment::totalEarnings = 0;
int main()
{
  Appointment *appt1 = new Appointment("John", 50);
  Appointment *appt2 = new Appointment("Mary", 75);
  Appointment *appt3 = new Appointment("Bob", 100);
  cout << "Total earnings: " << Appointment::getTotalEarnings() << endl;
  cout << "Average earnings: " << Appointment::CalculateAverage() << endl;

  // code is giving error without them
  delete appt1;
  delete appt2;
  delete appt3;
  return 0;
}
