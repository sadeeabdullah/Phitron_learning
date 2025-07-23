#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    stack<int> st;
    stack<int> newSt;
    for (int i = 0; i < n; i++)
    {
        int val; 
        cin >> val;
        st.push(val);
    }

    stack<int> mediator;
    while (!st.empty())
    {
        mediator.push(st.top());
        st.pop();
    }

    // while (!mediator.empty())
    // {
    //     newSt.push(mediator.top());
    //     mediator.pop();
    // }

    while(!mediator.empty())
    {
        cout << mediator.top() << " ";
        mediator.pop();
    }
    
    return 0;
}