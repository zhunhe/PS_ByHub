#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int solution(int n) {
    vector<int> dp(n + 1);
    dp[1] = 1, dp[2] = 2;
    for (int i = 3; i < n + 1; i++) dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
    return dp[n];
}