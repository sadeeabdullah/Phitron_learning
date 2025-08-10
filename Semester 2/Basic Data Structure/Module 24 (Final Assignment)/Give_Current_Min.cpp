#include <bits/stdc++.h>
using namespace std;
int main()
{
    // taking min priority queue
    priority_queue<int, vector<int>, greater<>> pq;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        pq.push(val);
    }

    int queries;
    cin >> queries;
    while (queries--)
    {
        int cmd;
        cin >> cmd;
        int x;
        if (cmd == 0)
        {
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (cmd == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
        else if (cmd == 2)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                    cout << pq.top() << endl;
            }
        }
    }
    return 0;
}