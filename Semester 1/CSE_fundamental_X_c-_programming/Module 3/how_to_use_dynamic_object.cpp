#include <bits/stdc++.h>
using namespace std;

// declaring class
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

// lets return the object from a function because we returning a object so the return type also need object
Student* fun(){
    Student karim(23, 5, 3.4);
    Student *p = &karim;
    return p;
}
int main()
{
    Student rahim(45, 3, 5.8);
    Student* karim = new Student(454, 5, 5.7);


    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;


    cout << karim->roll << " " <<karim->cls << " " << karim->gpa << endl;
    /// now it is  returning a odd output 
    return 0;
}
