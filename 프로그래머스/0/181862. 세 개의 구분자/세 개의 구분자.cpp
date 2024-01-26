#include <bits/stdc++.h>
using namespace std;

vector<string> solution(string s) {
    s = regex_replace(s, regex("[abc]"), " ");
    stringstream ss(s);
    vector<string> ans;
    while (ss >> s) ans.push_back(s);
    if (ans.empty()) ans.push_back("EMPTY");
    return ans;
}