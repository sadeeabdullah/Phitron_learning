// problem link : https://cses.fi/problemset/task/1660
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
 
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll cnt = 0;

    ll sum = 0;
    
    int l = 0, r= 0;;
    while(r < n)
    {
        sum += a[r];
        while(sum > m and l <= r)
        {
            sum -= a[l];
            l++;
        }
        if (sum == m)
        {
            cnt++;
            sum -= a[l];
            l++;
        }
        r++;
    }

    cout << cnt << nl;
    return 0;
}