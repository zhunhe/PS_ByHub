#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums, int target) {
    int ans = 0;
    int size = 1 << nums.size();

    for (int i = 1; i < size; i++) {
        int tmp = 0;
        for (int j = 0 ; j < nums.size() ; j++)
            i & (1 << j) ? tmp -= nums[j] : tmp += nums[j];
        if (tmp == target) ++ans;
    }
    return ans;
}