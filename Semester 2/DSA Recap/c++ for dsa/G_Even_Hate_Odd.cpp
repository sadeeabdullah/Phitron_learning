#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        if (n % 2 != 0)
        {
            cout << -1 << nl;
        }
        else
        {
            int evenCnt = 0, oddCnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 != 0)
                    oddCnt++;
                else
                    evenCnt++;
            }

            cout << abs(oddCnt - evenCnt) / 2 << nl;
        }
    }
    return 0;
}