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
        tInt(n);
        tStr(s);
        ll cnt11= 0, cnt00 = 0;
        for(int i = 0; i< n -1; i++)
        {
            if (s[i] == s[i + 1])
            {
                if (s[i] == '0')
                    cnt00++;
                else
                    cnt11++;
            }
        }

        if (cnt11 >= cnt00)
        {
            cout << 0 << nl;
        }
        else
        {
            cout << (cnt00 - cnt11 + 1) / 2 << nl;
        }
    }
    return 0;
}