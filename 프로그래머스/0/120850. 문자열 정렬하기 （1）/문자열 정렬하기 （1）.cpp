#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string s) {
    vector<int> ans;
    for (auto c : s)
        if (isdigit(c))
            ans.push_back(c - '0');
    sort(ans.begin(), ans.end());
    return ans;
}