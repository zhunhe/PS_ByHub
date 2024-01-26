#include <bits/stdc++.h>
using namespace std;

int cnt[31];

int solution(vector<string> strArr) {
    for (const auto& s : strArr) ++cnt[s.size()];
    return *max_element(cnt, cnt + 31);
}