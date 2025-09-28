#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int val[1005];
int dp[1005][1005];

bool sum_equal(int i, int sum)
{

    //base case here
    if (i < 0)
    {
        if (sum == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // if the result is already storeed then return from there
    if(dp[i][sum] != -1)
    {
        return dp[i][sum];
    }
    if (val[i] <= sum)
    {

        bool op1 = sum_equal(i - 1, sum - val[i]);
        bool op2 = sum_equal(i - 1, sum);

        dp[i][sum] = op1 | op2;
        return dp[i][sum];
    }
    else
    {
        dp[i][sum] =  sum_equal(i - 1, sum);
        return dp[i][sum];
    }
}

int main()
{
    fastIO();

    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
        total += val[i];
    }

    if (total % 2 != 0)
    {
        cout << "No" << nl;
        return 0;
    }
    memset(dp, -1, sizeof(dp));
    int sum = total / 2;

    bool isPossible = sum_equal(n - 1, sum);
    cout << ((isPossible) ? "yes" : "no") << nl;
    return 0;
}