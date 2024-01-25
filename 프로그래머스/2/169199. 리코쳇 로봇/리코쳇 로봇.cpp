#include <bits/stdc++.h>
using namespace std;

int visited[101][101];

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

pair<int, int> calculateNext(const vector<string>& board, int y, int x, int dir) {
    while (1) {
        const int ny = y + dy[dir], nx = x + dx[dir];
        if (ny < 0 || nx < 0 || ny >= board.size() || nx >= board[0].size()) break;
        if (board[ny][nx] == 'D') break;
        y = ny, x = nx;
    }
    return {y, x};
}

int solution(vector<string> board) {
    const int h = board.size(), w = board[0].size();
    queue<pair<int, int>> q;
    int ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (board[i][j] != 'R') continue;
            q.push({i, j});
            visited[i][j] = 1;
            break;
        }
    }
    
    while (!q.empty()) {
        auto [y, x] = q.front(); q.pop();
        if (board[y][x] == 'G')
            return visited[y][x] - 1;
        for (int dir = 0; dir < 4; dir++) {
            auto [ny, nx] = calculateNext(board, y, x, dir);
            if (visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
    return -1;
}