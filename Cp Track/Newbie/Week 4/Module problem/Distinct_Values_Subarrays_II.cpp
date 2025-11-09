// probleem link : https://cses.fi/problemset/task/2428


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
 
    // here is the brute force approch
    // int n, k;
    // cin>> n >> k;
    // vector<int> arr(n);
    // ll ans = 0;
    // for(int i = 0; i < n;i++)
    // {
    //     cin >> arr[i];
    // }

    // for(int i = 0; i < n; i++)
    // {
    //     set<int> st;
    //     for(int j = i ; j < n; j++)
    //     {
    //         st.insert(arr[j]);
    //         if (st.size() > k)
    //         {
    //             break;
    //         }
    //         else 
    //             ans++;
    //     }
    // }

    // cout << ans << nl;
    
    
    // optimize
    int n, k;
    cin>> n >> k;
    vector<int> arr(n);
    ll ans = 0;
    for(int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }

    map<int, int> mp;
    int r = 0;
    for(int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
        while(mp.size() > k)
        {
            mp[arr[r]]--;
            if(mp[arr[r]] == 0)
                mp.erase(arr[r]);

            r++;  
        }
        ans += (i - r + 1);
    }

    cout << ans << nl;


    return 0;
}