#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    unordered_map<string, int> m;
    for (int i = 0; i < name.size(); i++) m[name[i]] = yearning[i];
    vector<int> ans;
    for (auto v : photo) {
        const int point = accumulate(v.cbegin(), v.cend(), 0, [&](auto sum, auto s) {
            return sum + m[s];
        });
        ans.push_back(point);
    }
    return ans;
}