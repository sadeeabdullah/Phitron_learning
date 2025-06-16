#include <bits/stdc++.h>
using namespace std;

//declaring class
class Student{
    public:
    int roll;
    int cls;
    double gpa;

    //constructor: no return type(no void or something else) function, only can be into class , className == constructor name
    Student(int r, int c, double g){
        // code
        //no need to call it it is called automatically
        roll = r;
        cls = c;
        gpa = g;
    }
};
int main(){
    //Student rahim; // it will show an error because now its a constructor class
    //rahim.roll = 10;
    //rahim.cls = 5;
    //rahim.gpa = 3.5; // we have to write a lot of line if we had to take a  lot of information about rahim or anyone else
    Student rahim(45, 3, 5.8);

    // now lets see the output
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    
    return 0;
}

//N.B. good practice is when you are taking input form the user then no need to use constructor