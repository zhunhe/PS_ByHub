#include <bits/stdc++.h>
using namespace std;

const int dy[3] = {1, 0, -1};
const int dx[3] = {0, 1, -1};

vector<int> solution(int n) {
    vector<vector<int>> b(n, vector<int>(n));
    int y = 0, x = 0, dir = 0;
    const int sum = n * (n + 1) >> 1;
    for (int i = 1; i < sum + 1; i++) {
        b[y][x] = i;
        const int ny = y + dy[dir], nx = x + dx[dir];
        if (ny >= n || nx >= n || b[ny][nx]) dir = (dir + 1) % 3;
        y += dy[dir], x += dx[dir];
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i + 1; j++)
            ans.push_back(b[i][j]);
    return ans;
}