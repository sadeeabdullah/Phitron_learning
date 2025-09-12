#include <bits/stdc++.h>
using namespace std;

int weight[1005];
int val[1005];
int dp[1005][1005];
// creating knapsack function
int knapsack(int i, int mxWeight)
{
    // base case here
    if (i < 0)
        return 0;

    if (dp[i][mxWeight] != -1)
        return dp[i][mxWeight];

    // here we will be having two option taking the element in the bag or not taking

    // but when mxweight is fulfilled the we dont have two option  we cannot take the 
    if (mxWeight >= weight[i])
    {
        int op1 = knapsack(i - 1, mxWeight - weight[i]) + val[i];
        int op2 = knapsack(i - 1, mxWeight);
        
        dp[i][mxWeight] = max(op1,  op2);
        return dp[i][mxWeight];
    }
    else
    {
        dp[i][mxWeight] =  knapsack(i - 1, mxWeight);
        return dp[i][mxWeight];
    }
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        memset(dp, -1, sizeof(dp));
        int n, w;
        cin >> n >> w;

        //taking input of the weight of the element
        for (int i = 0; i < n; i++)
            cin >> weight[i];

        // taking input of the value;
        for (int i = 0; i < n; i++)
            cin >> val[i];

        // we will be using 0/1 knapsack algo maximize the value of the element
        cout << knapsack(n - 1, w) << endl;
    }
    return 0;
}