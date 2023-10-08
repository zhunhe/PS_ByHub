#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    FASTIO
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> nums(n);
        for (int& elem : nums) cin >> elem;
        sort(nums.begin(), nums.end());
        vector<int> arr1, arr2;
        for (int i = 0; i < nums.size(); i++) {
            if (i & 1)
                arr2.push_back(nums[i]);
            else
                arr1.push_back(nums[i]);
        }
        int answer = max(abs(arr1[0] - arr2[0]), abs(arr1[arr1.size() - 1] - arr2[arr2.size() - 1]));
        for (int i = 0; i < arr1.size() - 1; i++)
            answer = max(answer, arr1[i + 1] - arr1[i]);
        for (int i = 0; i < arr2.size() - 1; i++)
            answer = max(answer, arr2[i + 1] - arr2[i]);
        cout << answer << '\n';
    }
}