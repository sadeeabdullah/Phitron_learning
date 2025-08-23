#include <bits/stdc++.h>
using namespace std;

int n, m;

char grid[1005][1005];

bool vis[1005][1005];

// movement
vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool valid(int i, int j)
{
    if(i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}


int dfs(int si, int sj)
{
    int count = 1;
    vis[si][sj] = true;

    for(int i =0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == '.')
            count += dfs(ci,cj);
    }
    return count;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    memset(vis,false, sizeof(vis));

    vector<int> apartment;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (!vis[i][j] && grid[i][j] == '.')
            {
                int cnt = dfs(i,j);
                apartment.push_back(cnt);
            }
    
    if (apartment.empty())
    {
        cout << 0 <<endl;
    }
    else
    {
        sort(apartment.begin(), apartment.end());
        
        for (int val : apartment)
                cout << val << " ";
        cout << endl;
    }
    return 0;
}