#include <bits/stdc++.h>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int calDistance(const vector<string>& maps, char from, char to) {
    vector<vector<int>> dist(maps.size(), vector<int>(maps[0].size()));
    queue<pair<int, int>> q;
    for (int i = 0; i < maps.size(); i++) {
        for (int j = 0; j < maps[0].size(); j++) {
            if (maps[i][j] != from) continue;
            q.push({i, j});
            dist[i][j] = 1;
            break;
        }
    }
    while (!q.empty()) {
        const auto [y, x] = q.front(); q.pop();
        if (maps[y][x] == to)
            return dist[y][x] - 1;
        for (int k = 0; k < 4; k++) {
            const int ny = y + dy[k], nx = x + dx[k];
            if (ny < 0 || nx < 0 || ny >= maps.size() || nx >= maps[0].size()) continue;
            if (maps[ny][nx] == 'X') continue;
            if (dist[ny][nx]) continue;
            dist[ny][nx] = dist[y][x] + 1;
            q.push({ny, nx});
        }
    }
    return -1;
}

int solution(vector<string> maps) {
    const int dist1 = calDistance(maps, 'S', 'L');
    if (dist1 == -1) return -1;
    const int dist2 = calDistance(maps, 'L', 'E');
    if (dist2 == -1) return -1;
    return dist1 + dist2;
}