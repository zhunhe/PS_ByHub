#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> v) {
    auto r = find(v.begin(), v.end(), "r");
    auto l = find(v.begin(), v.end(), "l");
    if (r == l) return {};
    return r < l ? vector<string>(r + 1, v.end()) : vector<string>(v.begin(), l);
}