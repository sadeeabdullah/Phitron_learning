#include <bits/stdc++.h>
using namespace std;

int n, m;

char grid[1005][1005];

bool vis[1005][1005];

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

// movement
vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
            dfs(ci, cj);
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    memset(vis, false, sizeof(vis));

    int apartmentCount = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (grid[i][j] == '.' && !vis[i][j])
            {
                apartmentCount++;
                dfs(i, j);
            }

    cout << apartmentCount << endl;
    return 0;
}