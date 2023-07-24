#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    FASTIO
    int n;	cin >> n;
    vector<int> wine(n + 1), dp(n + 1);
    for (int i = 1; i < n + 1; i++) cin >> wine[i];
    dp[1] = wine[1];
    dp[2] = wine[1] + wine[2];
    for (int i = 3; i < n + 1; i++) {
        dp[i] = max(dp[i - 3] + wine[i - 1] + wine[i], dp[i - 2] + wine[i]);
        dp[i] = max(dp[i - 1], dp[i]);
    }
    cout << dp[n];
}