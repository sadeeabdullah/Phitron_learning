// problem link : https://codeforces.com/problemset/problem/1742/D

#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define testCase{} int tc; cin >> tc; while(tc--)
#define tInt(var) int var; cin >> var;
#define tLL(var)  ll var;  cin >> var;
#define tStr(var) string var; cin >> var;

using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool isCoPrime(int a, int b)
{
    if(__gcd(a, b) == 1)
    {
        return true;
    }
    return false;
}
int main ()
{
    fastIO();
 
    testCase
    {
        ll ans = -1;
        tInt(n);
        map<int, priority_queue<int>> mp;
        loop(1, n, i)
        {
            tInt(x);
            mp[x].push(i);
        }

        for(int i = 1; i <= 1000; i++)
        {
            if(mp[i].empty())
            {
                continue;
            }

            for(int j= i; j <= 1000; j++)
            {
                if(mp[j].empty())
                {
                    continue;
                }

                if(__gcd(i, j) == 1)
                {
                    ans = max(ans, 1LL *(mp[i].top() + mp[j].top()));
                }
            }
        }

        cout << ans << nl;
    }
    return 0;
}