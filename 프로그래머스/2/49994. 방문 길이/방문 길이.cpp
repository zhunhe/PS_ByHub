#include <bits/stdc++.h>
using namespace std;

const int len = 11;

bool visited[121][121];
unordered_map<char, int> dir = {{'U', 0}, {'R', 1}, {'D', 2}, {'L', 3}};

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int solution(string s) {
    int y = 5, x = 5, ans = 0;
    for (auto c : s) {
        const int ny = y + dy[dir[c]], nx = x + dx[dir[c]];
        if (ny < 0 || nx < 0 || ny >= len || nx >= len) continue;
        if (!visited[y * len + x][ny * len + nx]) ++ans;
        visited[y * len + x][ny * len + nx] = true;
        visited[ny * len + nx][y * len + x] = true;
        y = ny, x = nx;
    }
    return ans;
}