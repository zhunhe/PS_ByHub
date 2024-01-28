#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int ans = 0;
    stack<int> st;
    for (auto move : moves) {
        const int x = move - 1;
        for (int y = 0; y < board.size(); y++) {
            if (!board[y][x]) continue;
            if (st.empty() || board[y][x] != st.top()) {
                st.push(board[y][x]);
            } else {
                st.pop();
                ans += 2;
            }
            board[y][x] = 0;
            break;
        }
    }
    return ans;
}