#include <bits/stdc++.h>
using namespace std;

// creating class for student information
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

// creating comparator class for sorting
class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.marks < r.marks)
            return true;
        else if (l.marks > r.marks)
            return false;
        else
            return l.roll > r.roll;
    }
};
int main()
{
    // creating priority queue with student class , container and comparator class
    priority_queue<Student, vector<Student>, cmp> pq;

    // taking the input first
    int n;
    cin >> n;

    string name;
    int roll, marks;
    while (n--)
    {
        cin >> name >> roll >> marks;

        Student x = Student(name, roll, marks);
        pq.push(x);

    }

    int q;
    cin >> q;
    while (q--)
    {
        int cmd;
        cin >> cmd;
        string name;
        int roll, marks;
        if (cmd == 0)
        {
            cin >> name >> roll >> marks;

            Student x = Student(name, roll, marks);
            pq.push(x);

            // printing the current max data
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (cmd == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (cmd == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
            }
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
    }

    return 0;
}