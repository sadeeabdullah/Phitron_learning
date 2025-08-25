// problem link: https://leetcode.com/problems/number-of-closed-islands/description/

// solution:
class Solution {
public:
// the logic is here 0 is land and 1 is water
    // there will be no land close to the border of the grid or no land child will be invalid then we will have  one closed island and the land have to covered by water horizontally and vertically

    bool vis[105][105];
    vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0,-1}};

    int n, m;

    bool valid (int i, int j)
    {
        return (i >= 0 && i < n && j >= 0 && j < m);
    }

    // we are taking a flag variable to detect the land is on the border or not  OR the land child is invalid or not
    bool flag = true;
    void dfs(int si, int sj, vector<vector<int>> & grid)
    {
        vis[si][sj] = true;

        for (auto d : dir)
        {
            int ci = si + d.first;
            int cj = sj + d.second;

            if (!valid(ci, cj))
                flag = false;

            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 0)
                dfs(ci, cj, grid);
        }
    }

    int closedIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        // setting the visitor track to false
        memset(vis, false, sizeof(vis));
        int cnt = 0;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (!vis[i][j] && grid[i][j] == 0)
                {
                    // making true for every first call
                    flag = true;
                    dfs(i, j, grid);

                    // if the flag stays true after one call then we will count 1
                    if (flag)
                        cnt++;
                }
        return cnt;
    }
};