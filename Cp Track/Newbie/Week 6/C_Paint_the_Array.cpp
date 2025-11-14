// problem link : https://codeforces.com/contest/1618/problem/C

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

ll GCD(ll a, ll b)
{
    return __gcd(a, b);
}
int main ()
{
    fastIO();
 
    testCase
    {
        tInt(n);
        vector<ll> a,b;
        loop(1, n, i)
        {
            tLL(x);
            if(i % 2 == 0)
            {
                a.push_back(x);
            }
            else
            {
                b.push_back(x);
            }
        }

        ll gcd_a = 0;
        for(auto val : a)
        {
            gcd_a = __gcd(gcd_a, val);
        }

        ll gcd_b = 0;
        for(auto val : b)
        {
            gcd_b = __gcd(gcd_b, val);
        }

        // checking if the gcd_a can divide any part of b
        bool flag = true;
        for(auto val : b)
        {
            if(val % gcd_a == 0)
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            cout << gcd_a << nl;
        }
        else
        {
            bool flag1 = true;
            for(auto val : a)
            {
                if(val % gcd_b == 0)
                {
                    flag1 = false;
                    break;
                }
            }

            if(flag1)
            {
                cout << gcd_b << nl;
            }
            else
            {
                cout << 0 << nl;
            }
        }
    }
    return 0;
}