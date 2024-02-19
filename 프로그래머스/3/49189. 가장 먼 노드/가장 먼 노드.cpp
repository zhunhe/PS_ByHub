#include <bits/stdc++.h>
using namespace std;

vector<int> adj[20001];

int solution(int n, vector<vector<int>> edge) {
    for (const auto& v : edge) {
        adj[v[0]].push_back(v[1]);
        adj[v[1]].push_back(v[0]);
    }
    vector<int> dist(n + 1, INT_MAX);
    dist[1] = 0;
    queue<int> q;
    q.push(1);
    while (!q.empty()) {
        const auto now = q.front(); q.pop();
        for (const auto next : adj[now]) {
            if (dist[now] + 1 >= dist[next]) continue;
            dist[next] = dist[now] + 1;
            q.push(next);
        }
    }
    const int _max = *max_element(dist.begin() + 1, dist.end());
    int ans = 0;
    for (int i = 1; i < n + 1; i++)
        if (dist[i] == _max)
            ++ans;
    return ans;
}