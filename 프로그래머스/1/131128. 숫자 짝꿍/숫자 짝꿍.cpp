#include <bits/stdc++.h>
using namespace std;

string solution(string X, string Y) {
    vector<int> cnt1(10), cnt2(10);
    for (auto c : X) ++cnt1[c - '0'];
    for (auto c : Y) ++cnt2[c - '0'];
    string ans = "";
    for (int i = 9; i > 0; i--) ans += string(min(cnt1[i], cnt2[i]), i + '0');
    if (min(cnt1[0], cnt2[0])) ans += ans.empty() ? "0" : string(min(cnt1[0], cnt2[0]), '0');
    if (ans.empty()) ans = "-1";
    return ans;
}