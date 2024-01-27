#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> ans;
    for (auto v : commands) {
        vector<int> tmp(array.begin() + v[0] - 1, array.begin() + v[1]);
        sort(tmp.begin(), tmp.end());
        ans.push_back(tmp[v[2] - 1]);
    }
    return ans;
}