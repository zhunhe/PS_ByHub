/*
 * DFS와 BFS
 * https://www.acmicpc.net/problem/1260
 */

#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

bool dvisited[1001];
bool bvisited[1001];
vector<vector<int>> graph(1001);

void dfs(int now) {
	for (int next : graph[now]) {
		if (dvisited[next]) continue;
		dvisited[next] = true;
        printf("%d ", next);
		dfs(next);
	}
}

void bfs(int now) {
	queue<int> q;
	bvisited[now] = true;
    printf("%d ", now);
	q.push(now);
	while (!q.empty()) {
		int now = q.front(); q.pop();
		for (int next : graph[now]) {
			if (bvisited[next]) continue;
			bvisited[next] = true;
            printf("%d ", next);
			q.push(next);
		}
	}
}

int main() {
	int n, m, v, a, b;
	scanf("%d %d %d", &n, &m, &v);
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for (int i = 1; i <= n; i++)
		sort(graph[i].begin(), graph[i].end());
	dvisited[v] = true;
    printf("%d ", v);
	dfs(v);
    printf("\n");
	bfs(v);
}