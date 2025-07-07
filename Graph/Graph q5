#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int MAXN = 10005;
vector<int> adj[MAXN];
vector<bool> visited(MAXN, false);
vector<int> dist(MAXN, -1);
int main() {
    int n, m, src;
    cin >> n >> m >> src;

    int dest;
    cin >> dest;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // undirected
    }
    queue<int> q;
    q.push(src);
    visited[src] = true;
    dist[src] = 0;
    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                dist[neighbor] = dist[node] + 1;
                q.push(neighbor);
            }
        }
    }
    cout << dist[dest] << endl; // -1 if no path
    return 0;
}
