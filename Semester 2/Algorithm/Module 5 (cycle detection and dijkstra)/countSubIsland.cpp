// problem link: https://leetcode.com/problems/count-sub-islands/description/

// solution:
class Solution {
public:
    int n, m;

    bool vis[505][505];

    vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    bool valid (int i, int j)
    {
        return (i >= 0 && i < n && j >= 0 && j < m);
    }

    bool flag;
    void dfs(int i, int j, vector<vector<int>> &grid1, vector<vector<int>> &grid2)
    {
        vis[i][j] = true;

        if (grid1[i][j] == 0) // every time checking if it matches with grid1 if not then telling false but have to traverse through all island and make the visit true other wise in the next dfs it will take is as another island
            flag = false;

        for (auto d : dir)
        {
            int ci = i + d.first;
            int cj = j + d.second;
            if (valid (ci, cj) && !vis[ci][cj] && grid2[ci][cj] )
            {
                
                dfs(ci, cj, grid1, grid2);
            }
        }
    }

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        n = grid2.size();
        m = grid2[0].size();

        memset(vis, false, sizeof(vis));

        int cnt = 0 ;

        for (int i = 0;  i < n ; i ++)
            for (int j = 0; j < m; j++)
                if (!vis[i][j] && grid2[i][j] == 1)
                {
                    flag = true;
                    dfs(i, j, grid1, grid2);

                    if (flag)
                        cnt++;
                }
        
        return cnt;
    }
};