#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj[10001];
bool visited[10001];

int main() {
    int v, e; cin >> v >> e;
    for (int i = 0; i < e; i++) {
        int a, b, c; cin >> a >> b >> c;
        adj[a].push_back({c, b});
        adj[b].push_back({c, a});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, 1});
    int ans = 0;
    while (!pq.empty()) {
        auto [cost, now] = pq.top(); pq.pop();
        if (visited[now]) continue;
        visited[now] = true;
        ans += cost;
        for (const auto [cost, next] : adj[now])
            pq.push({cost, next});
    }
    cout << ans << '\n';
}