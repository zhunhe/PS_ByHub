#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums(9);
    for (auto& elem : nums) cin >> elem;
    const int sum = reduce(nums.begin(), nums.end());
    vector<int> ans;
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - nums[i] - nums[j] != 100) continue;
            for (int k = 0; k < 9; k++) {
                if (k == i || k == j) continue;
                ans.push_back(nums[k]);
            }
            break;
        }
        if (ans.size() == 7) break;
    }
    sort(ans.begin(), ans.end());
    for (const auto elem : ans) cout << elem << '\n';
}