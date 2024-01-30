#include <bits/stdc++.h>
using namespace std;

int t, ans;
vector<int> nums;

void dfs(int depth, int sum) {
    if (depth == nums.size()) {
        if (sum == t) ++ans;
        return;
    }
    dfs(depth + 1, sum + nums[depth]);
    dfs(depth + 1, sum - nums[depth]);
}

int solution(vector<int> numbers, int target) {
    nums = numbers;
    t = target;
    dfs(0, 0);
    return ans;
}