#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int val[1005];
int dp[1005][1005];

int sum_count(int i, int sum)
{

    //base case here
    if (i < 0)
    {
        if (sum == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    // if the result is already storeed then return from there
    if(dp[i][sum] != -1)
    {
        return dp[i][sum];
    }
    if (val[i] <= sum)
    {

        int op1 = sum_count(i - 1, sum - val[i]);
        int op2 = sum_count(i - 1, sum);

        dp[i][sum] = op1 + op2;
        return dp[i][sum];
    }
    else
    {
        dp[i][sum] =  sum_count(i - 1, sum);
        return dp[i][sum];
    }
}

int main()
{
    fastIO();

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }

    int sum;
    cin >> sum;
    memset(dp, -1, sizeof(dp));



    int total_way_of_sum = sum_count(n - 1, sum);
    cout << total_way_of_sum << nl;
    return 0;
}