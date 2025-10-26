#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
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
        vector<int> arr;
        for(int i = 1; i <= n; i++)
            arr.push_back(i);
        vector<pair<int,int>> ans;
        for(int i = 1; i <= n -  1; i++)
        {
            auto it = arr.end();
            it--;
            int a = *it;
            arr.erase(it);
            it--;
            int b = *it;
            arr.erase(it);
            arr.push_back(((a + b + 1) / 2));
            ans.push_back({a, b});

            
        }
        cout << arr[0] << nl;
        for(auto [x, y] : ans)
        {
            cout << x << " " << y << nl;
        }
  
    }
    return 0;
}