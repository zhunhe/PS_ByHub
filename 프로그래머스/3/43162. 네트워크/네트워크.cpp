#include <bits/stdc++.h>
using namespace std;

vector<int> adj[201];
int visited[201][201];

int solution(int n, vector<vector<int>> computers) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (computers[i][j] == 0) continue;
            adj[i].push_back(j);
            adj[j].push_back(i);
        }
    }
    int ans = 0;
    vector<int> visited(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (computers[i][j] == 0 || visited[i]) continue;
            ++ans;
            visited[i] = 1;
            queue<int> q;
            q.push(i);
            while (!q.empty()) {
                const auto now = q.front(); q.pop();
                for (const auto next : adj[now]) {
                    if (visited[next]) continue;
                    visited[next] = 1;
                    q.push(next);
                }
            }
        }
    }
    return ans;
}