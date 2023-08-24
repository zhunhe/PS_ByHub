#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main(){
    FASTIO
    int n; cin >> n;
    vector<int> nums(n);
    for (int& elem : nums) cin >> elem;
    int x; cin >> x;
    sort(nums.begin(), nums.end());
    int left = 0, right = n - 1, answer = 0;
    while (left < right) {
        const int sum = nums[left] + nums[right];
        if (sum == x) {
            answer++;
            left++;
            right--;
        }
        else if (sum < x)
            left++;
        else
            right--;
    }
    cout << answer << '\n';
}