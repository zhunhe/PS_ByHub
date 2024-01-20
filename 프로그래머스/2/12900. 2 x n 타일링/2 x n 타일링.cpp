#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    vector<int> dp(n + 1);
    for (int i = 1; i < 4; i++) dp[i] = i;
    for (int i = 4; i < n + 1; i++) dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
    return dp[n];
}