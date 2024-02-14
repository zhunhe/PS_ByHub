#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int solution(int w, int h, vector<vector<int>> puddles) {
    vector<vector<long long>> dp(h, vector<long long>(w));
    for (const auto& v : puddles) dp[v[1] - 1][v[0] - 1] = -1;
    for (int i = 0; i < w; i++) {
        if (dp[0][i] == -1) break;
        dp[0][i] = 1;
    }
    for (int i = 0; i < h; i++) {
        if (dp[i][0] == -1) break;
        dp[i][0] = 1;
    }
    for (int i = 1; i < h; i++) {
        for (int j = 1; j < w; j++) {
            if (dp[i][j] == -1) continue;
            if (dp[i - 1][j] != -1) dp[i][j] += dp[i - 1][j] % MOD;
            if (dp[i][j - 1] != -1) dp[i][j] += dp[i][j - 1] % MOD;
            dp[i][j] %= MOD;
        }
    }
    return dp[h - 1][w - 1];
}