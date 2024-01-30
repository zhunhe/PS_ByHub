#include <bits/stdc++.h>
using namespace std;

long long solution(int n) {
    vector<long long> dp(n + 1);
    dp[1] = 1, dp[2] = 2;
    for (int i = 3; i < n + 1; i++)
        dp[i] = (dp[i - 2] + dp[i - 1]) % 1234567;
    return dp[n];
}