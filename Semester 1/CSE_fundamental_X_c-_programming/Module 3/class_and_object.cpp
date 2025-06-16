#include <bits/stdc++.h>
using namespace std;
//writting class
class Student{
    public:
    char name[100]; // 100 byte
    int roll; // 4 byte
    char sec; //1 byte
    double gpa; //8byte
}; // don't forget to use semicolon after class
int main(){
    // Student a;
    // //a.name = "sadee"; // we can assign name like other because it is an array and as we know it doesn't behave like other datatype
    // //char s[100] = "sadee" // we can assign value to the array while declaring but we can't define the value after decalaration

    // // so what we can do it simply copy the array to the array we want to store the string
    // // taking one extra array for that 
    // char tmp[100] = "sadee";
    // strcpy(a.name, tmp); // it will copy the array to a.name
    // a.roll = 10;
    // a.gpa = 3.5;

    // cout << a.name << " " << a.roll << " " << a.gpa << endl;


    // lets do the same thing by taking input from the user
    Student a, b;
    //cin >> a.name >> a.roll >> a.gpa; // we are not assigning value here we taking input
    //cin >> b.name >> b.roll >> b.gpa; // we are not assigning value here we taking input

    //but when we have two or more word in a string we cannot input this as cin we know it will only take the first word and stopped when it get a space
    // solution is getline
    cin.getline(a.name, 100);
    // cin.ignore(getline);
    cin >> a.roll >> a.gpa; 
    cin.ignore(); // this will ignore the enter from the input as we know getline takes the enter from input

    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;
    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;
    return 0;
}