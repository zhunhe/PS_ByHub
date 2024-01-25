#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> ans;
    for (const auto& str : intStrs)
        if (stoi(str.substr(s, l)) > k)
            ans.push_back(stoi(str.substr(s, l)));
    return ans;
}