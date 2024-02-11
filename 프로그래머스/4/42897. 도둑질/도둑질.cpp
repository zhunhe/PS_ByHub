#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> money) {
    // 첫집o
    vector<int> dp(money.size());
    dp[0] = money[0];
    dp[1] = money[1];
    dp[2] = dp[0] + money[2];
    for (int i = 3; i < money.size() - 1; i++) dp[i] = max(dp[i - 2], dp[i - 3]) + money[i];
    int ans = *max_element(dp.begin(), dp.end());
    // 첫집x
    dp.resize(0);
    dp.resize(money.size(), 0);
    dp[0] = 0;
    dp[1] = money[1];
    dp[2] = money[2];
    for (int i = 3; i < money.size(); i++) dp[i] = max(dp[i - 2], dp[i - 3]) + money[i];
    return max(ans, *max_element(dp.begin(), dp.end()));
}