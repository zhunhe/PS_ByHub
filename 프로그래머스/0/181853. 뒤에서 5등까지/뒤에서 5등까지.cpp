#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> nums) {
    sort(nums.begin(), nums.end());
    return {nums.begin(), nums.begin() + 5};
}