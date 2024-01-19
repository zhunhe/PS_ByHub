#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> land) {
    const int h = land.size(), w = land[0].size();
    vector<vector<int>> dp(h, vector<int>(w));
    dp[0] = land[0];
    for (int y = 1; y < h; y++) {
        for (int x = 0; x < w; x++) {
            for (int i = 0; i < w; i++) if (i != x)
                dp[y][x] = max(dp[y][x], dp[y - 1][i]);
            dp[y][x] += land[y][x];
        }
    }
    return *max_element(dp[h-1].begin(), dp[h-1].end());
}