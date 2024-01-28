#include <bits/stdc++.h>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int solution(vector<vector<string>> board, int y, int x) {
    int ans = 0;
    for (int k = 0; k < 4; k++) {
        const int ny = y + dy[k], nx = x + dx[k];
        if (ny < 0 || nx < 0 || ny >= board.size() || nx >= board[0].size()) continue;
        ans += board[y][x] == board[ny][nx];
    }
    return ans;
}