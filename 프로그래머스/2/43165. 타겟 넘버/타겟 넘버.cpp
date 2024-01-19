#include <bits/stdc++.h>
using namespace std;

vector<int> nums;
int t, len, ans;

void dfs(int sum, int depth) {
    if (depth == len) {
        if (t == sum) ++ans;
        return;
    }
    dfs(sum + nums[depth], depth + 1);
    dfs(sum - nums[depth], depth + 1);
}

int solution(vector<int> numbers, int target) {
    nums = numbers;
    t = target;
    len = numbers.size();
    dfs(0, 0);
    return ans;
}