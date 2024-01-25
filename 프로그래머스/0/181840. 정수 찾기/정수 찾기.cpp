#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums, int n) {
    return !!count(nums.begin(), nums.end(), n);
}