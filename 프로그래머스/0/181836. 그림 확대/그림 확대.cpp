#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> ans;
    for (const auto& v : picture) {
        string tmp = "";
        for (const auto& c : v) tmp += string(k, c);
        ans.insert(ans.end(), k, tmp);
    }
    return ans;
}