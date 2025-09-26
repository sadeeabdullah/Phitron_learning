#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int main()
{
    fastIO();
    
    int n;
    cin >> n;
    vector<pair<ll, ll>> arr(n + 1); // taking pair with index

    // taking input
    for(ll i = 1; i <= n ;i++)
    {
        ll val;
        cin >> val;
        arr[i] = {val, i};
    }

    // now sort the array based on the value
    sort(arr.begin() + 1, arr.end());

    // printing the new sorted array
    // for (auto val : arr)
    // {
    //     cout << val.first << " " << val.second << nl;
    // }

    ll i = 1;
    while (i <= n)
    {
        ll val = arr[i].first;
        ll st = arr[i].second;
        ll lst = st;

        // updating the last index;
        // go untill we have the same value
        while (i + 1 <= n && arr[i + 1].first == val)
        {
            lst = arr[i + 1].second;
            i++;
        }

        cout << val << " " << st << " " << lst << nl;
        i++;
    }
    return 0;
}