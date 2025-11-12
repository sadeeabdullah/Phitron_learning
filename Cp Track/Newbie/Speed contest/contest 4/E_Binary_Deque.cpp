// problem link : https://codeforces.com/problemset/problem/1692/E


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
#define testCase int tc; cin >> tc; while(tc--)
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
        tInt(x);

        ll sum = 0;
        vector<int> a(n);
        loop(0, n - 1, i)
        {
            cin >> a[i];
            sum += a[i];
        }
        
        if (sum == x)
        {
            cout <<  0 << nl;
            continue;
        }
        
        if(sum < x)
        {
            cout << -1 << nl;
            continue;
        }
        // we will be using two pointer technique to solve the problem
        
        // we need to find the maximum sum sub arraay that contains the sum and substract the with it
        ll curr_sum = 0, ans = 0;
        ll l = 0, r = 0;
        while(r < n)
        {
            curr_sum += a[r];

            while(curr_sum > x && l<= r)
            {
                curr_sum -= a[l];
                l++;
            }

            if (curr_sum == x)
            {
                ans = max(ans, r - l + 1);

            }

            r++;
        }
        cout << n -ans << nl;
    }
    return 0;
}