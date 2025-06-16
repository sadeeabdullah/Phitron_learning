#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r) // here we want to sort the array ascending order 
{
    // if (l.marks < r.marks)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    //or we can return the condition : you know condition return true or false
    // return l.marks <= r.marks;


    // if (l.marks < r.marks)
    // {
    //     return true;
    // }
    // else if(l.marks > r.marks)
    // {
    //     return false;
    // }
    // else{
    // //     if(l.roll < r.roll)
    // //     {
    // //         return true;
    // //     }
    // //     else
    // //     {
    // //         return false;
    // //     }
    // // }
    // return l.roll < r.roll;



    //or you can use this short way

    // if(l.marks == r.marks)
    // {
    //     return l.roll < r.roll;
    // }
    // else{
    //     return l.marks < r.marks;
    // }



    // or
    return (l.marks == r.marks) ? l.roll < r.roll : l.marks < r.marks;
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a + n, cmp); // it will take another function as parameter like we took greater<int>() function for sorting an integer array in descending order
        // but we have to define the function that we want ascending or descending order sorting here
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}