#include <bits/stdc++.h>
#define ll long long int
#define llmax LLONG_MAX
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        ll smallestPair = llmax;
          for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ll pair = arr[i] + arr[j] +(j - i);
                smallestPair = min(pair, smallestPair);
            }
        }

        cout << smallestPair << '\n';
    }
    return 0;
}