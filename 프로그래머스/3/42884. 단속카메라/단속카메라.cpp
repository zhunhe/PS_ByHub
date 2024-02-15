#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> routes) {
    sort(routes.begin(), routes.end(), [](auto lhs, auto rhs) {
        if (lhs[1] == rhs[1])
            return lhs[0] < lhs[0];
        return lhs[1] < rhs[1];
    });
    int ans = 0, end = -30001;
    for (const auto& v : routes) {
        if (end < v[0]) {
            ++ans;
            end = v[1];
        }
    }
    return ans;
}