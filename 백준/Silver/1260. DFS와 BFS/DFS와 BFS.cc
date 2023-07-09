#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

vector<int> graph[1001];
bool visited[1001];

void dfs(const int now) {
    visited[now] = true;
    cout << now << " ";
    for (int next: graph[now]) {
        if (visited[next]) continue;
        dfs(next);
    }
}

void bfs(const int start) {
    queue<int> q;
    q.push(start); visited[start] = true;
    while (!q.empty()) {
        const int now = q.front(); q.pop();
        cout << now << " ";
        for (int next: graph[now]) {
            if (visited[next]) continue;
            q.push(next); visited[next] = true;
        }
    }
}

int main() {
    FASTIO
    int n, m, v; cin >> n >> m >> v;
    for (int i = 0; i < m; i++) {
        int start, end; cin >> start >> end;
        graph[start].push_back(end);
        graph[end].push_back(start);
    }
    for (int i = 1; i < n + 1; i++)
        sort(graph[i].begin(), graph[i].end());
    memset(visited, 0, sizeof(visited));
    dfs(v);
    cout << "\n";
    memset(visited, 0, sizeof(visited));
    bfs(v);
}