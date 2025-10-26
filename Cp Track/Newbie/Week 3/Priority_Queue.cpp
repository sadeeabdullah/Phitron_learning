// problem link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_2_C

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define loop(start, end, var) for (int var = (start); var <= (end); var++)
using namespace std;

int main()
{
    fastIO();

    int n, m;
    cin >> n >> m;
    vector<priority_queue<int>> pq(n);
    
    while(m--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            int t, x;
            cin >> t >> x;
            pq[t].push(x);
        }
        else if (cmd == 1)
        {
            int t;
            cin >> t;
            if (!pq[t].empty())
            {
                cout << pq[t].top() <<nl;
            }
        }
        else if (cmd == 2)
        {
            int t;
            cin >> t;
            if (!pq[t].empty())
            {
                pq[t].pop();
            }
            
        }
    }


    return 0;
}