#include <bits/stdc++.h>
using namespace std;

// making class for priority queue
class Student{
    public:
    string name;
    int roll;
    int mark;

    // constructor here
    Student(string name, int roll, int mark)
    {
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
};

// making the compare class for comparing into the priority queue

class cmp{
    public:
    bool operator()(Student l, Student r)
    {
        if (l.mark < r.mark)
            return true;
        else if (l.mark > r.mark)
            return false;
        else
        {
            return l.roll > r.roll;
        }
    }
};

int main()
{
    priority_queue<Student,vector<Student>, cmp> pq;

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string name;
        int roll, mark;
        cin >> name >> roll >> mark;
        Student obj(name,roll,mark);
        pq.push(obj);
    }

    // printing the priority queue
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " <<  pq.top().mark << endl;
        pq.pop();
    }

    return 0;
}