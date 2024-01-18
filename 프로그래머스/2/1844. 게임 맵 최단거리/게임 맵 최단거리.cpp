#include<bits/stdc++.h>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int solution(vector<vector<int>> maps) {
    const int h = maps.size(), w = maps[0].size();
    queue<pair<int, int>> q;
    q.push({0, 0}); maps[0][0] = 1;
    while (!q.empty()) {
        const int y = q.front().first, x = q.front().second; q.pop();
        for (int k = 0; k < 4; k++) {
            const int ny = y + dy[k], nx = x + dx[k];
            if (ny < 0 || nx < 0 || ny >= h || nx >= w) continue;
            if (maps[ny][nx] != 1) continue;
            maps[ny][nx] = maps[y][x] + 1;
            q.push({ny, nx});
        }
    }
    return maps[h - 1][w - 1] <= 1 ? -1 : maps[h - 1][w - 1];
} 