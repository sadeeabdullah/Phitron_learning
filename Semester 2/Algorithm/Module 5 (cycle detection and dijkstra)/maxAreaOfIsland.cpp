// problem link : https://leetcode.com/problems/max-area-of-island/description/

// solution:
class Solution {
public:
    int n, m;
// taking vector for tracking the visitor 
    bool vis[55][55];

    bool valid (int i, int j)
    {
        return (i >= 0 && i < n && j >= 0 && j < m);
    }

    vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    int dfs(int si, int sj, vector<vector<int>> &grid)
    {
        int cnt = 1;
        vis[si][sj] = true;

        for(auto d : dir)
        {
            int ci = si + d.first;
            int cj = sj + d.second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
            {
                cnt += dfs(ci, cj, grid);
            }
        }
        return cnt;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        n = grid.size();
        m = grid[0].size();

        memset(vis, false, sizeof(vis));
        vector<int> nodeCount;
        //traversing through the grid
        for (int i = 0; i < n; i++ )
            for (int j = 0; j< m; j++)
                // we will call the dfs only when the value is 1
                if (grid[i][j] == 1 && !vis[i][j])
                {
                    int cnt = dfs(i, j,grid);
                    nodeCount.push_back(cnt);
                }

        if(nodeCount.empty())
        {
            return 0;
        }
        int mx = INT_MIN;
        for(int cnt : nodeCount)
            if (cnt > mx)
                mx = cnt;
        
        return mx;
    }
};