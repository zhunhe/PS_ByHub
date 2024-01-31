#include <bits/stdc++.h>
using namespace std;

int solution(int n, vector<vector<int>> computers) {
    vector<int> adj[201];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || computers[i][j] == 0) continue;
            adj[i].push_back(j);
            adj[j].push_back(i);
        }
    }
    int ans = 0;
    vector<bool> visited(n + 1);
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        ++ans;
        queue<int> q;
        q.push(i);
        visited[i] = true;
        while (!q.empty()) {
            const int now = q.front(); q.pop();
            for (const int next : adj[now]) {
                if (visited[next]) continue;
                visited[next] = true;
                q.push(next);
            }
        }
    }
    return ans;
}