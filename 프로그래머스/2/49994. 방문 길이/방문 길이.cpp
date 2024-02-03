#include <bits/stdc++.h>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

unordered_map<char, int> dir = { {'U', 0}, {'R', 1}, {'D', 2}, {'L', 3} };

const int len = 11;

int solution(string dirs) {
    int y = 5, x = 5;
    vector<vector<int>> visited(121, vector<int>(121));
    for (const auto c : dirs) {
        const int ny = y + dy[dir[c]], nx = x + dx[dir[c]];
        if (ny < 0 || nx < 0 || ny >= len || nx >= len) continue;
        visited[ny * len + nx][y * len + x] = 1;
        visited[y * len + x][ny * len + nx] = 1;
        y = ny, x = nx;
    }
    int ans = 0;
    for (const auto& v : visited)
        ans += reduce(v.begin(), v.end());
    return ans >> 1;
}