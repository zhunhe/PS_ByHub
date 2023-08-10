#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    FASTIO
    while (1) {
        int N, M; cin >> N >> M;
        if (N == 0 && M == 0)
            return 0;
        int answer = 0, matrix[1002][1002], dp[1002][1002];
        for (int y = 1; y < N + 1; y++) {
            for (int x = 1; x < M + 1; x++) {
                cin >> matrix[y][x];
                dp[y][x] = 0;
            }
        }
        for (int y = 1; y < N + 1; y++) {
            for (int x = 1; x < M + 1; x++) {
                if (matrix[y][x] == 0) continue;
                int _min = min(dp[y - 1][x - 1], dp[y - 1][x]);
                _min = min(_min, dp[y][x - 1]);
                dp[y][x] = _min + 1;
                answer = max(answer, dp[y][x]);
            }
        }
        cout << answer << '\n';
    }
}