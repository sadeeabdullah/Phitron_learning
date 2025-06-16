#include <bits/stdc++.h>
using namespace std;

//declaring class
class Student{

    public:    // allowing the acces
    char name [100];
    int roll;
    char section;
    int math_marks;
    int cls;

    //creating constructor : constructor is a special type of function that dont need any type declaration we just have to use the same name as the class
    Student(char name[],int roll, char section, int math_marks, int cls){
        strcpy((*this).name,name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};
int main()
{

    Student rahim("rahim",50,'b',56,5);
    Student alim("alim",59,'b',58,5);
    Student alif("alif",56,'b',78,5);
    
    int max_math_marks =max(max(rahim.math_marks,alim.math_marks),alif.math_marks);

    (max_math_marks == rahim.math_marks)?
    cout << rahim.name : (max_math_marks == alim.math_marks) ?
    cout << alim.name : cout << alif.name;


    return 0;
}