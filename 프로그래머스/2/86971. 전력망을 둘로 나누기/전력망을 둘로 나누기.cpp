#include <bits/stdc++.h>
using namespace std;

vector<int> adj[101];

void resetAdj(const vector<vector<int>>& wires, int idx) {
    for (int i = 1; i < 102; i++) adj[i].resize(0);
    for (int i = 0; i < wires.size(); i++) {
        if (i == idx) continue;
        adj[wires[i][0]].push_back(wires[i][1]);
        adj[wires[i][1]].push_back(wires[i][0]);
    }
}

int bfs(int start) {
    int cnt = 1;
    vector<bool> visited(101);
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        const int now = q.front(); q.pop();
        for (int next : adj[now]) {
            if (visited[next]) continue;
            visited[next] = true;
            ++cnt;
            q.push(next);
        }
    }
    return cnt;
}

int solution(int n, vector<vector<int>> wires) {
    int ans = 101;
    for (int i = 0; i < wires.size(); i++) {
        resetAdj(wires, i);
        ans = min(ans, abs(bfs(wires[i][0]) - bfs(wires[i][1])));
    }
    return ans;
}