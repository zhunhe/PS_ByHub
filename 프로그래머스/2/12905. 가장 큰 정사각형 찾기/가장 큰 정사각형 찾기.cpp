#include <bits/stdc++.h>
using namespace std;

int bsq[1002][1002];
int b[1002][1002];

int solution(vector<vector<int>> board) {
    for (int i = 0; i < board.size(); i++)
        for (int j = 0; j < board[0].size(); j++)
            b[i + 1][j + 1] = board[i][j];

    const int h = board.size() + 1, w = board[0].size() + 1;
    int ans = 0;
    for (int i = 1; i < h; i++) {
        for (int j = 1; j < w; j++) {
            if (b[i][j] == 0) continue;
            bsq[i][j] = min({bsq[i-1][j-1], bsq[i-1][j], bsq[i][j-1]}) + 1;
            ans = max(ans, bsq[i][j] * bsq[i][j]);
        }
    }
    return ans;
}