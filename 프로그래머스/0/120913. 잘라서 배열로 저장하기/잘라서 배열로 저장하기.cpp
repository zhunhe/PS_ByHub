#include <bits/stdc++.h>
using namespace std;

vector<string> solution(string s, int n) {
    vector<string> ans;
    for (int i = 0; i < s.size(); i += n)
        ans.push_back(s.substr(i, n));
    return ans;
}