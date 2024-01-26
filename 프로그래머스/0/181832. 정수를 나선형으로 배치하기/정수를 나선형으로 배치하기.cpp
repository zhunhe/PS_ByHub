#include <bits/stdc++.h>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

vector<vector<int>> solution(int n) {
    vector<vector<int>> ans(n, vector<int>(n));
    int dir = 1, y = 0, x = 0;
    for (int i = 1; i < n * n + 1; i++) {
        ans[y][x] = i;
        int ny = y + dy[dir], nx = x + dx[dir];
        if (ny < 0 || nx < 0 || ny >= n || nx >= n || ans[ny][nx]) dir = (dir + 1) % 4;
        y += dy[dir], x += dx[dir];
    }
    return ans;
}