#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> targets) {
    int ans = 0, end = -1;
    sort(targets.begin(), targets.end(), [](auto lhs, auto rhs) {
        if (lhs[1] == rhs[1])
            return lhs[0] < rhs[0];
        return lhs[1] < rhs[1];
    });
    for (const auto& v : targets) {
        if (v[0] >= end) {
            ++ans;
            end = v[1];
        }
    }
    return ans;
}