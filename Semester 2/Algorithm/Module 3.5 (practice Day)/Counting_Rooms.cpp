#include <bits/stdc++.h>
using namespace std;
int n, m;

// declaring grid
char grid[1005][1005];

// creating boolen type array for tracking the visiting of any specific index in 2d array and setting all value to false
vector<vector<bool>> vis(1005, vector<bool>(1005,false));

// creating function to check if the index is into boundary or out of boundary
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}


// as the problem described we can only go UP DOWN LEFT AND RIGHT  so we are adding the pair of vector to move
vector<pair<int, int>> d = {{1,0}, {-1, 0}, {0, 1}, {0, -1}};

// creating dfs for traversing through all the nodes
void dfs(int si, int sj)
{
    // making the true the visited index first
    vis[si][sj] = true;

    // we know the movement can be 4 way so the loop will run 4 times
    for(int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj+ d[i].second;

        // if the index is valid (NOTE: index mean [si][sj])   and also check the index is visited or not and also check if the index value is . or not
        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == '.')
            dfs(ci, cj);
    }
}
int main()
{
    cin >> n >> m;

    // taking input of the given 2d grid
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];

    // storing the room count here
    int roomCount = 0;

    // here we will traverse through the grid
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // we need to count the room number so we have to make the indexes true in one call that are connected to each other
            if (!vis[i][j] && grid[i][j] == '.')
            {
                roomCount ++;
                dfs(i,j);
            }
        }
    }

    cout << roomCount << endl;
    return 0;
}