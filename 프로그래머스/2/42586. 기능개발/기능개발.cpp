#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> p, vector<int> s) {
    vector<int> ans; int need = 0;

    for (int i = 0; i < p.size(); i++) {
        const int day = (100 - p[i] + s[i] - 1) / s[i];
        
        if (ans.empty() || day > need) {
            need = day;
            ans.push_back(1);
        } else
            ++ans.back();
    }
    return ans;
}