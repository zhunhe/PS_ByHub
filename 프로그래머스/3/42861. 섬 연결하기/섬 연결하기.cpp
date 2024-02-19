#include <bits/stdc++.h>
using namespace std;

int visited[101];
vector<pair<int, int>> adj[101];    // cost, next

int solution(int n, vector<vector<int>> costs) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;  // cost, now
    for (const auto& v : costs) {
        adj[v[0]].push_back({v[1], v[2]});
        adj[v[1]].push_back({v[0], v[2]});
    }
    int ans = 0;
    pq.push({0, 0});
    while (!pq.empty()) {
        auto [cost, now] = pq.top(); pq.pop();
        if (visited[now]) continue;
        visited[now] = true;
        ans += cost;
        for (const auto [next, cost] : adj[now])
            pq.push({cost, next});
    }
    return ans;
}