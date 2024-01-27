#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums) {
    vector<int> check(10);
    iota(check.begin(), check.end(), 0);
    for (auto num : nums) check[num] = 0;
    return reduce(check.begin(), check.end());
}