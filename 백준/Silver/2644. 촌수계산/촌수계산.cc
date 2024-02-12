#include <bits/stdc++.h>
using namespace std;

vector<int> adj[101];

int main() {
    int n, s, e, m; cin >> n >> s >> e >> m;
    while (m--) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    queue<int> q;
    vector<int> dist(n + 1);
    q.push(s);
    dist[s] = 0;
    while (!q.empty()) {
        const auto now = q.front(); q.pop();
        if (now == e) {
            cout << dist[now] << '\n';
            return 0;
        }
        for (const auto next : adj[now]) {
            if (dist[next]) continue;
            dist[next] = dist[now] + 1;
            q.push(next);
        }
    }
    cout << -1 << '\n';
}