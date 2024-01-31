#include <bits/stdc++.h>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

pair<int, int> calNextCoor(const vector<string>& board, int y, int x, int dir) {
    while (1) {
        const int ny = y + dy[dir], nx = x + dx[dir];
        if (ny < 0 || nx < 0 || ny >= board.size() || nx >= board[0].size()) break;
        if (board[ny][nx] == 'D') break;
        y = ny, x = nx;
    }
    return {y, x};
}

int solution(vector<string> board) {
    vector<vector<int>> visited(board.size(), vector<int>(board[0].size()));
    queue<pair<int, int>> q;
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
            if (board[i][j] != 'R') continue;
            visited[i][j] = 1;
            q.push({i, j});
            break;
        }
    }
    while (!q.empty()) {
        const auto [y, x] = q.front(); q.pop();
        if (board[y][x] == 'G')
            return visited[y][x] - 1;
        for (int k = 0; k < 4; k++) {
            const auto [ny, nx] = calNextCoor(board, y, x, k);
            if (visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
    return -1;
}