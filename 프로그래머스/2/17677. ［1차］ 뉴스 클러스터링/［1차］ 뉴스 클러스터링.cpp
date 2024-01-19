#include <bits/stdc++.h>
using namespace std;

int solution(string s1, string s2) {
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    map<string, int> m1, m2;
    for (int i = 0; i < s1.size() - 1; i++)
        if (isupper(s1[i]) && isupper(s1[i + 1]))
            ++m1[s1.substr(i, 2)];
    for (int i = 0; i < s2.size() - 1; i++)
        if (isupper(s2[i]) && isupper(s2[i + 1]))
            ++m2[s2.substr(i, 2)];
    int inter = 0;
    for (auto& [key, value] : m1)
        if (m2.find(key) != m2.end())
            inter += min(value, m2[key]);
    int _union = 0;
    for (auto& [key, value] : m1) _union += value;
    for (auto& [key, value] : m2) _union += value;
    _union -= inter;
    return _union == 0 ? 65536 : inter * 65536 / _union;
}