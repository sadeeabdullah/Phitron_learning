#include <bits/stdc++.h>
using namespace std;

/// using dp for optimization
int dp[35];
/// defining tetranacci
int tetranacci(int n)
{
    // base case
    if (n == 0 || n == 1)
        return n;
    if (n == 3)
        return 2;
    if (n == 2)
        return 1;
    
    if (dp[n] != -1)
        return dp[n];
    // recursive call
    dp[n] = tetranacci(n - 1) + tetranacci(n - 2) + tetranacci(n - 3) + tetranacci(n - 4);
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    // calling tetranacci number function
    cout << tetranacci(n) << endl;
    return 0;
}