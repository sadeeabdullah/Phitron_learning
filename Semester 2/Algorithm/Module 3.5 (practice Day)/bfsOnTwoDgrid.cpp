#include <bits/stdc++.h>
using namespace std;

int n, m;

// taking visitor tracking vector
vector<vector<bool>> vis(1005,vector<bool>(1005,false));

// taking 2d grid
char grid[1005][1005];

// taking vector for move action
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};


// function for checking the node index is valid or not
bool valid(int i, int j)
{
    if (i < 0 || i >=n || j < 0 || j >= m)
        return false;

    return true;
}


int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];


    return 0;
}