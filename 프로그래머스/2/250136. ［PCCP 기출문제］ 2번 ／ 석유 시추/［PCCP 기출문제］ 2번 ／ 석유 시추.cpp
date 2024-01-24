#include <bits/stdc++.h>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

vector<int> amount;

void bfs(vector<vector<int>>& land, int y, int x) {
    const int h = land.size(), w = land[0].size();
    int cnt = 0;
    set<int> pos;
    queue<pair<int, int>> q;
    pos.insert(x);
    q.push({y, x});
    land[y][x] = 0;
    while (!q.empty()) {
        auto [y, x] = q.front(); q.pop();
        ++cnt;
        pos.insert(x);
        for (int k = 0; k < 4; k++) {
            const int ny = y + dy[k], nx = x + dx[k];
            if (ny < 0 || nx < 0 || ny >= h || nx >= w) continue;
            if (land[ny][nx] == 0) continue;
            land[ny][nx] = 0;
            q.push({ny, nx});
        }
    }
    for (int idx : pos)
        amount[idx] += cnt;
}

int solution(vector<vector<int>> land) {
    const int h = land.size(), w = land[0].size();
    amount.resize(w);
    for (int j = 0; j < w; j++) {
        for (int i = 0; i < h; i++) {
            if (land[i][j] == 0) continue;
            bfs(land, i, j);
        }
    }
    return *max_element(amount.begin(), amount.end());
}