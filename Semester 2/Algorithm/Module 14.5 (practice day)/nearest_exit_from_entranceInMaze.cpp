//problem   link:https://leetcode.com/problems/nearest-exit-from-entrance-in-maze/

//solution:
class Solution {
public:

    // for bound checking
    vector<pair<int, int>> dir =  {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
    bool vis[105][105];
    int level[105][105];

    int m, n;
    //valid function
    bool valid(int si, int sj)
    {
        return (si >= 0 && si < n && sj >= 0 && sj < m);
    }
    // dfs
    void bfs(vector<vector<char>>& maze, int si, int sj)
    {
        queue<pair<int, int>> q;
        q.push({si, sj});

        vis[si][sj] = true;
        level[si][sj] = 0;

        while (!q.empty())
        {
            auto par = q.front();
            q.pop();

            // splitting 
            int par_i = par.first;
            int par_j = par.second;

        for(auto d : dir)
        {
            int ci = par_i + d.first;
            int cj = par_j + d.second;

            if(valid(ci, cj) && !vis[ci][cj] && maze[ci][cj] != '+')
            {
                level[ci][cj] = level[par_i][par_j] + 1;
                vis[ci][cj] = true;
                q.push({ci, cj});
            }
        }
        }
    }
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        
        //memset using making the array -1
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));

        n = maze.size();
        m = maze[0].size();

        int si, sj;
        si = entrance[0];
        sj = entrance[1];

        bfs(maze, si, sj);

        int shortestPath = INT_MAX;

        // top & bottom row
        for (int j = 0; j < m; j++) {
            if (!(0 == si && j == sj) && level[0][j] != -1)
                shortestPath = min(shortestPath, level[0][j]);
            if (!(n-1 == si && j == sj) && level[n-1][j] != -1)
                shortestPath = min(shortestPath, level[n-1][j]);
        }
        // left & right column
        for (int i = 0; i < n; i++) {
            if (!(i == si && 0 == sj) && level[i][0] != -1)
                shortestPath = min(shortestPath, level[i][0]);
            if (!(i == si && m-1 == sj) && level[i][m-1] != -1)
                shortestPath = min(shortestPath, level[i][m-1]);
        }


        return (shortestPath == INT_MAX ? -1 : shortestPath);


    }
};