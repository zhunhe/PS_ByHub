#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> dp(n + 1, n);
    dp[1] = 0;
    for (int i = 1; i < n; i++) {
        dp[i + 1] = min(dp[i + 1], dp[i] + 1);
        if (i * 2 <= n) dp[i * 2] = min(dp[i * 2], dp[i] + 1);
        if (i * 3 <= n) dp[i * 3] = min(dp[i * 3], dp[i] + 1);
    }
    cout << dp[n] << '\n';
}