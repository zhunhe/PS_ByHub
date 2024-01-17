#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    stack<int> moved;
    int answer = 0;
    for (int picked : moves) {
        for (int i = 0; i < board.size(); i++) {
            if (board[i][picked - 1] == 0) continue;
            if (!moved.empty() && moved.top() == board[i][picked - 1]) {
                answer += 2;
                moved.pop();
            } else
                moved.push(board[i][picked - 1]);
            board[i][picked - 1] = 0;
            break;
        }
    }
    return answer;
}