#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> ans;
    for (auto s : strArr)
        if (s.find("ad") == string::npos)
            ans.push_back(s);
    return ans;
}