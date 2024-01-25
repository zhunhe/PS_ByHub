#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    unordered_map<string, int> m;
    for (const auto& s : s1) ++m[s];
    int ans = 0;
    for (const auto& s : s2) if (m.find(s) != m.end()) ++ans;
    return ans;
}