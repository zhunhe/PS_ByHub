#include <bits/stdc++.h>
using namespace std;

bool cmp(const string& lhs, const string& rhs) {
    return lhs + rhs < rhs + lhs;
}

string solution(vector<int> nums) {
    vector<string> v;
    for (int num : nums) v.push_back(to_string(num));
    sort(v.rbegin(), v.rend(), cmp);
    string ans = "";
    for (string s : v) ans += s;
    while (ans.size() > 1 && ans[0] == '0') ans = ans.substr(1);
    return ans;
}