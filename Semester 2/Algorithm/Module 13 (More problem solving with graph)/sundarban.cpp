#include <bits/stdc++.h>
using namespace std;
char grid[35][35];

int n;
bool vis[35][35];

vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < n);
}

int cnt = 1;

int dis[35][35];
// bfs
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while(!q.empty())
    {
        auto par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for (auto d : dir)
        {
            int ci = par_i + d.first;
            int cj = par_j + d.second;

            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != 'T')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[par_i][par_j] + 1;
            }
        }
    }
}

int main()
{
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    cin >> n;

    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'S')
            {
                si = i;
                sj = j;
            }
            else if (grid[i][j] == 'E')
            {
                di = i;
                dj = j;
            }
        }
    
    bfs(si, sj);
    cout << dis[di][dj] << endl;
    return 0;
}