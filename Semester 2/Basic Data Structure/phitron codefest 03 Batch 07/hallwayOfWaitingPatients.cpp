#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;

    int sz = 0;

    int qu;
    cin >> qu;

    string patientName;
    string lastArrive = "";

    while (qu--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "ARRIVE")
        {
            cin >> patientName;
            q.push(patientName);
            lastArrive = patientName;
            sz++;
        }
        else if (cmd == "SERVE")
        {
            if(!q.empty())
            {

                q.pop();
                sz--;
            }
        }
        else if (cmd == "FIRST")
        {
            if (q.empty())
            {
                cout << "No Patients" << endl;
            }
            else
            cout << q.front() << endl;
        }
        else if (cmd == "LAST")
        {
            if (q.empty())
            {
                cout << "No Patients" << endl;
            }
            else
            cout << lastArrive << endl;
        }
        else if (cmd == "SHOW")
        {
            if (q.empty())
            {
                cout << "No Patients" << endl;
            }
            else{

                queue<string> cp_q;
                
                cp_q = q;
                while (!cp_q.empty())
                {
                    cout << cp_q.front() << " ";
                    cp_q.pop();
                }
                cout << endl;
            }
        }
        else if (cmd == "COUNT")
        {
            cout << sz << endl;
        }
    }
    return 0;
}