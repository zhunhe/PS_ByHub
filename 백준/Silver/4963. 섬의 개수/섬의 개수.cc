#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define LEN 50
#define EMPTY 0
#define ISLAND 1

int w, h, answer;
int board[LEN + 2][LEN + 2];
bool visited[LEN + 2][LEN + 2];
const int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};

void dfs(int y, int x) {
    if (visited[y][x]) return;
    visited[y][x] = true;
    for (int k = 0; k < 8; k++) {
        const int ny = y + dy[k], nx = x + dx[k];
        if (ny < 0 || nx < 0 || ny >= h || nx >= w) continue;
        if (board[ny][nx] == EMPTY) continue;
        if (visited[ny][nx]) continue;
        dfs(ny, nx);
    }
}

int main() {
    FASTIO
    while (true) {
        cin >> w >> h;
        if (w == 0 && h == 0)
            return 0;
        memset(visited, 0, sizeof(visited));
        answer = 0;
        for (int i = 0; i < h; i++)
            for (int j = 0; j < w; j++)
                cin >> board[i][j];
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (board[i][j] == EMPTY) continue;
                if (visited[i][j]) continue;
                answer += 1;
                dfs(i, j);
            }
        }
        cout << answer << '\n';
    }
}