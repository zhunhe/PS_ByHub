#include <bits/stdc++.h>
using namespace std;

int solution(int m, int n, vector<string> board) {
    int ans = 0;
    bool continued = true;
    while (continued) {
        continued = false;
        vector<vector<bool>> visited(m, vector<bool>(n));
        for (int i = 0; i < m - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (board[i][j] == ' ') continue;
                if (board[i][j] != board[i][j + 1]) continue;
                if (board[i][j] != board[i + 1][j]) continue;
                if (board[i][j] != board[i + 1][j + 1]) continue;
                visited[i][j] = visited[i][j + 1] = visited[i + 1][j] = visited[i + 1][j + 1] = true;
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!visited[i][j]) continue;
                continued = true;
                ++ans;
                board[i][j] = ' ';
            }
        }
        for (int j = 0; j < n; j++) {
            stack<char> stk;
            for (int i = 0; i < m; i++) {
                if (board[i][j] == ' ') continue;
                stk.push(board[i][j]);
                board[i][j] = ' ';
            }
            int i = m - 1;
            while (!stk.empty()) {
                board[i--][j] = stk.top();
                stk.pop();
            }
        }
    }
    return ans;
}