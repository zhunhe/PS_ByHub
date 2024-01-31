#include <bits/stdc++.h>
using namespace std;

string solution(vector<int> v) {
    vector<string> ans;
    for (const auto& elem : v) ans.push_back(to_string(elem));
    sort(ans.begin(), ans.end(), [](const auto& lhs, const auto& rhs) { return lhs + rhs > rhs + lhs; });
    if (ans[0] == "0") return "0";
    return accumulate(ans.begin(), ans.end(), string(""));
}