#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums, int target) {
    int ans = 0, size = 1 << nums.size();

    for (int i = 0; i < size; i++) {
        int sum = 0;
        for (int j = 0; j < nums.size(); j++)
            i & (1 << j) ? sum -= nums[j] : sum += nums[j];
        if (sum == target) ++ans;
    }
    return ans;
}