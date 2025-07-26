#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n >> m;
    int val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        q.push(val);
    }

    if (n != m)
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = true;
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
        cout << ((flag) ? "YES" : "NO") << endl;
    }
    return 0;
}