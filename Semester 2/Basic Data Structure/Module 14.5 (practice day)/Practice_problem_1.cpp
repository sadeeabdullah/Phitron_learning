#include <bits/stdc++.h>
using namespace std;

// using vector to create stack
class myStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    int n;
    cin >> n;
    myStack st1;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }
    int m;
    cin >> m;
    myStack st2;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }

    if (n != m)
    {
        cout << "NO";
    }
    else
    {
        bool flag = true;
        while (!st1.empty())
        {
            if(st1.top() != st2.top())
            {
                flag = false;
                break;
            }
            st1.pop();
            st2.pop();
        }
        cout << ((flag) ? "YES" : "NO");
    }
    return 0;
}