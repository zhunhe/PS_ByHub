#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> sticker) {
    vector<int> dp(sticker.size());
    dp[0] = sticker[0];
    dp[1] = sticker[1];
    dp[2] = sticker[0] + sticker[2];
    for (int i = 3; i < sticker.size() - 1; i++)
        dp[i] = sticker[i] + max(dp[i - 2], dp[i - 3]);
    const int ans = *max_element(dp.begin(), dp.end());
    dp[0] = 0;
    dp[1] = sticker[1];
    dp[2] = sticker[2];
    for (int i = 3; i < sticker.size(); i++)
        dp[i] = sticker[i] + max(dp[i - 2], dp[i - 3]);
    return max(ans, *max_element(dp.begin(), dp.end()));
}