#include <bits/stdc++.h>
using namespace std;

int n, m;

int grid[105][105];

bool vis[105][105];

int level[105][105];

vector<pair<int, int>> dir = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}


void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty())
    {
        auto [ui, uj] = q.front();
        q.pop();

        for (auto d : dir)
        {
            int ci = ui + d.first;
            int cj = uj + d.second;

            if (valid(ci, cj) && !vis[ci][cj])
            {
                vis[ci][cj] = true;
                level[ci][cj] = level[ui][uj] + 1;
                q.push({ci, cj});
            }
        }
    }
}
int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        cin >> n >> m;
    
        int si, sj;
        cin >> si >> sj;
        int di, dj;
        cin >> di >> dj;
    
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
    
        bfs(si, sj);
    
        cout << level[di][dj] << endl;
    }
    return 0;
}