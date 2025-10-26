// problem link : https://judge.yosupo.jp/problem/double_ended_priority_queue


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
using namespace std;

int main ()
{
    fastIO();
 
    int n, m;
    cin >> n >> m;
    multiset<int> ml;

    loop(0,n - 1,i)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }

    while(m--)
    {
        int cmd; cin >> cmd;
        if (cmd == 0)
        {
            int x; cin >> x;
            ml.insert(x);
        }
        else if(cmd == 2)
        {
            auto it = ml.end();
            it--;
            cout << *it << nl;
            ml.erase(it);
        }
        else if (cmd == 1)
        {
            auto it = ml.begin();
            cout << *it << nl;
            ml.erase(it);
        }
    }
    return 0;
}