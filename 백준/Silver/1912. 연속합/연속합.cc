#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> nums(n), dp(n);
    for (auto& elem : nums) cin >> elem;
    dp[0] = nums[0];
    for (int i = 1; i < n; i++) dp[i] = max(dp[i - 1], 0) + nums[i];
    cout << *max_element(dp.begin(), dp.end());
}