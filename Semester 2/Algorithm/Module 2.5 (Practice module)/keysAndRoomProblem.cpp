// problem link : https://leetcode.com/problems/keys-and-rooms/description/

// solution :
class Solution {
public:

// taking an array for tracking if the room is visited or not
    bool vis[1005];
    void bfs(int src, vector<vector<int>> rooms)
    {
        queue<int> q;
        q.push(src);
        vis[src] = true;

        while(!q.empty())
        {
            int par = q.front();
            q.pop();

            // we are using a loop to travers the adjacency list and using the array of tracking to make sure the uniquecity
            for(int x : rooms[par])
            {
                if (!vis[x])
                {
                    q.push(x);
                    vis[x] = true;
                }
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        // setting all the visitor tracking vector to false
        memset(vis,false, sizeof(vis));

        int n = rooms.size();

        // now calling the function
        bfs(0,rooms);
        for(int i = 0; i < n; i++)
        {
            if (vis[i] == false)
                return false;
        }
        return true;
    }
};