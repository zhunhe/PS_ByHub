#include <bits/stdc++.h>
using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> ans(n);
    iota(ans.begin(), ans.end(), 1);
    for (auto& num : ans) num *= x;
    return ans;
}