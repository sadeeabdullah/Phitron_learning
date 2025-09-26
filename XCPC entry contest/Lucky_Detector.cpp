#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
    fastIO();
    ll n;
    cin >> n;
    
    bool isLucky = false;

    while (n != 0)
    {
        ll dig = n % 10;
        if (dig == 7)
        {
            isLucky = true;
            break;
        }
        n /= 10;
    }

    cout << ((isLucky) ? "Lucky" : "Not Lucky") << nl;
    return 0;
}