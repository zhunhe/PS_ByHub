#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string s) {
    vector<int> ans(s.size(), -1), pos(26, -1);
    for (int i = 0; i < s.size(); i++) {
        char alpha = s[i] - 'a';
        if (pos[alpha] != -1)
            ans[i] = i - pos[alpha];
        pos[alpha] = i;
    }
    return ans;
}