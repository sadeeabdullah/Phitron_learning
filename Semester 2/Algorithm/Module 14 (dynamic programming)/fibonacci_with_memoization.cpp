// up down

#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

ll dp[10005];

int fib(ll i) // Tc O(N)
{
    if (i == 0 || i == 1) // if(i < 2)
        return i;
    if (dp[i] != -1)
        return dp[i];
    dp[i] =  fib(i - 1) + fib(i - 2);
    return dp[i];
}
int main()
{
    memset(dp, -1, sizeof(dp));
    ll n;
    cin>> n;
    cout << fib(n) << endl;
    return 0;
}