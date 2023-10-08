#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

char board[52][52], after[52][52];
int answer = 0;

void flip(int yStart, int xStart) {
    for (int y = yStart; y < yStart + 3; y++) {
        for (int x = xStart; x < xStart + 3; x++) {
            if (board[y][x] == '0')
                board[y][x] = '1';
            else
                board[y][x] = '0';
        }
    }
}

int main() {
    int n, m; cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> board[i];
    for (int i = 0; i < n; i++) cin >> after[i];
    for (int y = 0; y < n - 2; y++) {
        for (int x = 0; x < m - 2; x++) {
            if (board[y][x] == after[y][x]) continue;
            answer += 1;
            flip(y, x);
        }
    }
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            if (board[y][x] == after[y][x]) continue;
            cout << -1 << '\n';
            return 0;
        }
    }
    cout << answer << '\n';
}