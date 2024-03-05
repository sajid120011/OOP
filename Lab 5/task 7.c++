#include<iostream>
#include<string>
using namespace std;
class MenuItem
{
private:
  string foodName;
  double foodPrice;
public:
  MenuItem(string FoodName, double FoodPrice) : foodName(FoodName), foodPrice(FoodPrice) {}
  string getFoodName() const
  { 
    return foodName; 
  }
  double getFoodPrice() const
  { 
    return foodPrice; 
  }
};
class Menu
{
private:
  MenuItem* menuItems[10];
  int itemCount;
public:
  Menu() : itemCount(0) {}
  void addItem(MenuItem* item)
  {
    if (itemCount<10)
    {
      menuItems[itemCount]=item;
      itemCount++;
    }
    else
    {
      cout<<"Menu is full. Cannot add more items."<<endl;
    }
  }
  void displayMenu()
  {
    cout<<"Menu:"<<endl;
    for (int i=0; i<itemCount; i++)
    {
      cout<<i+1<<"). "<<menuItems[i]->getFoodName()<<" - $"<<endl;   
    }
  }
};
class Payment
{
private:
  double amount;
public:
  Payment(double Amount) : amount(Amount) {}
  double getAmount() const
  { 
    return amount; 
  }
};
class Order
{
private:
  MenuItem* menuItem;
  int itemCount;
  Payment payment;
public:
  Order(MenuItem* MenuItem, int ItemCount, Payment Payment) : menuItem(MenuItem), itemCount(ItemCount), payment(Payment) {}
  double calculateTotal() const
  {
    double total=0.0;
    for (int i=0; i<itemCount; i++)
    {
      total+=menuItem[i].getFoodPrice();
    }
    return total;
  }
};
int main()
{
  MenuItem item1("Burger", 5.99);
  MenuItem item2("Pizza", 8.99);
  MenuItem item3("Salad", 4.99);
  MenuItem item4("Fries", 2.99);
  Menu menu;
  menu.addItem(&item1);
  menu.addItem(&item2);
  menu.addItem(&item3);
  menu.addItem(&item4);
  menu.displayMenu();
  Payment payment(20.0);
  Order order(&item1, 2, payment);
  double total=order.calculateTotal();
  cout<<"Total amount: $"<<total<<endl;
  return 0;
}
