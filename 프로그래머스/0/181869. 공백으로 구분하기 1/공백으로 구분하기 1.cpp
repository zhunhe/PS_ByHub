#include <bits/stdc++.h>
using namespace std;

vector<string> solution(string s) {
    vector<string> ans;
    stringstream ss(s);
    while (ss >> s)
        ans.push_back(s);
    return ans;
}