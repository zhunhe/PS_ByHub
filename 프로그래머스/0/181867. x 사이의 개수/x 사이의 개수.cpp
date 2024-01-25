#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string s) {
    stringstream ss(s);
    vector<int> ans; string tmp;
    while (getline(ss, tmp, 'x'))
        ans.push_back(tmp.size());
    if (s.back() == 'x')
        ans.push_back(0);
    return ans;
}