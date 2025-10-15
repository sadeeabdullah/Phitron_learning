// problem link : https://codeforces.com/problemset/problem/381/A

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    fastIO();

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll serja_point = 0, dim_point = 0;

    int i = 0, j = n - 1;

    while (i <= j)
    {
        if (arr[i] > arr[j])
        {
            serja_point += arr[i];
            i++;
        }
        else
        {
            serja_point += arr[j];
            j--;
        }

        if (i > j)
            break;
        if (arr[i] > arr[j])
        {
            dim_point += arr[i];
            i++;
        }
        else
        {
            dim_point += arr[j];
            j--;
        }
    }

    cout << serja_point << " " << dim_point << nl;
    return 0;
}