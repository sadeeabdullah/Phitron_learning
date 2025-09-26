#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

class Student
{
public:
    string name;
    int roll, marks;
Student() {}
    // creating constructor for taking input
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

bool cmp(Student l, Student r)
{
    return (l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks;
}
int main()
{
    fastIO();

    int n;
    cin >> n;

    vector<Student> arr(n);
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        arr[i] = Student(name, roll, marks);
    }

    sort(arr.begin(), arr.end(), cmp);


    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }
    return 0;
}