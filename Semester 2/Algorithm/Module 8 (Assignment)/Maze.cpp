#include <bits/stdc++.h>
using namespace std;
int n, m;

char grid[1005][1005];

bool vis[1005][1005];

pair<int, int> parent[1005][1005];

// movement sequentially 
vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

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
            if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {par_i, par_j};
            }
        }
    }
}

int main()
{
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    cin >> n >> m;

    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];

            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            else if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }

    bfs(si, sj);

    if (vis[di][dj])
    {
        int nodeI = di, nodeJ = dj;

        while (true)
        {
            auto par = parent[nodeI][nodeJ];
            nodeI = par.first;
            nodeJ = par.second;
            if (grid[nodeI][nodeJ] == 'R')
                break;

            grid[nodeI][nodeJ] = 'X';
        }

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << grid[i][j];
        cout << endl;
    } 

    return 0;
}