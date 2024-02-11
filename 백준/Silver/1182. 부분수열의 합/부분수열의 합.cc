#include <bits/stdc++.h>
using namespace std;

int n, s, ans;
vector<int> nums;

void dfs(int depth, int sum) {
    if (depth == n) {
        ans += (sum == s);
        return;
    }
    dfs(depth + 1, sum);
    dfs(depth + 1, sum + nums[depth]);
}

int main() {
    cin >> n >> s;
    nums.resize(n);
    for (auto& elem : nums) cin >> elem;
    dfs(0, 0);
    cout << ans - (s == 0) << '\n';
}