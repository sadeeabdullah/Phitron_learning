// problem link : https://leetcode.com/problems/flood-fill/description/

// solution :
class Solution {
public:
    int vis[55][55];
    int n, m;

    vector<pair<int, int>> d = {{0,-1},{0,1},{-1,0},{1,0}};

    bool valid (int i, int j)
    {
        return (i >=0 && i < n && j >= 0 && j < m);
    }

    void dfs(vector<vector<int>> &image, int i, int j, int val, int newColor )
    {
        if (!valid(i, j))
            return;
        if (vis[i][j] || image[i][j] != val)
            return;
        image[i][j] = newColor;
        vis[i][j] = true;
        for(auto dir : d)
            dfs(image, i + dir.first, j + dir.second, val, newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        n = image.size();
        m = image[0].size();
        int val = image[sr][sc];
        dfs(image, sr, sc, val, color);
        return image;
    }
};