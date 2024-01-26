#include <bits/stdc++.h>
using namespace std;

string solution(string s1, string s2) {
    const auto num1 = accumulate(s1.begin(), s1.end(), 0, [](const auto& sum, const auto& c) {
        return (sum << 1) + (c == '1');
    });
    const auto num2 = accumulate(s2.begin(), s2.end(), 0, [](const auto& sum, const auto& c) {
        return (sum << 1) + (c == '1');
    });
    int sum = num1 + num2;
    string ans = "";
    while (sum > 0) {
        sum & 1 ? ans = "1" + ans : ans = "0" + ans;
        sum >>= 1;
    }
    return ans.empty() ? "0" : ans;
}