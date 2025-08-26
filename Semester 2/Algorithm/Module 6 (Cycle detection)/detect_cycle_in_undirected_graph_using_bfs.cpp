// what is cycle in undirected graph?
// cycle is a circumstances that happen when we go on a same path again and again. But in undirected graph at least 3 nodes or vertices is mandatory to make a cycle. we all know that two nodes also vary the characteristics of cycle but we cannot call it a cycle so we have to make a condition that helps to identify us that two nodes connected in both direction is not cylce. 

// when two nodes is connected once the first is the parent node and the left one is child node. meanwhile the second node is parent node and the first node is also child node.

// But when we have 3 node and have cycle in the graph we have a distinct condition that 2 nodes doesnot have and that is the third node parent node is not equal to its child node. that is the condition we are going to use


#include <bits/stdc++.h>
using namespace std;

// making adjacent list
vector<int> adj_list[1005];
vector<bool> vis(1005, false);

vector<int> parent (1005, -1);
bool flag = false;
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true; // making src visited

    while(!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : adj_list[par])
        {
            if (vis[child] && parent[par] != child)
                flag = true;
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                parent[child] = par;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    // flag = false;
    // here we don't have a simple source so we have to traverse through the visited track and find not visited node and use bfs on it
    for (int i = 0; i < n; i++)
        if (!vis[i])
            bfs(i);


    cout << ((flag) ? "cycle detected" : "no cycle") << endl;
    return 0;
}