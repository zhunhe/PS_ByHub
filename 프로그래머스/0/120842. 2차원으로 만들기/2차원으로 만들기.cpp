#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solution(vector<int> nums, int n) {
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size(); i += n)
        ans.push_back({nums.begin() + i, nums.begin() + i + n});
    return ans;
}