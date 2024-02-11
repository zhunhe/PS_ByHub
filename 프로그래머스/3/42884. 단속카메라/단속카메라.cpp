#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> routes) {
    sort(routes.begin(), routes.end(), [](auto lhs, auto rhs) {
        if (lhs[1] == rhs[1])
            return lhs[0] < rhs[0];
        return lhs[1] < rhs[1];
    });
    int ans = 0, end = -300000;
    for (auto& v : routes) {
        if (v[0] > end) {
            ++ans;
            end = v[1];
        }
    }
    return ans;
}