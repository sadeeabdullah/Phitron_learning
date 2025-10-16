// problem link : https://vjudge.net/contest/757589#problem/D

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
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        bool found = false;
        
        for(int i = 0;i<n;i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n && !found; i++)
        {
            for (int j = i+ 1 ; j < n &&!found; j++)
            {
                if ((arr[i] + arr[j]) % 2 ==0 )
                    found = true;
            }
        }

        cout << ((found) ? "YES" : "NO") << nl;
    }
    return 0;
}