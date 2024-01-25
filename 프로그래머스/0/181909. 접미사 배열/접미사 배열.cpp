#include <bits/stdc++.h>
using namespace std;

vector<string> solution(string s) {
    vector<string> ans;
    for (int i = 0; i < s.size(); i++)
        ans.push_back(s.substr(i));
    sort(ans.begin(), ans.end());
    return ans;
}