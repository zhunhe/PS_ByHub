#include <vector>
using namespace std;

#define SAFE    0
#define MINE    1
#define DANGER  2

const int dy[8] = {-1, 0, 1, 0, -1, -1, 1, 1};
const int dx[8] = {0, 1, 0, -1, -1, 1, -1, 1};

int solution(vector<vector<int>> board) {
    for (int y = 0; y < board.size(); y++) {
        for (int x = 0; x < board[y].size(); x++) {
            if (board[y][x] != MINE) continue;
            for (int k = 0; k < 8; k++) {
                const int ny = y + dy[k];
                const int nx = x + dx[k];
                if (ny < 0 || nx < 0 || ny >= board.size() || nx >= board[y].size()) continue;
                if (board[ny][nx] == MINE) continue;
                board[ny][nx] = DANGER;
            }
        }
    }
    int answer = 0;
    for (int y = 0; y < board.size(); y++)
        for (int x = 0; x < board[y].size(); x++)
            if (board[y][x] == SAFE)
                answer++;
    return answer;
}