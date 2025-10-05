#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


string a, b;

int dp[1005][1005];

// getting the longest common subsequence

int lcs(int i, int j)
{

    //base case here
    if (i < 0 || j < 0)
    {
        return 0;
    }
    
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    // we have two option . here we are using bottom up so if the last character is same then we will add count 1 and if not then we will run 2 recursion :
    // 1. by removing the last character of the first string
    // 2. by removin the last character of the second string

    if (a[i] == b[j])
    {
        dp[i][j] = lcs(i - 1, j - 1) + 1;
        return dp[i][j];
    }
    else
    {
        int op1 = lcs(i - 1, j);
        int op2 = lcs(i, j - 1);
        dp[i][j] = max(op1, op2);
        return dp[i][j];
    }

}
int main ()
{
    fastIO();
    
    cin >> a >> b;

    memset(dp, -1, sizeof(dp));
    int n = a.length() , m = b.length();
    int count = lcs(n - 1, m - 1);

    cout <<  count << nl;
    return 0;
}