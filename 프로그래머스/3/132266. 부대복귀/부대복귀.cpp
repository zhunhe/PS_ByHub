#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100001];

vector<int> solution(int n, vector<vector<int>> roads, vector<int> sources, int destination) {
    for (const auto& v : roads) {
        adj[v[0]].push_back(v[1]);
        adj[v[1]].push_back(v[0]);
    }
    vector<int> dist(n + 1, -1);
    queue<int> q;
    q.push(destination);
    dist[destination] = 0;
    while (!q.empty()) {
        const auto now = q.front(); q.pop();
        for (const auto next : adj[now]) {
            if (dist[next] != -1) continue;
            dist[next] = dist[now] + 1;
            q.push(next);
        }
    }
    vector<int> ans;
    for (const auto source : sources)
        ans.push_back(dist[source]);
    return ans;
}