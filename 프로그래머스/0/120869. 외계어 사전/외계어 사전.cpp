#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> v, vector<string> dic) {
    sort(v.begin(), v.end());
    const string spell = reduce(v.cbegin(), v.cend(), string(""));
    for (auto& s : dic) sort(s.begin(), s.end());
    for (const auto& s : dic) if (s == spell) return 1;
    return 2;
}