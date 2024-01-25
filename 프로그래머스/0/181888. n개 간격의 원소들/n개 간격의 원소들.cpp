#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> nums, int n) {
    vector<int> ans;
    for (int i = 0; i < nums.size(); i += n)
        ans.push_back(nums[i]);
    return ans;
}