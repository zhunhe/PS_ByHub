#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int T, P, Q;
uint64_t dp[10002];

int main() {
    FASTIO
    cin >> T;
    for (int i = 1; i < T + 1; i++) {
        cin >> P >> Q;
        dp[1] = dp[2] = 1 % Q;
        for (int j = 3; j < P + 1; j++)
            dp[j] = (dp[j - 1] + dp[j - 2]) % Q;
        cout << "Case #" << i << ": " << dp[P] << '\n';
    }
}