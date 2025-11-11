// problemlink : https://vjudge.net/contest/765715#problem/B


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
    testCase
    {
        vector<char> a(6);
        loop(0, 5, i)
        {
            cin>> a[i];
        }

        bool flag = false;

        for(int i = 0; i <= 3; i++)
        {
            if(a[i] == 'W' && a[i + 1] == 'W' && a[i + 2] == 'W')
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            yes;
        }
        else
            no;
    }
    return 0;
}