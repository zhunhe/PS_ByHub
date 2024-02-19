#include <bits/stdc++.h>
using namespace std;

bool visited[1001];
int ans;
vector<pair<int, int>> adj[1001];

int main() {
    int n, m; cin >> n >> m;
    while (m--) {
        int a, b, c; cin >> a >> b >> c;
        adj[a].push_back({c, b});
        adj[b].push_back({c, a});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, 1});
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