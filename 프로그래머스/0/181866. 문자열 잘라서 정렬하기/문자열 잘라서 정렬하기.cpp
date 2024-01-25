#include <bits/stdc++.h>
using namespace std;

vector<string> solution(string s) {
    s = regex_replace(s, regex("x"), " ");
    stringstream ss(s);
    vector<string> ans;
    while (ss >> s)
        ans.push_back(s);
    sort(ans.begin(), ans.end());
    return ans;
}