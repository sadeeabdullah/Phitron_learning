// problem link : https://vjudge.net/contest/765715#problem/E

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define loop(start, end, var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define testCase \
    {            \
    }            \
    int tc;      \
    cin >> tc;   \
    while (tc--)
#define tInt(var) \
    int var;      \
    cin >> var;
#define tLL(var) \
    ll var;      \
    cin >> var;
#define tStr(var) \
    string var;   \
    cin >> var;

using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    fastIO();

    testCase
    {
        vector<int> v;
        tInt(n);
        tInt(q);
        tStr(s);
        map<char, int> mp;

        ll ans = 0, l = 0, r = 0;
        while (r < n)
        {
            mp[s[r]]++;

            ll sz = mp.size();
            if (sz == 1)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {
                while (mp.size() > 1 && l <= r)
                {
                    mp[s[l]]--;
                    if (mp[s[l]] == 0)
                    {
                        mp.erase(s[l]);
                    }
                    l++;
                }
            }

            r++;
        }
        v.push_back(ans);

        while (q--)
        {
            n++;
            tStr(ns);
            s += ns;
            while (r < n)
            {
                mp[s[r]]++;

                ll sz = mp.size();
                if (sz == 1)
                {
                    ans = max(ans, r - l + 1);
                }
                else
                {
                    while (mp.size() > 1 && l <= r)
                    {
                        mp[s[l]]--;
                        if (mp[s[l]] == 0)
                        {
                            mp.erase(s[l]);
                        }
                        l++;
                    }
                }

                r++;
            }
            v.push_back(ans);
        }

        for (auto val : v)
        {
            cout << val << " ";
        }
        cout << nl;
    }
    return 0;
}