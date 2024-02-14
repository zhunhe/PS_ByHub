#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int solution(int w, int h, vector<vector<int>> puddles) {
    vector<vector<int>> dp(h + 1, vector<int>(w + 1));
    for (const auto& v : puddles) dp[v[1]][v[0]] = -1;
    dp[1][1] = 1;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            if (dp[i][j] == -1)
                dp[i][j] = 0;
            else
                dp[i][j] += (dp[i - 1][j] + dp[i][j - 1]) % MOD;
        }
    }
    return dp[h][w];
}