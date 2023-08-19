#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

struct Data {
    int number, weight;
};

vector<Data> adj[100001];

int main(){
    FASTIO
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    int start, goal; cin >> start >> goal;
    int left = 1, right = 1e9, answer = 0;
    while (left <= right) {
        const int mid = (left + right) / 2;
        vector<bool> visited(n + 1, false);
        queue<int> q;
        visited[start] = true;
        q.push(start);
        while (!q.empty()) {
            const int now = q.front(); q.pop();
            for (const Data next : adj[now]) {
                if (mid > next.weight) continue;
                if (visited[next.number]) continue;
                visited[next.number] = true;
                q.push(next.number);
            }
        }
        if (visited[goal]) {
            left = mid + 1;
            answer = mid;
        } else {
            right = mid - 1;
        }
    }
    cout << answer << '\n';
}