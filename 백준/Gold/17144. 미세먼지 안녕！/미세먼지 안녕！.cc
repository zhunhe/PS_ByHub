#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int main() {
    FASTIO
    int r, c, t; cin >> r >> c >> t;
    vector<vector<int>> board(r, vector<int>(c)), tmpBoard(r, vector<int>(c));
    int cleaner_y = 0;
    for (int y = 0; y < r; y++) {
        for (int x = 0; x < c; x++) {
            cin >> board[y][x];
            if (board[y][x] == -1 && cleaner_y == 0)
                cleaner_y = y;
        }
    }
    while (t--) {
        // 네 방향 확산
        for (int y = 0; y < r; y++) {
            for (int x = 0; x < c; x++) {
                if (board[y][x] <= 0) continue;
                tmpBoard[y][x] += board[y][x];
                const int dividedByFive = board[y][x] / 5;
                for (int k = 0; k < 4; k++) {
                    const int ny = y + dy[k], nx = x + dx[k];
                    if (ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
                    if (board[ny][nx] == -1) continue;
                    tmpBoard[y][x] -= dividedByFive;
                    tmpBoard[ny][nx] += dividedByFive;
                }
            }
        }
        tmpBoard[cleaner_y][0] = -1;
        tmpBoard[cleaner_y + 1][0] = -1;
        // 옮김
        board = tmpBoard;
        // 임시보드 클리어
        for (int y = 0; y < r; y++)
            for (int x = 0; x < c; x++)
                tmpBoard[y][x] = 0;
        // 공기청정기 흡입
        // 위쪽 반시계
        for (int y = cleaner_y - 1; y > 0; y--)
            board[y][0] = board[y - 1][0];
        for (int x = 0; x < c - 1; x++)
            board[0][x] = board[0][x + 1];
        for (int y = 0; y < cleaner_y; y++)
            board[y][c - 1] = board[y + 1][c - 1];
        for (int x = c - 1; x > 1; x--)
            board[cleaner_y][x] = board[cleaner_y][x - 1];
        board[cleaner_y][1] = 0;
        // 아래쪽 시계
        for (int y = cleaner_y + 2; y < r - 1; y++)
            board[y][0] = board[y + 1][0];
        for (int x = 0; x < c - 1; x++)
            board[r - 1][x] = board[r - 1][x + 1];
        for (int y = r - 1; y > cleaner_y + 1; y--)
            board[y][c - 1] = board[y - 1][c - 1];
        for (int x = c - 1; x > 1; x--)
            board[cleaner_y + 1][x] = board[cleaner_y + 1][x - 1];
        board[cleaner_y + 1][1] = 0;
    }
    int answer = 0;
    for (int y = 0; y < r; y++)
        for (int x = 0; x < c; x++)
            if (board[y][x] > 0)
                answer += board[y][x];
    cout << answer << '\n';
}