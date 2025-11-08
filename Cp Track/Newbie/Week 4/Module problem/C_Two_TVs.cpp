// problem link : https://codeforces.com/problemset/problem/845/C


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
using namespace std;

int main ()
{
    fastIO();
    
    int n;
    cin>> n;

    map<int, int> mp;
    for(int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }


    // now if we want same like prefix sum we can do like below
    ll sum = 0;

    bool flag = true;
    for(auto [key, value] : mp)
    {
        sum += value;
        // cout << sum << " ";
        if(sum > 2)
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        yes;
    }
    else
        no;

    return 0;
}