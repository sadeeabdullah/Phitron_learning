//  problem link : https://codeforces.com/problemset/problem/2000/D


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
 
    testCase{
        int n;
        cin >> n;

        vector<int> arr(n);
        loop(0, n - 1, i)
        {
            cin >> arr[i];
        }

        // taking the prefix sum of the array
        vector<ll> pref(n );

        pref[0] = arr[0];
        loop(1, n - 1, i)
        {
            pref[i] = pref[i - 1] + arr[i];
        }

        string s;
        cin >> s;


        ll sum = 0;
        int count = n - 1;

        for(int i = 0 ;  i < n; i++)
        {
           if (s[i] == 'L')
           {
                while(count > i and s[count] != 'R')
                    count --;
                if(count > i)
                {
                    sum += pref[count] - (i > 0 ? pref[i - 1] : 0);
                    count--;
                }
           }
        }

        cout << sum << nl;
    }
    return 0;
}