#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj[51]; // cost, to

int solution(int N, vector<vector<int>> road, int K) {
    vector<int> dist(N + 1, 987654321);
    for (const auto& v : road) {
        adj[v[0]].push_back({v[2], v[1]});
        adj[v[1]].push_back({v[2], v[0]});
    }
    priority_queue<pair<int, int>> pq;  // cost to
    dist[1] = 0;
    pq.push({0, 1});
    while (!pq.empty()) {
        const auto [time, now] = pq.top(); pq.pop();
        if (time > dist[now]) continue;
        for (auto [cost, next] : adj[now]) {
            if (dist[now] + cost > K) continue;
            if (dist[now] + cost >= dist[next]) continue;
            dist[next] = dist[now] + cost;
            pq.push({dist[next], next});
        }
    }
    int ans = 0;
    for (int i = 1; i < N + 1; i++)
        if (dist[i] <= K)
            ++ans;
    return ans;
}