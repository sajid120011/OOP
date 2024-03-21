#include<iostream>
#include<string>
using namespace std;
class Course
{
private:
  string courseCode;
  string courseName;
  int courseCreditHours;
public:
  Course(string cCode, string cName, int cCH)
  {
    courseCode = cCode;
    courseName = cName;
    courseCreditHours = cCH;
  }
  string getCourseCode()
  {
    return courseCode;
  }
  string getCourseName()
  {
    return courseName;
  }
  int getCourseCreditHours()
  {
    return courseCreditHours;
  }
};
class Student
{
private:
  string studentID;
  string studentName;
  Course* course[5];
  int countCourses;
public:
  Student(string sID, string sName, int cCount)
  {
    studentID = sID;
    studentName = sName;
    countCourses = cCount;
  }
  void enroll(Course* c)
  {
    if(countCourses < 5)
    {
      course[countCourses] = c;
      countCourses++;
    }
    else
    {
      cout<<"Student has already enrolled in 5 courses"<<endl;
    }
  }
  void drop(Course* c)
  {
    for(int i=0; i<countCourses; i++)
    {
      if(course[i] == c)
      {
        for(int j=i; j<countCourses-1; j++)
        {
          course[j] = course[j+1];
        }
        countCourses--;
        break;
      }
    }
  }
  int getTotalCreditHours() const
  {
    int total = 0;
    for(int i=0; i<countCourses; i++)
    {
      total += course[i]->getCourseCreditHours();    
    }
    return total;
  }
  void printEnrolledCourses()
  {
    cout<<"Enrolled Courses for "<<studentName<<" ("<<studentID<<")"<<endl;
    for(int i=0; i<countCourses; i++)
    {
      cout<<"Course Code: "<<course[i]->getCourseCode()<<"\nCourse Name: "<<course[i]->getCourseName()<<"\nCredit Hours: "<<course[i]->getCourseCreditHours()<<endl;    
    }
  }
};
int main()
{
  Course* c1 = new Course("CSC101", "Introduction to C++", 3);
  Course* c2 = new Course("CSC102", "Introduction to Data Structures", 4);
  Course* c3 = new Course("CSC103", "Introduction to Algorithms", 3);
  Student* s1 = new Student("S001", "John Doe", 0);
  s1->enroll(c1);
  s1->enroll(c2);
  s1->enroll(c3);
  s1->printEnrolledCourses();
  s1->drop(c2);
  s1->printEnrolledCourses();
  cout<<"Total Credit Hours: "<<s1->getTotalCreditHours()<<endl;
  return 0;
}
