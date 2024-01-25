#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> ans;
    for (const auto& s : strlist) ans.push_back(s.size());
    return ans;
}