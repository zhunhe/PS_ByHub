#include <bits/stdc++.h>
using namespace std;

vector<long long> solution(vector<long long> nums) {
    vector<long long> ans;
    for (auto num : nums) {
        long long i = 1;
        while (num & i) i <<= 1;
        ans.push_back(num + i - (i >> 1));
    }
    return ans;
}