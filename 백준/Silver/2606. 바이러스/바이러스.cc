#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define MAX 100

int answer, computerCount, graphCount;
vector<int> graph[MAX + 2];
bool visited[MAX + 2];
const int dy[8] = {-1, 0, 1, 0, -1, 1, 1, -1};
const int dx[8] = {0, 1, 0, -1, 1, 1, -1, -1};

void dfs(int now) {
    if (visited[now]) return;
    visited[now] = true;
    answer += 1;
    for (int next: graph[now]) {
        dfs(next);
    }
}

int main() {
    FASTIO
    cin >> computerCount >> graphCount;
    for (int i = 0; i < graphCount; i++) {
        int from, to; cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }
    dfs(1);
    cout << answer - 1;
}