// problem link; https://leetcode.com/problems/minimum-path-sum/description/


// solution:

class Solution {
public:

    int dp[200][200];
    int getMin(vector<vector<int>>  &grid, int i, int j)
    {
        // base case
        if (j == 0 && i == 0)
            return grid[i][j];

        // check if the minimum path is stored or not
        if (dp[i][j] != -1)
            return dp[i][j];
        int left = INT_MAX, up = INT_MAX;
        // recursive call based on condition
        if (i > 0)
        {
            left = getMin(grid, i - 1, j);
        }
        if (j > 0)
        {
            up = getMin(grid,i, j - 1);
        }
        dp[i][j] = grid[i][j] + min(left, up);
        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1, sizeof(dp));
        int n = grid.size();
        int m = grid[0].size();
        return getMin(grid, n - 1, m - 1);
    }
};