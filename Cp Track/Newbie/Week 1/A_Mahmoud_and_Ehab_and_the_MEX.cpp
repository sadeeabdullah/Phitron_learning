// problem link : https://codeforces.com/problemset/problem/862/A
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);

    int mex = 0;
    vector<bool> exist(101, false);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        exist[arr[i]] = true;
    }
    
    int op_count = 0;
    for(int i = 0; i < x; i++)
    {
        if(!exist[i])
            op_count++;
    }

    if (exist[x])
        op_count++;
    cout << op_count <<nl;
    return 0;
}