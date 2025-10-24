// problem llink : https://codeforces.com/problemset/problem/1793/C


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        set<int> st;
        vector<int> arr;
        for(int i = 0;i < n; i++)
        {
            int val ;
            cin >> val;
            arr.push_back(val);
            st.insert(val);
        }

        
        int l = 0, r = n - 1;

        while(r - l > 1)
        {
            int mn = *st.begin(), mx = *st.rbegin();

            if (arr[l] != mn && arr[r] != mx && arr[r] != mn && arr[l] != mx)
                break;
            if (arr[l] == mn || arr[l] == mx)
            {
                l++;
                st.erase(arr[l - 1]);
            }
            if (arr[r] == mn || arr[r] == mx)
            {
                r--;
                st.erase(arr[r + 1]);
            }
        }
        
        if (r - l > 1)
        cout << l+ 1 << " " << r  + 1 << nl;
        else
        cout << -1 << nl;

    }
    return 0;
}