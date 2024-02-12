#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> dist(n + 1, INT_MAX);
    dist[n] = 0;
    queue<int> q;
    q.push(n);
    while (!q.empty()) {
        const auto now = q.front(); q.pop();
        if (now <= 1) continue;
        if (now % 3 == 0) {
            const int next = now / 3;
            if (dist[next] > dist[now] + 1) {
                dist[next] = dist[now] + 1;
                q.push(next);
            }
        }
        if (!(now & 1)) {
            const int next = now >> 1;
            if (dist[next] > dist[now] + 1) {
                dist[next] = dist[now] + 1;
                q.push(next);
            }
        }
        if (now > 1) {
            const int next = now - 1;
            if (dist[next] > dist[now] + 1) {
                dist[next] = dist[now] + 1;
                q.push(next);
            }
        }
    }
    cout << dist[1] << '\n';
}