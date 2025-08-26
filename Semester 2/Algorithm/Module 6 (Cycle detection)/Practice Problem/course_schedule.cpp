//  problem link :https://leetcode.com/problems/course-schedule/

// solution :
// if you read the question you will understand that this is a problem of cycle detection in one directied graph if there is a cycle then the answer is no or false

class Solution {
public:
    bool flag;
    bool vis[2005];
    int path[2005];

    // taking adjacency list globally
    vector<int> adj_list[2005];

    void dfs(int src)
    {
        vis[src]  = true;
        path[src] = true;

        for (int child : adj_list[src])
        {
            if (vis[child] && path[child])
                flag = true;
            if (!vis[child])
            {
                path[child] = true;
                dfs(child);
            }
        }
        path[src] = false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        memset(vis, false, sizeof(vis));
        memset(path, false, sizeof(path));

        flag = false;
        // converting adjacency edges to adjacency list
        for (int i = 0; i < prerequisites.size(); i++)
        {
            int a = prerequisites[i][0];
            int b = prerequisites[i][1];

            adj_list[b].push_back(a);
        }

        for (int i = 0; i < numCourses; i++)
        {
            if (!vis[i])
                dfs(i);
        }
        return !flag;
    }
};
