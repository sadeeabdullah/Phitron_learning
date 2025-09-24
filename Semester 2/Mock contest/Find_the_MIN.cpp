#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>, cmp> pq;

    int query;
    cin >> query;
    while (query--)
    {
        int i;
        cin >> i;
        if (i == 1)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        else
        {
            if (pq.empty())
            {
                cout << "empty" << '\n';
            }
            else
            {
                int val = pq.top();
                cout << val << '\n';

                // erase the next value if same
                while (!pq.empty() && pq.top() == val)
                {
                    pq.pop();
                }
            }
        }
    }
    return 0;
}