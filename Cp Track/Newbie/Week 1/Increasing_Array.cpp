// problem link : https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    ll op_cnt = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            op_cnt += (arr[i] - arr[i + 1]);
            //update the next element
            arr[i + 1] = arr[i];
        }
    }    
    cout << op_cnt << nl;
    return 0;
}