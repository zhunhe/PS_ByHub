#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> board) {
    int ans = 0;
    vector<vector<int>> dp(board.size() + 1, vector<int>(board[0].size() + 1));
    for (int i = 0; i < board.size(); i++)
        for (int j = 0; j < board[0].size(); j++)
            dp[i + 1][j + 1] = board[i][j];
    for (int i = 1; i < dp.size(); i++) {
        for (int j = 1; j < dp[0].size(); j++) {
            if (dp[i][j] == 0) continue;
            dp[i][j] = min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}) + 1;
            ans = max(ans, dp[i][j]);
        }
    }
    return ans * ans;
}