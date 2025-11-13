//probelm link : https://codeforces.com/problemset/problem/1399/C

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
        vector<int> w(n);
        loop(0, n - 1, i)
        {
            cin >> w[i];
        }

        map<int, int> mp;
        for(auto val : w)
        {
            mp[val]++;
        }


        int max_team = 0;

        for(int i = 2; i <= 2 * n; i++)
        {
            int total = 0 ;
            for (auto j : mp)
            {
                int other = i - j.first;
                if (other >= 1 && mp.count(other))
                {
                    total += min(j.second, mp[other]);
                }
            }
            total /= 2;
            max_team = max(max_team, total);
        }
        cout << max_team << nl;

    }
    return 0;
}