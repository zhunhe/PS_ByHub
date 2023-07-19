#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define INF 987654321

struct Data {
    int pos, cost;

    bool operator<(const Data& rhs) const {
        return cost > rhs.cost;
    }
};

int n, m, x, from, to, cost;
vector<Data> adj[1002];
vector<Data> adj2[1002];
priority_queue<Data> pq;

int main() {
    FASTIO
    cin >> n >> m >> x;
    for (int i = 0; i < m; i++) {
        cin >> from >> to >> cost;
        adj[from].push_back({to, cost});
        adj2[to].push_back({from, cost});
    }
    vector<int> dist(n + 1, INF);
    dist[x] = 0;
    pq.push({x, 0});
    while (!pq.empty()) {
        const Data now = pq.top(); pq.pop();
        if (now.cost > dist[now.pos]) continue;
        for (Data next : adj[now.pos]) {
            if (now.cost + next.cost >= dist[next.pos]) continue;
            dist[next.pos] = now.cost + next.cost;
            pq.push({next.pos, dist[next.pos]});
        }
    }

    vector<int> dist2(n + 1, INF);
    dist2[x] = 0;
    pq.push({x, 0});
    while (!pq.empty()) {
        const Data now = pq.top(); pq.pop();
        if (now.cost > dist2[now.pos]) continue;
        for (Data next : adj2[now.pos]) {
            if (now.cost + next.cost >= dist2[next.pos]) continue;
            dist2[next.pos] = now.cost + next.cost;
            pq.push({next.pos, dist2[next.pos]});
        }
    }

    int answer = 0;
    for (int i = 1; i < n + 1; i++) {
        if (dist[i] == INF || dist2[i] == INF) continue;
        answer = max(answer, dist[i] + dist2[i]);
    }
    cout << answer << '\n';
}