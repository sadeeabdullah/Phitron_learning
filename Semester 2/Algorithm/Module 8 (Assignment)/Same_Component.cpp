#include <bits/stdc++.h>
using namespace std;

int n, m;

vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
char grid[1005][1005];

bool vis[1005][1005];

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for(auto d : dir)
    {
        int ci = si + d.first;
        int cj = sj + d.second;

        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
            dfs(ci,cj);
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    int si, sj, di, dj;
    cin >> si >> sj;
    cin >> di >> dj;

    memset(vis, false, sizeof(vis));
    
    dfs(si,sj);

    cout << ((vis[di][dj]) ? "YES" : "NO") << endl;
    return 0;
}