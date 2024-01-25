#include <bits/stdc++.h>
using namespace std;

vector<string> solution(string s) {
    stringstream ss(s);
    vector<string> ans;
    while (ss >> s) ans.push_back(s);
    return ans;
}