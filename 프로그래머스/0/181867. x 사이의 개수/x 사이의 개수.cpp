#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string s) {
    vector<int> ans;
    int cnt = 0;
    for (auto c : s) {
        if (c == 'x')
            ans.push_back(cnt), cnt = 0;
        else
            ++cnt;
    }
    ans.push_back(cnt);
    return ans;
}