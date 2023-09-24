#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define INF 987654321

int main() {
    FASTIO
    int n, m; cin >> n >> m;
    vector<int> memory(n), cost(n);
    for (int& elem : memory) cin >> elem;
    for (int& elem : cost) cin >> elem;
    const int sum = accumulate(memory.begin(), memory.end(), 0);
    vector<int> dp(sum + 1);
    for (int i = 0; i < sum + 1; i++) dp[i] = INF;
    dp[0] = 0, dp[memory[0]] = cost[0];
    for (int i = 1; i < n; i++)
        for (int j = sum; j >= memory[i]; j--)
            dp[j] = min(dp[j], dp[j - memory[i]] + cost[i]);
    int answer = dp[m];
    for (int j = m; j < sum + 1; j++)
        answer = min(answer, dp[j]);
    cout << answer << '\n';
}