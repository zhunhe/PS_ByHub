#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define LEN 125

int n;
int problem = 1;
int board[LEN + 2][LEN + 2];
int dist[LEN + 2][LEN + 2];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

struct Coor {
    int y, x;
};

int main() {
    FASTIO
    while (true) {
        cin >> n;
        if (n == 0) return 0;
        for (int i = 0; i < n * n; i++) cin >> board[i / n][i % n];
        fill(&dist[0][0], &dist[n - 1][n], 987654321);
        queue<Coor> q;
        dist[0][0] = board[0][0];
        q.push({0, 0});
        while (!q.empty()) {
            const Coor now = q.front(); q.pop();
            for (int k = 0; k < 4; k++) {
                const Coor next = {now.y + dy[k], now.x + dx[k]};
                if (next.y < 0 || next.y >= n || next.x < 0 || next.x >= n) continue;
                if (dist[next.y][next.x] <= dist[now.y][now.x] + board[next.y][next.x]) continue;
                dist[next.y][next.x] = dist[now.y][now.x] + board[next.y][next.x];
                q.push(next);
            }
        }
        cout << "Problem " << problem++ << ": " << dist[n - 1][n - 1] << '\n';
    }
}