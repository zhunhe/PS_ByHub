#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int h, int w, vector<vector<int>> queries) {
    vector<int> ans;
    vector<vector<int>> board(h + 1, vector<int>(w + 1));
    int num = 1;
    for (int y = 1; y <= h; y++) for (int x = 1; x <= w; x++) board[y][x] = num++;
    for (auto query : queries) {
        int _min = h * w;
        const int y1 = query[0], x1 = query[1], y2 = query[2], x2 = query[3];
        int tmp = board[y1][x1]; _min = min(_min, tmp);
        for (int y = y1; y < y2; y++) {
            board[y][x1] = board[y + 1][x1];
            _min = min(_min, board[y][x1]);
        }
        for (int x = x1; x < x2; x++) {
            board[y2][x] = board[y2][x + 1];
            _min = min(_min, board[y2][x]);
        }
        for (int y = y2; y > y1; y--) {
            board[y][x2] = board[y - 1][x2];
            _min = min(_min, board[y][x2]);
        }
        for (int x = x2; x > x1 + 1; x--) {
            board[y1][x] = board[y1][x - 1];
            _min = min(_min, board[y1][x]);
        }
        board[y1][x1 + 1] = tmp;
        
        ans.push_back(_min);
    }
    return ans;
}