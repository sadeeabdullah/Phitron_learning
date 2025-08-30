#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];

int n, m;

bool vis[1005][1005];

vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}


int dfs(int si, int sj)
{
    int cnt = 1;
    vis[si][sj] = true;
    for(auto d : dir)
    {
        int ci = si + d.first;
        int cj = sj + d.second;

        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
            cnt += dfs(ci,cj);
    }
    return cnt;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    memset(vis, false, sizeof(vis));
    int min_area = INT_MAX;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if(!vis[i][j] && grid[i][j] == '.')
            {
                int count = dfs(i, j);
                if (count < min_area)
                    min_area = count;
            }
    
    cout << ((min_area == INT_MAX) ? -1 : min_area) << endl;
    return 0;
}