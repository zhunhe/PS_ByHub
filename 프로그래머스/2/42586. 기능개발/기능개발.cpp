#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> p, vector<int> s) {
    vector<int> v(p.size());
    for (int i = 0; i < v.size(); i++) v[i] = (100 - p[i] + s[i] - 1) / s[i];
    vector<int> ans(1);
    int need = v[0];
    for (int i = 0; i < v.size(); i++) {
        if (v[i] <= need)
            ++ans.back();
        else {
            need = v[i];
            ans.push_back(1);
        }
    }
    return ans;
}