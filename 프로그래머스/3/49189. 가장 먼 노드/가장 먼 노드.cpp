#include <bits/stdc++.h>
using namespace std;

vector<int> adj[20001];

int solution(int n, vector<vector<int>> edge) {
    for (const auto& v : edge) {
        adj[v[0]].push_back(v[1]);
        adj[v[1]].push_back(v[0]);
    }
    vector<int> dist(n + 1, -1);
    queue<int> q;
    q.push(1);
    dist[1] = 0;
    while (!q.empty()) {
        const int now = q.front(); q.pop();
        for (const int next : adj[now]) {
            if (dist[next] != -1) continue;
            dist[next] = dist[now] + 1;
            q.push(next);
        }
    }
    return count(dist.begin() + 1, dist.end(), *max_element(dist.begin(), dist.end()));
}