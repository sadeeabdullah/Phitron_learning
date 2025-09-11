#include <bits/stdc++.h>
using namespace std;
int n, m;
int mat[15][15];

int getMax(int i, int j)
{
    // base case here
    if (i == 0 && j == 0)
        return mat[i][j];
    
    int up = INT_MIN, left = INT_MIN;
    if (i > 0)  
        up = getMax(i - 1, j);
    if (j > 0)
        left = getMax(i, j - 1);
    return mat[i][j] + max(up, left);
}
int main()
{
    cin >> n >> m;
    //taking input
    for (int i =0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];
    // calling the recursive funciton;
    cout << getMax(n - 1, m - 1) << endl;
    return 0;
}