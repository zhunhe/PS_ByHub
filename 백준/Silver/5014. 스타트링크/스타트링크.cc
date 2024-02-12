#include <bits/stdc++.h>
using namespace std;

int main() {
    int f, s, g, u, d; cin >> f >> s >> g >> u >> d;
    vector<int> dist(f + 1, -1);
    queue<int> q;
    q.push(s);
    dist[s] = 0;
    while (!q.empty()) {
        const auto now = q.front(); q.pop();
        if (now == g) {
            cout << dist[now] << '\n';
            return 0;
        }
        for (const auto next : {now + u, now - d}) {
            if (next < 1 || next > f) continue;
            if (dist[next] != -1) continue;
            dist[next] = dist[now] + 1;
            q.push(next);
        }
    }
    cout << "use the stairs\n";
}