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

vector<Edge> edgeList;
long long dis[105][105]; // taking 2d array for storing the dis between every two node

void floydWarshall()
{
}
int main()
{
    // we need to use floyd warshall here because if we use bellman or dijkstra we may get time limit exceed error
    cin >> n >> e;

    // setting all the distance to infinity expcept the diagonal index in 2d array
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                dis[i][j] = 0;
            else
                dis[i][j] = 1e18;
        }

    while (e--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        dis[a][b] = min(dis[a][b], c);
    }

    // floyd warshall here
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                if (dis[i][k] != 1e18 && dis[k][j] != 1e18 && dis[i][j] > dis[i][k] + dis[k][j])
                    dis[i][j] = dis[i][k] + dis[k][j];
            }

    int q;
    cin >> q;
    while (q--)
    {
        int src, dst;
        cin >> src >> dst;

        cout << ((dis[src][dst] == 1e18) ? -1 : dis[src][dst]) << endl;
    }
    return 0;
}