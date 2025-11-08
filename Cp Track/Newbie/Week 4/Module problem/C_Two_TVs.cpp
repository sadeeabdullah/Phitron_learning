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

    vector<int> d(n + 10,0);
    for(int i = 0;i < n; i++)
    {
        int l , r;
        cin >> l >> r;
        d[l] += 1;
        d[r + 1] -= 1;
    }

    loop(1, n + 5, i)
    {
        d[i] = d[i] + d[i - 1];
    }

    bool flag = true;

    for(int val : d)
    {
        if(val > 2)
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