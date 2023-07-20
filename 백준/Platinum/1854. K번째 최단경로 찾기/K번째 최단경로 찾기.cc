#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

struct Data {
    int pos, cost;

    bool operator<(const Data& rhs) const {
        return cost > rhs.cost;
    }
};

priority_queue<int> dist[1002];
priority_queue<Data> pq;
vector<Data> adj[1002];

int main() {
    FASTIO
    int n, m, k; cin >> n >> m >> k;
    for (int i = 0; i < m; i++) {
        int from, to, cost; cin >> from >> to >> cost;
        adj[from].push_back({to, cost});
    }
    dist[1].push(0);
    pq.push({1, 0});
    while (!pq.empty()) {
        const Data now = pq.top(); pq.pop();
        for (Data next : adj[now.pos]) {
            if (dist[next.pos].size() < k || dist[next.pos].top() > now.cost + next.cost) {
                dist[next.pos].push(now.cost + next.cost);
                pq.push({next.pos, now.cost + next.cost});
                if (dist[next.pos].size() > k) dist[next.pos].pop();
            }
        }
    }
    for (int i = 1; i < n + 1; i++) cout << (dist[i].size() < k ? -1 : dist[i].top()) << '\n';
}