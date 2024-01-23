#include <bits/stdc++.h>
using namespace std;

struct coordinate {
    int y, x;
};

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int calculateDistance(const vector<string>& maps, coordinate from, coordinate to) {
    const int h = maps.size(), w = maps[0].size();
    vector<vector<int>> dist(h, vector<int>(w));
    queue<coordinate> q;
    q.push(from);
    dist[from.y][from.x] = 1;
    while (!q.empty()) {
        auto now = q.front(); q.pop();
        if (now.y == to.y && now.x == to.x)
            return dist[to.y][to.x] - 1;
        for (int k = 0; k < 4; k++) {
            const int ny = now.y + dy[k], nx = now.x + dx[k];
            if (ny < 0 || nx < 0 || ny >= h || nx >= w) continue;
            if (maps[ny][nx] == 'X') continue;
            if (dist[ny][nx]) continue;
            dist[ny][nx] = dist[now.y][now.x] + 1;
            q.push({ny, nx});
        }
    }
    return -1;
}

int solution(vector<string> maps) {
    coordinate start, lever, goal;
    for (int i = 0; i < maps.size(); i++) {
        for (int j = 0; j < maps[0].size(); j++) {
            if (maps[i][j] == 'S') start.y = i, start.x = j;
            if (maps[i][j] == 'L') lever.y = i, lever.x = j;
            if (maps[i][j] == 'E') goal.y = i, goal.x = j;
        }
    }
    const int startToLever = calculateDistance(maps, start, lever);
    if (startToLever == -1)
        return -1;
    const int leverToGoal = calculateDistance(maps, lever, goal);
    if (leverToGoal == -1)
        return -1;
    return startToLever + leverToGoal;
}