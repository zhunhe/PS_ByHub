#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums) {
    return min(set<int>(nums.begin(), nums.end()).size(), nums.size() >> 1);
}