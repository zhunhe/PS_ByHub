#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int solution(int n, vector<int> money) {
    vector<int> dp(n + 1);
    for (const auto& num : money) {
        dp[num] += 1;
        for (int i = num; i < n + 1; i++)
            dp[i] = (dp[i] + dp[i - num]) % MOD;
    }
    return dp[n];
}