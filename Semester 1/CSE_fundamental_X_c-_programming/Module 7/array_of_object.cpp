#include <bits/stdc++.h>
using namespace std;

//declaring class
class Student{
    public:
    string name;
    int marks;
    int roll;
};
int main()
{

    int n; //array size
    cin >> n;
    Student a[n]; // array of object
    
    for(int i = 0; i < n ; i++)
    {
        // cin >> a[i].name >> a[i].roll >> a[i].marks ; this will work for a without space string in a object class but what will happen we have string with spaces in it.
        // we will use get line to get the string with the object



        cin.ignore();

        getline(cin, a[i].name); // but antoher issue will stay unsolved and that is it will take enter as the value of the previous input so we need to use the cin.ignore before every line
        cin >> a[i].roll >> a[i].marks ;
    }

    // showing the output
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << " " << endl;
    }
    
    return 0;
}