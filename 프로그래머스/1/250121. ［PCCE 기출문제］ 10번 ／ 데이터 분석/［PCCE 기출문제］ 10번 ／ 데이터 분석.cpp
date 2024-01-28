#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> m = {
    {"code", 0}, {"date", 1}, {"maximum", 2} , {"remain", 3}
};

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> ans;
    for (const auto& v : data) if (v[m[ext]] < val_ext) ans.push_back(v);
    sort(ans.begin(), ans.end(), [=](auto lhs, auto rhs) {
        return lhs[m[sort_by]] < rhs[m[sort_by]];
    });
    return ans;
}