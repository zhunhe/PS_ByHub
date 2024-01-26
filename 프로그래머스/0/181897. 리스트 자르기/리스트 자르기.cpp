#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> v) {
    if (n == 1) return {v.begin(), v.begin() + slicer[1] + 1};
    if (n == 2) return {v.begin() + slicer[0], v.end()};
    if (n == 3) return {v.begin() + slicer[0], v.begin() + slicer[1] + 1};
    vector<int> ans;
    for (int i = slicer[0]; i < slicer[1] + 1; i += slicer[2])
        ans.push_back(v[i]);
    return ans;
}