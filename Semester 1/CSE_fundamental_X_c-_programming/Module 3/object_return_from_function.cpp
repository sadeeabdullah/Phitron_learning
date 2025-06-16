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
Student fun(){
    Student karim(23, 5, 3.4);
    return karim;
}
int main()
{
    Student rahim(45, 3, 5.8);
    Student obj = fun();


    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;


    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}
