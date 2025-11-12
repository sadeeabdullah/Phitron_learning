// problem link :https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k

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
    tInt(n);
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // creating arr prefix sum array
    for(int i = 1; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i];
    }

    tLL(k);

    // we are going to store the prefix value and their index on map and check if we have seen it or not  we are going to compare with prefix - k

    int ans = 0;

    map<int, int> mp;
    mp[0] = -1;

    for (int i = 0; i < n; i++)
    {
        // if(arr[i] == k)
        //     ans = max(ans, i );

        // use find it 2x faster than count
        auto it = mp.find(arr[i] - k);
        // if(mp.count(arr[i] - k) > 0)
        if(it != mp.end())
        {
            ans = max(ans, i - it->second );
        }

        if(mp.find(arr[i]) == mp.end())
        mp[arr[i]] = i ;
    }

    cout << ans << nl;
    return 0;
}