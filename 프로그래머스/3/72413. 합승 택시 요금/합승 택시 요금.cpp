#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj[201];    // cost, next

vector<int> dijkstra(int n, int start) {
    vector<int> dist(n + 1, INT_MAX);
    dist[start] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({0, start});
    while (!pq.empty()) {
        int cost = -pq.top().first, now = pq.top().second;
        pq.pop();
        if (cost > dist[now]) continue;
        for (const auto [cost, next] : adj[now]) {
            if (dist[next] <= dist[now] + cost) continue;
            dist[next] = dist[now] + cost;
            pq.push({-dist[next], next});
        }
    }
    return dist;
}

int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
    for (const auto& v : fares) {
        adj[v[0]].push_back({v[2], v[1]});
        adj[v[1]].push_back({v[2], v[0]});
    }
    int ans = INT_MAX;
    vector<int> distA = dijkstra(n, a);
    vector<int> distB = dijkstra(n, b);
    vector<int> distS = dijkstra(n, s);
    for (int i = 1; i < n + 1; i++)
        ans = min(ans, distA[i] + distB[i] + distS[i]);
    return ans;
}