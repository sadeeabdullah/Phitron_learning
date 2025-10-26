// problem set : https://codeforces.com/problemset/problem/1165/B

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
 
    int n;  cin >> n;
    multiset<int> s;
    for(int i = 0; i < n; i++)
    {
        int x;  cin >> x;

        s.insert(x);
    }

    int i = 1;

    bool flag = true;
    int cnt = 0;
    while(flag)
    {
        auto it = s.lower_bound(i);
        if (it != s.end())
        {
            cnt++;
            s.erase(it);
        }
        else
        {
            flag = false;
        }
        i++;
    }

    cout << cnt << nl;
    return 0;
}