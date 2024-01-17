#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    vector<int> moved;
    int answer = 0;
    for (int picked : moves) {
        for (int i = 0; i < board.size(); i++) {
            if (board[i][picked - 1] == 0) continue;
            moved.push_back(board[i][picked - 1]);
            board[i][picked - 1] = 0;
            if (moved.size() > 1 && moved[moved.size() - 1] == moved[moved.size() - 2]) {
                answer += 2;
                moved.pop_back();
                moved.pop_back();
            }
            break;
        }
    }
    return answer;
}