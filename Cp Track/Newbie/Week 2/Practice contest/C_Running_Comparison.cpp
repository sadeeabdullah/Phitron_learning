// problem link : https://vjudge.net/contest/757589#problem/C


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
        vector<int> alice(n), bob(n);

        for (int i = 0 ;i < n; i++)
        {
            cin >> alice[i];
        }
        for (int i = 0 ;i < n; i++)
        {
            cin >> bob[i];
        }


        int happyCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (bob[i] <= alice[i] * 2 && alice[i] <= bob[i] * 2)
            {
                happyCount++;
            }
        }

        cout << happyCount << nl;
    }
    return 0;
}