
// problem link: https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
// solution with bfs;

class Solution {
  public:
  
  // here we are given an adjacency edges we have to convert it to adjacency list
  
  // taking an adjacency list globally
    vector<int> adj_list[100005];
    
    // taking parent array to track the parent of every node and visitor array for tracking visitor
    int parent[100005];
    bool vis[100005];
    
    // taking a flag variable to track the cycle
    bool flag;
    // now bfs
    void bfs(int src)
    {
        queue<int> q;
        q.push(src);
        
        vis[src] = true;
        
        while (!q.empty())
        {
            int par = q.front();
            q.pop();
            
            for (int child : adj_list[par])
            {
                
                if (!vis[child])
                {
                    q.push(child);
                    vis[child] = true;
                    parent[child] = par;
                }
                else if (parent[par] != child)
                    flag = true;
            }
        }
        
        
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        // making all the parent node value to -1 and the visitor track to false
        memset(vis, false, sizeof(vis));
        memset(parent, -1, sizeof(parent));
        
        // setting the flag to false
        flag = false;
        
        // converting adjacency edge to adjacency list
        for (int i = 0; i < edges.size(); i++)
        {
            int a = edges[i][0];
            int b = edges[i][1];
            
            // it is undirected graph
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }
        
        for(int i = 0; i < V; i++)
        {
            if (!vis[i])
                bfs(i);
        }
        
        return flag;
        
    }
};