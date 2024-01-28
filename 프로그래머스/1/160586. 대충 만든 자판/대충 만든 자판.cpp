#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> ans;
    unordered_map<char, int> m;
    for (auto s : keymap)
        for (int i = 0; i < s.size(); i++)
            m[s[i]] = m.find(s[i]) == m.end() ? i + 1 : min(m[s[i]], i + 1);
    for (auto s : targets) {
        int cnt = 0;
        for (auto c : s) {
            if (m.find(c) == m.end()) {
                cnt = -1;
                break;
            }
            cnt += m[c];
        }
        ans.push_back(cnt);
    }
    return ans;
}