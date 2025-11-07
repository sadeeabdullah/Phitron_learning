// problm link : https://codeforces.com/problemset/problem/1006/C

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define testCase{} int tc; cin >> tc; while(tc--)
using namespace std;

int main ()
{
    fastIO();
 
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &val : arr)
    {
        cin >> val;
    }

    ll l = 0, r = n - 1, sum1 = 0, sum2 = 0, ans;

    while (l <= r)
    {
        if (sum1 > sum2)
        {
            sum2 += arr[r];
            r--;
        }
        else 
        {
            sum1 += arr[l];
            l++;
        }
        if (sum1 == sum2)
            ans = sum1;
    }

    cout << ans << nl;
    return 0;
}