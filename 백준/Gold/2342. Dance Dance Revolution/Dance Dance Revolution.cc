#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define INF 987654321

vector<int> steps;
int dp[5][5][100002];

int energy(int pos, int des) {
    const int num = max(pos - des, des - pos);
    if (pos == 0) return 2;
    if (num == 0) return 1;
    if (num == 1 || num == 3) return 3;
    return 4;
}

int solve(int left, int right, int count) {
    if (count == steps.size()) return 0;
    if (dp[left][right][count] != -1) return dp[left][right][count];
    dp[left][right][count] = min(
        solve(steps[count], right, count + 1) + energy(left, steps[count]),
        solve(left, steps[count], count + 1) + energy(right, steps[count]));
    return dp[left][right][count];
}

int main() {
    FASTIO
    while (true) {
        int step; cin >> step;
        if (step == 0) break;
        steps.push_back(step);
    }
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            for (int k = 0; k < steps.size(); k++)
                dp[i][j][k] = -1;
    cout << solve(0, 0, 0) << '\n';
}