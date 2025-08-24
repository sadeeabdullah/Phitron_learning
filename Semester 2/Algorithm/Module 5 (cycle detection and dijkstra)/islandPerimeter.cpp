// problem link : https://leetcode.com/problems/island-perimeter/description/

// solution with approach:

// question is simple we have to use dfs or bfs we can assume that but
// // the main problem is counting the barrier : by analyzing the question
// we have to get the logic when we get a barrier
// 1. we get a barrier when we are going out of the grid its mean when the index is invalid
// 2. when we get to the water

// we have to run the dfs when we get the land

class Solution {
public:
    int count;
    bool vis[105][105];
    int n, m;
    bool valid(int i, int j)
    {

        return (i >= 0 && i < n && j >= 0 && j < m);
    }

    vector<pair<int, int>> dir = {{0,-1},{0,1},{-1,0},{1,0}};

    void dfs(int i, int j, vector<vector<int>> &grid)
    {
        cout << i << " " << j;
        vis[i][j] = true;
        for (auto d : dir)
        {
            int  ci = i + d.first;
            int cj = j + d.second;
            if (!valid (ci, cj)) // 1
                count++;
            else if(valid(ci,cj) && grid[ci][cj] == 0) // 1
                count++;
            else if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
                dfs(ci, cj, grid);
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        count = 0;
        n = grid.size();
        m = grid[0].size();

        memset(vis, false, sizeof(vis));

        for(int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (!vis[i][j] && grid[i][j] == 1)
                    dfs(i,j, grid);
        return count;
    }
};