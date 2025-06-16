#include <bits/stdc++.h>
using namespace std;

// declaring class
class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // if you want to keep the parameter name you have to use this keyword

    // constructor: no return type(no void or something else) function, only can be into class , className == constructor name

    Student(int roll, int cls, double gpa)
    {
        // what if we take parameter as the same name? : it will print some garbage value because of the naming confliction

        // to solve the confliction c++ has pointer "this" it will point the object or rahim here. So we have deference first to assign value in it
        
        (*this).roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;

        // in vs code if you just write this.roll it will autocorrect the syntaxt to this->roll
        // this->roll (shortcut) = (*this).roll
    }
};
int main()
{
    Student rahim(45, 3, 5.8);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    return 0;
}
