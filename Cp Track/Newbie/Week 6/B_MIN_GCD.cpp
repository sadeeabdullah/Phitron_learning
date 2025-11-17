//problem link :https://codeforces.com/problemset/problem/2084/B

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

int main ()
{
    fastIO();
 
    // key observation:
    // 1. we have to find the minimum value in the array
    // 2. an find other value that is divisible by minimum value because we have to find the next value gcd that is equal to the minimum value if at the end the minimum value == gcd then yes else no;

    testCase
    {
        tInt(n);
        vector<ll> v(n);
        loop(0, n - 1, i)
        {
            cin>> v[i];
        }
        sORT(v);
        ll g = 0;
        ll mn = v[0];
        loop(1, n - 1, i)
        {
            if (v[i] % mn == 0)
            {
                g = __gcd(v[i],g);
            }
        } 
        if(mn == g)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    return 0;
}