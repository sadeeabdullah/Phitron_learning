#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;

    vector<ll> result = {0, 1, 1, 2};

    if(n < 4)
    {
        cout << result[n] << endl;
        return 0;
    }

    // else we will run the code
    for (int i = 4; i <= n; i++) 
    {
        ll nth = result[i - 1] + result[i - 2] + result[i - 3] + result[i - 4];
        result.push_back(nth);
    }

    cout << result[n] << endl;
    return 0;
}