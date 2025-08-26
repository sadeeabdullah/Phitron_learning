// problem link : https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab


// solution:

class Solution {
  public:
        bool vis[100005];
        int parent[100005];
        
        bool flag;
        void dfs(int src, vector<vector<int>> &edges)
        {
            vis[src] = true;
            
            for (int child : edges[src])
            {
                if (vis[child] && parent[src] != child)
                    flag = false;
                if (!vis[child])
                {
                    parent[child] = src;
                    dfs(child, edges);
                }
            }
        }
    bool isCycle(int V, vector<vector<int>>& edges) {
        flag = true;
        memset(vis, false, sizeof(vis));
        memset(parent, -1, sizeof(parent));
        
        // here we are given a adjacency list that made with vector of vetor we have to convert it to adjacency list
        vector<vector<int>> adj_list(V);
        for (auto edge : edges)
        {
            int a = edge[0];
            int b = edge[1];
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }
        // traversing on the visitor vector and applying dfs on not visited nodes
        for (int i = 0; i < V; i++)
            if (!vis[i])
                dfs(i, adj_list);
        
        return !flag;
    }
};