#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums) {
    int odd = 0, even = 0;
    for (int i = 0; i < nums.size(); i++)
        i & 1 ? even += nums[i] : odd += nums[i];
    return max(odd, even);
}