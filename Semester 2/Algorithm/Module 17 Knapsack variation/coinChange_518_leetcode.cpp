//problem link:  https://leetcode.com/problems/coin-change-ii/

// soluiton:
class Solution {
public:

    int dp[305][5005];
    //creating the recursion function for getting the way to get the amount of coin
    int wayCount(int i, int amount, vector<int>& coins)
    {

        // base case here
        if (i < 0)
        {
            if (amount == 0)
            {
                return 1;
            }
            else 
            {
                return 0;
            }
        }

        // checking if result is available
        if (dp[i][amount] != -1)
        {
            return dp[i][amount];
        }

        //if the amount is not zero then we have two options
        if(amount >= coins[i])
        {
            int op1 = wayCount(i,amount - coins[i], coins);
            int op2 = wayCount(i - 1, amount, coins);
            dp[i][amount] = op1 + op2;
            return dp[i][amount];
        }
        else
        {
            dp[i][amount] = wayCount(i - 1, amount, coins);
            return dp[i][amount];
        }
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size(); // getting the size of the coins array

        //setting dp to -1
        memset(dp, -1, sizeof(dp));
        int ans = wayCount(n - 1, amount, coins);
        return ans;
    }
};
