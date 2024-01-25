#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    unordered_map<char, bool> m;
    string ans = "";
    for (auto& c : s) {
        if (m.find(c) == m.end())
            ans += c;
        m[c] = true;
    }
    return ans;
}