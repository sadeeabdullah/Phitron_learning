// User function Template for C++

class Solution {
  public:
  
        // setting all the dis to llong_max
    long long int dis[105];
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        
        for (int i = 0; i < V; i++)
            dis[i] = 1e8;
        // Code here
        bool cycle = false;
        
        dis[src] = 0;
        for(int i = 0; i < V - 1; i++) // we need to run this v - 1 time because we have the source distance is 0
        {
            for (auto d : edges)
            {
                int a = d[0];
                int b = d[1];
                int c = d[2];
                
                if (dis[a] != 1e8 && dis[a] + c < dis[b])
                    dis[b] = dis[a] + c;
            }
        }
        
        // running the bellman again to get to know if there is any cycle or not
        for (auto d : edges)
        {
            int a = d[0];
            int b = d[1];
             long long int c = d[2];
                
            if (dis[a] != 1e8 && dis[a] + c < dis[b])
            {
                cycle = true;
                break;
            }
        }
        
        vector<int> result;
        if (cycle)
        {
            result.push_back(-1);
        }
        else
        {
            for (int i = 0; i < V; i++)
                result.push_back(dis[i]);
            
        }
        return result;
    }
};
