#include <bits/stdc++.h>
using namespace std;

char grid[8][8];
bool vis[8][8];
int level[8][8];

vector<pair<int, int>> d = {{2, -1}, {1, -2}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}};

int n = 8, m = 8;
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
        auto par = q.front();
        q.pop();

        // splitting
        int par_i = par.first;
        int par_j = par.second;

        for (auto dir : d)
        {
            int ci = par_i + dir.first;
            int cj = par_j + dir.second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string a, b;
        cin >> a >> b;

        // we are getting a index in matrix in character we have to convert it to real index
        int sj = a[0] - 'a';
        int si = a[1] - '1';
        int dj = b[0] - 'a';
        int di = b[1] - '1';

        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));

        bfs(si, sj);

        cout << level[di][dj] << endl;
    }
    return 0;
}