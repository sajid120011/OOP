// 23k-0077
// Sajid Ali

#include<iostream>
#include<string>
using namespace std;
class Person
{
private:
  int age;
  string name;
public:
  Person(int age, string name)
  {
    this->age = age;
    this->name = name;
  }
  void display()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
  }
};
class Student : public Person
{
private:
  int studentID;
  char gradeLevel;
public:
  Student(int age, string name, int studentID, char gradeLevel) : Person(age, name)
  {
    this->studentID = studentID;
    this->gradeLevel = gradeLevel;
  }
  void display()
  {
    Person::display();
    cout<<"Student ID: "<<studentID<<endl;
    cout<<"Grade Level: "<<gradeLevel<<endl;
  }
};
class Teacher : public Person
{
private:
  string subject;
  int roomNumber;
public:
  Teacher(string subject, int roomNumber, int age, string name) : Person(age, name)
  {
    this->subject = subject;
    this->roomNumber = roomNumber;
  }
  void display()
  {
    Person::display();
    cout<<"Subject: "<<subject<<endl;
    cout<<"Room Number: "<<roomNumber<<endl;
  }
};
class GraduateStudent : public Student, public Teacher
{
public:
  GraduateStudent(int age, string name, int studentID, char gradeLevel, string subject, int roomNumber) : Student(age, name, studentID, gradeLevel), Teacher(subject, roomNumber, age, name) {}
  void display()
  {
    Student::display();
    Teacher::display();
  }
};
int main()
{
  GraduateStudent g1(20, "Farooq", 1234, 'A', "Computer Science", 0077);
  g1.display();
  return 0;
}
