#include <bits/stdc++.h>
using namespace std;

// declaring the class
class Student
{
public: // here is the access
    int id;
    string name;
    char section;
    int total_marks;
};

int main()
{
    int t;
    cin >> t;

    //for loop for test cases
    for (int i = 0; i <t; i++)
    {
        Student topper;
        //for loop for 3 input
        for(int j = 0; j < 3; j++)
        {
            Student tmp;

            //take the input of the student
            cin >> tmp.id >> tmp.name >> tmp.section >> tmp.total_marks ;
            if(j == 0)
            {
                topper = tmp;
            }
            else
            {
                if(topper.total_marks < tmp.total_marks)
                {
                    topper = tmp;
                }
                else if(topper.total_marks == tmp.total_marks)
                {
                    if(topper.id > tmp.id)
                    {
                        topper = tmp;
                    }
                }
            }

        }

        //here printing the topper information
        cout << topper.id << " " << topper.name << " " << topper.section << " " << topper.total_marks << endl;
    }
    
    return 0;
}