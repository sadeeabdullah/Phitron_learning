// User Function Template
class Solution {
  public:
    
    vector<int> dis;
    
void djkstra(int src, vector<vector<pair<int,int>>> &edges, int v)
    {
        dis.assign(v, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, src});
        dis[src] = 0;
        
        while (!pq.empty())
        {
            auto par = pq.top();
            pq.pop();
            
            // splitting
            int par_node = par.second;
            int par_dis = par.first;
            
            for (auto child : edges[par_node])
            {
                // splitting
                int child_node = child.first;
                int child_dis = child.second;
                
                if (par_dis + child_dis < dis[child_node])
                {
                    dis[child_node] = par_dis + child_dis;
                    pq.push({dis[child_node], child_node});
                }
            }
        }
        
    }
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        
        // converting to adj_list
        vector<vector<pair<int, int>>> adj_list(V);
        for(auto e : edges)
        {
            int u = e[0], v = e[1], w = e[2];
            adj_list[u].push_back({v, w});
            adj_list[v].push_back({u, w});
        }
        
        djkstra(src, adj_list, V);
        
        vector<int> result;
        
        for (int i = 0; i < V; i++)
            result.push_back(dis[i]);
        return result;
        
    }
};