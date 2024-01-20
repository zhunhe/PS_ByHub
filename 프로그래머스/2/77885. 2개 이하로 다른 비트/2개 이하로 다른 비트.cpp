#include <bits/stdc++.h>
using namespace std;

vector<long long> solution(vector<long long> nums) {
    const int len = nums.size();
    vector<long long> ans;
    for (auto num : nums) {
        if (!(num & 1)) {
            ans.push_back(num + 1);
            continue;
        }
        for (long long i = 1; i < LLONG_MAX; i <<= 1) {
            if (num & i) continue;
            num |= i;
            num ^= (i >> 1);
            ans.push_back(num);
            break;
        }
    }
    return ans;
}