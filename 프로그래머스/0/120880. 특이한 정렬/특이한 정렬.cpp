#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> nums, int n) {
    sort(nums.begin(), nums.end(), [=](int lhs, int rhs) {
        if (abs(n - lhs) == abs(n - rhs))
            return lhs > rhs;
        return abs(n - lhs) < abs(n - rhs);
    });
    return nums;
}