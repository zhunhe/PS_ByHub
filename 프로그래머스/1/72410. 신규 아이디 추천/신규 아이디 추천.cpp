#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    s = regex_replace(s, regex("[^a-z|0-9|\\-|_|.]"), "");
    s = regex_replace(s, regex("[.]+"), ".");
    if (s[0] == '.') s = s.substr(1);
    if (s.back() == '.') s.pop_back();
    if (s.empty()) s = "a";
    if (s.size() >= 16) s = s.substr(0, 15);
    if (s.back() == '.') s.pop_back();
    while (s.size() < 3) s += s.back();
    return s;
}