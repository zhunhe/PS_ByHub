#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

struct Data {
    int pos, cost;

    bool operator<(const Data& rhs) const {
        return cost > rhs.cost;
    }
};

int n, m, from, to, cost, start, goal;
vector<Data> adj[1002];
priority_queue<Data> pq;

int main() {
    FASTIO
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> from >> to >> cost;
        adj[from].push_back({to, cost});
    }
    cin >> start >> goal;
    vector<int> dist(n + 1, 987654321);
    pq.push({start, 0});
    dist[start] = 0;
    while (!pq.empty()) {
        Data now = pq.top(); pq.pop();
        if (now.cost > dist[now.pos]) continue;
        for (Data next : adj[now.pos]) {
            if (now.cost + next.cost >= dist[next.pos]) continue;
            dist[next.pos] = now.cost + next.cost;
            pq.push({next.pos, dist[next.pos]});
        }
    }
    cout << dist[goal];
}