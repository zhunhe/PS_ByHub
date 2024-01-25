#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> ans;
    for (auto v : intervals)
        ans.insert(ans.end(), arr.begin() + v[0], arr.begin() + v[1] + 1);
    return ans;
}