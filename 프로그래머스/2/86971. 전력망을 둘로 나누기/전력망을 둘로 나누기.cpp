#include <bits/stdc++.h>
using namespace std;

vector<int> adj[101];

int bfs(int start) {
    vector<bool> visited(101);
    queue<int> q;
    q.push(start);
    visited[start] = true;
    int len = 1;
    while (!q.empty()) {
        const auto now = q.front(); q.pop();
        for (const auto next : adj[now]) {
            if (visited[next]) continue;
            visited[next] = true;
            ++len;
            q.push(next);
        }
    }
    return len;
}

int solution(int n, vector<vector<int>> wires) {
    int ans = n;
    for (int i = 0; i < wires.size(); i++) {
        for (int j = 1; j < n + 1; j++) adj[j].clear();
        for (int j = 0; j < wires.size(); j++) {
            if (i == j) continue;
            adj[wires[j][0]].push_back(wires[j][1]);
            adj[wires[j][1]].push_back(wires[j][0]);
        }
        ans = min(ans, abs(bfs(wires[i][0]) - bfs(wires[i][1])));
    }
    return ans;
}