#include <bits/stdc++.h>
using namespace std;

#define DEC(s)   accumulate(s.begin(), s.end(), 0, [](const auto& sum, const auto& c) { return (sum << 1) + (c == '1'); })

string solution(string s1, string s2) {
    string ans = "";
    for (int n = DEC(s1) + DEC(s2); n > 0; n >>= 1) ans = char((n & 1) + '0') + ans;
    return ans.empty() ? "0" : ans;
}