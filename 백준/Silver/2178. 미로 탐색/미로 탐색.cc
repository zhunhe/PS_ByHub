#include <bits/stdc++.h>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int main() {
    int h, w; cin >> h >> w;
    vector<vector<int>> v(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            char c; cin >> c;
            v[i][j] = (c == '1');
        }
    }
    queue<pair<int, int>> q;
    q.push({0, 0});
    while (!q.empty()) {
        const auto [y, x] = q.front(); q.pop();
        for (int k = 0; k < 4; k++) {
            const int ny = y + dy[k], nx = x + dx[k];
            if (ny < 0 || nx < 0 || ny >= h || nx >= w) continue;
            if (v[ny][nx] != 1) continue;
            v[ny][nx] = v[y][x] + 1;
            q.push({ny, nx});
        }
    }
    cout << v[h - 1][w - 1] << '\n';
}