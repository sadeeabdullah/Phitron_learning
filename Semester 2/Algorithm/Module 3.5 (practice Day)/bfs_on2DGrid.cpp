#include <bits/stdc++.h>
using namespace std;

int n, m;

// taking grid globally so that anyone can access
char grid[1005][1005];

// taking visitor tracking array
vector<vector<bool>> vis(1005, vector<bool>(1005, false));

// creating function for checking validity
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

// taking movement index
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

// taking another vector for measuring the shortest distance
int level [1005][1005];
// creating bfs
void bfs(int si, int sj)
{
    // taking queue for traversing the graph
    queue<pair<int, int>> q;

    // pushing the first index
    q.push({si, sj});

    vis[si][sj] = true; // making the visited index true

    // increasing the level
    level[si][sj] = 0;

    while (!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();

        int par_i = par.first;
        int par_j = par.second;

        // cout << par_i << " " << par_j << endl;
        for (int j = 0; j < 4; j++)
        {
            int ci = par_i + d[j].first;
            int cj = par_j + d[j].second;

            if ( valid(ci, cj) && !vis[ci][cj] )
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
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    memset(level, -1, sizeof(level));

    // now if i need to get the shortest distance
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    bfs(si, sj);

    cout << level[di][dj] << endl;
    return 0;
}