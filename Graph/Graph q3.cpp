#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string type;
    cin >> type;

    // Create adjacency list
    vector<vector<int>> adj(n);

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        if (type == "undirected") {
            adj[v].push_back(u);
        }
    }

    // Sort adjacency lists
    for (int i = 0; i < n; ++i) {
        sort(adj[i].begin(), adj[i].end());
    }

    // Print adjacency list
    for (int i = 0; i < n; ++i) {
        cout << i << ":";
        for (int v : adj[i]) {
            cout << " " << v;
        }
        cout << "\n";
    }

    return 0;
}
