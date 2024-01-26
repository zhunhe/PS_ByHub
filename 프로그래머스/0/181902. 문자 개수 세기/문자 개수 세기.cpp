#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string s) {
    vector<int> ans(52);
    for (const auto& c : s) ++ans[c - (c & 32 ? 71 : 65)];
    return ans;
}