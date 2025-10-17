// problem link : https://codeforces.com/problemset/problem/1714/B

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
        for(int i = 0 ;i < n; i++)
            cin >> arr[i];
        

            vector<bool> seen(n + 1, false);
            int removeCnt = 0;

            for(int i = n - 1; i >=0; i--)
            {
                if (seen[arr[i]])
                    break;
                    seen[arr[i]] = true;
                    removeCnt++;
            }

        cout << n - removeCnt << nl;
    }
    return 0;
}
