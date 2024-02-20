#include <bits/stdc++.h>
using namespace std;

long long solve(const vector<int>& seq, long long sign) {
    vector<long long> dp(seq.size());
    dp[0] = seq[0] * sign;
    sign *= -1;
    for (int i = 1; i < seq.size(); i++) {
        dp[i] = max(seq[i] * sign, dp[i - 1] + seq[i] * sign);
        sign *= -1;
    }
    return *max_element(dp.begin(), dp.end());
}

long long solution(vector<int> sequence) {
    return max(solve(sequence, 1), solve(sequence, -1));
}