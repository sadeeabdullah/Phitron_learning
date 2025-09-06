#include <bits/stdc++.h>
using namespace std;

// creating class for storing the connections and weight
class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int n, e;
vector<long long> dis;

bool cycle;

// creating edge list
vector<Edge> edge_list;
void bellman_ford(int src)
{

    //reseting dis
    dis.assign(n + 1, 1e18); // in conceptual session we learned it.

    cycle = false;
    dis[src] = 0;

    for (int i = 1; i < n; i++)
    {
        for (auto ed : edge_list)
        {
            int a = ed.a;
            int b = ed.b;
            int c = ed.c;

            if (dis[a] != 1e18 && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }

    for (auto ed : edge_list)
    {
        int a = ed.a;
        int b = ed.b;
        int c = ed.c;

        if (dis[a] != 1e18 && dis[a] + c < dis[b])
        {
            cycle = true;
            break;
        }

    }
}
int main()
{
    cin >> n >> e;

    
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c)); // this directed graph
    }

    int src;
    cin >> src;
    bellman_ford(src);


    int tc;
    cin >> tc;
    while (tc--)
    {
        int d;
        cin >> d;
        if (!cycle)
        {
            if(dis[d] == 1e18)
            {
                cout << "Not Possible" << endl;
            }
            else
                cout << dis[d] <<endl;

        }
        else
        {
            cout << "Negative Cycle Detected" << endl;
            return 0;
        }
    }

    return 0;
}