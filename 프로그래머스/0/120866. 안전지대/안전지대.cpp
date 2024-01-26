#include <bits/stdc++.h>
using namespace std;

const int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int solution(vector<vector<int>> board) {
    for (int y = 0; y < board.size(); y++) {
        for (int x = 0; x < board[0].size(); x++) {
            if (board[y][x] != 1) continue;
            for (int k = 0; k < 8; k++) {
                const int ny = y + dy[k], nx = x + dx[k];
                if (ny < 0 || nx < 0 || ny >= board.size() || nx >= board[0].size()) continue;
                if (board[ny][nx] != 0) continue;
                board[ny][nx] = 2;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < board.size(); i++)
        ans += count(board[i].begin(), board[i].end(), 0);
    return ans;
}