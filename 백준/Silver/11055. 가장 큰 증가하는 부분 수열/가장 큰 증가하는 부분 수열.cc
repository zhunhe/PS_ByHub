#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> nums(n), dp(n);
    for (auto& elem : nums) cin >> elem;
    for (int i = 0; i < n; i++) {
        dp[i] = nums[i];
        for (int j = i - 1; j >= 0; j--)
            if (nums[i] > nums[j])
                dp[i] = max(dp[i], dp[j] + nums[i]);
    }
    cout << *max_element(dp.begin(), dp.end()) << '\n';
}