#include <bits/stdc++.h>
using namespace std;

vector<int> solution(long long n) {
    const string s = to_string(n);
    vector<int> ans(s.rbegin(), s.rend());
    for (auto& num : ans) num -= '0';
    return ans;
}