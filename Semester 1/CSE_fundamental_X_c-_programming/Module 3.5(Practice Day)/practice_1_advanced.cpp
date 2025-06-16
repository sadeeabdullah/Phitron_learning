#include <bits/stdc++.h>
using namespace std;

//declaring class
class Student{

    public:    // allowing the acces
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

};

int main()
{

    int n;
    cin >> n;
    Student topper;

    for(int i = 1; i <= n; i++){
        // now we have to take the input we are storing the object in tmp object
        Student temp;
        cin >> temp.roll >> temp.name >> temp.section >> temp.math_marks >> temp.cls;

        // cout << temp.roll << " " << temp.name << " " << temp.section << " " << temp.math_marks << " " << temp.cls << endl;

        if(i == 1)
        {
            topper = temp;
        }else
        {
            if(topper.math_marks < temp.math_marks)
            {
                topper = temp;
            }
            else if(temp.math_marks == topper.math_marks)
            {
                if(temp.roll < topper.roll)
                {
                    topper = temp;
                }
            }
        }


    }

    cout << topper.name;

    return 0;
}