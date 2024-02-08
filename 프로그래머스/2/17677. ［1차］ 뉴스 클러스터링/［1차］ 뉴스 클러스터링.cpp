#include <bits/stdc++.h>
using namespace std;

int solution(string s1, string s2) {
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    map<string, int> m1, m2;
    for (int i = 1; i < s1.size(); i++)
        if (islower(s1[i - 1]) && islower(s1[i]))
            ++m1[s1.substr(i - 1, 2)];
    for (int i = 1; i < s2.size(); i++)
        if (islower(s2[i - 1]) && islower(s2[i]))
            ++m2[s2.substr(i - 1, 2)];
    int cnt1 = 0, cnt2 = 0;
    for (const auto& [key, val] : m1) cnt1 += val;
    for (const auto& [key, val] : m2) cnt2 += val;
    int n = 0;
    for (const auto& [key, val] : m1)
        if (m2.find(key) != m2.end())
            n += min(val, m2[key]);
    const int u = cnt1 + cnt2 - n;
    if (u == 0)
        return 65536;
    return n * 65536 / u;
}