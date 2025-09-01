// problem link: https://www.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1

// solution:
// User function Template for C++

class Solution {
  public:
  
    bool cycle;
    
    long long int dis[105];
    void bellman_ford(int n, vector<vector<int>>& edges, int src)
    {
        for(int i = 0;i < n; i++)
            dis[i] = 1e8;
            
        dis[src] = 0;
        
        cycle = false;
        
        
        for(int i = 0; i < n - 1; i++)
        {
            for (auto &d : edges)
            {
                int a = d[0];
                int b = d[1];
                int c = d[2];
                
                if (dis[a] != 1e8 && dis[a] + c < dis[b])
                {
                    dis[b] = dis[a] + c ;
                }
            }
        }
        
        
        for (auto &d : edges)
            {
                int a = d[0];
                int b = d[1];
                int c = d[2];
                
                if (dis[a] != 1e8 && dis[a] + c < dis[b])
                {
                    cycle = true;
                    break;
                }
            }
    }
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
            
        bellman_ford(V, edges, src);
        
        vector<int> result;
        
        
        if (cycle)
        {
            return {-1};
        }
        else
            for(int i = 0; i < V; i++)
            {
                result.push_back(dis[i]);
            }
            
        return result;
    }
};
