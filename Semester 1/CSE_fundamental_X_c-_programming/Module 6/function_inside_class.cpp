#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int math_marks;
    int english_marks;

    Student(string name, int roll,int math_marks, int english_marks)
    {
        this->name = name;
        this->roll = roll;
        this->english_marks = english_marks;
        this->math_marks = math_marks;
    }

    //declaring and defining
    void hello()
    {
        cout << "hello from " << name << endl;
    }
    void total_marks()
    {
        cout << "total marks of " << name << math_marks + english_marks << endl;
    }
};
int main(){

    Student sakib("sakib ahmed", 23,75, 76);

    cout << sakib.name << " " <<sakib.roll << endl;
    sakib.hello();
    sakib.total_marks();

    Student rakib ( "rakib ahmed", 25,67, 86);
    rakib.hello();
    rakib.total_marks();
    
    return 0;
}