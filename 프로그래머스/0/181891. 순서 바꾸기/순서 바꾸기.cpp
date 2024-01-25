#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> nums, int n) {
    n %= nums.size();
    rotate(nums.begin(), nums.begin() + n, nums.end());
    return nums;
}