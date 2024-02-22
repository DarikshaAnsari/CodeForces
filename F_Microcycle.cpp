#include <iostream>
#include <vector>
#include <cstring>
#include <limits>

using namespace std;

const int MAXN = 100005;

vector<pair<int, int>> graph[MAXN];
bool visited[MAXN];

bool dfs_cycle(int u, int par, vector<int>& cycle, int& min_weight_edge) {
    visited[u] = true;
    cycle.push_back(u);

    for (auto& edge : graph[u]) {
        int v = edge.first;
        int weight = edge.second;

        if (!visited[v]) {
            if (dfs_cycle(v, u, cycle, min_weight_edge))
                return true;
        } else if (v != par && (min_weight_edge == -1 || weight < graph[cycle[0]][min_weight_edge].second)) {
            min_weight_edge = cycle.size() - 1;
            return true;
        }
    }

    cycle.pop_back();
    return false;
}

vector<int> find_cycle(int n, int& min_weight_edge) {
    memset(visited, false, sizeof(visited));
    vector<int> cycle;
    min_weight_edge = -1;

    for (int u = 1; u <= n; ++u) {
        if (!visited[u]) {
            if (dfs_cycle(u, -1, cycle, min_weight_edge))
                break;
        }
    }

    return cycle;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        for (int i = 1; i <= n; ++i)
            graph[i].clear();

        for (int i = 0; i < m; ++i) {
            int u, v, w;
            cin >> u >> v >> w;
            graph[u].emplace_back(v, w);
            graph[v].emplace_back(u, w);
        }

        int min_weight_edge;
        vector<int> cycle = find_cycle(n, min_weight_edge);
        int min_weight = min_weight_edge != -1 ? graph[cycle[min_weight_edge]][(min_weight_edge + 1) % cycle.size()].second : -1;
        int cycle_length = cycle.size();

        cout << min_weight << " " << cycle_length << endl;
        for (int i = 0; i < cycle_length; ++i)
            cout << cycle[i] << " ";
        cout << endl;
    }

    return 0;
}
