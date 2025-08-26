#include <bits/stdc++.h>
using namespace std;

int n, m;

// taking direction movement
vector<pair<int , int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

// taking 2d grid globally
char grid[1005][1005];

// taking visitor tracking array
bool vis[1005][1005];

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;

    for (auto d : dir)
    {
        int ci = si + d.first;
        int cj = sj + d.second;

        if (valid (ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
            dfs(ci, cj);
    }
}
int main()
{

    cin >> n >> m;
    // taking input in the grid
    for (int i= 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    memset(vis, false, sizeof(vis));
    int cnt = 0;

     for (int i= 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (!vis[i][j] && grid[i][j] == '.')
            {
                cnt++;
                dfs(i, j);
            }
    cout << cnt << endl;
    return 0;
}