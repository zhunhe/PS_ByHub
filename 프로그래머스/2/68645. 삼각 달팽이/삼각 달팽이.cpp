#include <bits/stdc++.h>
using namespace std;

const int dy[3] = {1, 0, -1};
const int dx[3] = {0, 1, -1};

int b[1001][1001], y, x, dir;

vector<int> solution(int n) {
    const int len = n * (n + 1) / 2;
    for (int i = 1; i <= len; i++) {
        b[y][x] = i;
        const int ny = y + dy[dir], nx = x + dx[dir];
        if (ny < 0 || ny >= n || nx < 0 || nx >= n || b[ny][nx])
            dir = (dir + 1) % 3;
        y += dy[dir], x += dx[dir];
    }

    vector<int> ans;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (b[i][j])
                ans.push_back(b[i][j]);
    return ans;
}