// problem link; https://leetcode.com/problems/course-schedule/

// solution:
class Solution {
public:

// taking visitor array for tracking the visitor
    bool vis[2005];

// taking path visitor array for tracking the path
    bool pathvis[2005];
// taking flag
    bool flag;
    // dfs
    void dfs(int src, vector<int> adjList[])
    {
        vis[src] = true;
        pathvis[src] = true;

        for (int child : adjList[src])
        {
            if (vis[child] && pathvis[child])
                flag = true;
            if (!vis[child])
            {
                dfs(child, adjList);
            }
        }
        pathvis[src] = false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // prereqisites is given as an adjacency edges we have to convert it to adjacency list

        // setting the visitor array to false
        memset(vis, false, sizeof(vis));
        memset(pathvis, false, sizeof(pathvis));

        // taking an adjacency list
        vector<int> adjList[numCourses];

        for (auto p : prerequisites)
        {
            int a = p[0];
            int b = p[1];

            adjList[b].push_back(a);
        }

        flag = false;

        for (int i = 0; i < numCourses; i++)
            if (!vis[i])
                dfs(i,adjList);
        

        return !flag;
    }
};