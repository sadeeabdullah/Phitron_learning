#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int a, b, c;
    Edge(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int n, m, q;
vector<Edge> edge_list;
const long long INF = 1e18;

// we will store distances for all sources
vector<vector<long long>> all_dis;

void bellman_ford(int src) {
    vector<long long> dis(n + 1, INF);
    dis[src] = 0;

    for (int i = 0; i < n - 1; i++) {
        for (auto &ed : edge_list) {
            int a = ed.a, b = ed.b, c = ed.c;
            if (dis[a] != INF && dis[a] + c < dis[b]) {
                dis[b] = dis[a] + c;
            }
            if (dis[b] != INF && dis[b] + c < dis[a]) {
                dis[a] = dis[b] + c; // because undirected
            }
        }
    }

    all_dis[src] = dis;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> q;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    all_dis.assign(n + 1, vector<long long>(n + 1, INF));

    // run Bellman-Ford for each source
    for (int i = 1; i <= n; i++) {
        bellman_ford(i);
    }

    // answer queries
    while (q--) {
        int a, b;
        cin >> a >> b;
        if (all_dis[a][b] >= INF) cout << -1 << "\n";
        else cout << all_dis[a][b] << "\n";
    }

    return 0;
}
