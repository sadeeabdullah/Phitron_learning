#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int val; 
        cin >> val;
        q.push(val);
    }

    stack<int> mediator;
    while (!q.empty())
    {
        mediator.push(q.front());
        q.pop();
    }

    queue<int> newQ;
    while(!mediator.empty())
    {
        newQ.push(mediator.top());
        mediator.pop();
    }

    while(!newQ.empty())
    {
        cout << newQ.front() << " ";
        newQ.pop();
    }
    
    return 0;
}