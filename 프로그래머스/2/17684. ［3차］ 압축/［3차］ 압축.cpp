#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string s) {
    unordered_map<string, int> m;
    for (int i = 0; i < 26; i++) m[string(1, static_cast<char>('A' + i))] = i + 1;

    vector<int> ans;
    const int sLen = s.size();
    int i = 0, mLen = 2, newIdx = 27;
    while (i < sLen) {
        for (int len = mLen; i + len <= sLen || len > 0; len--) {
            const string subS = s.substr(i, len), c = string(1, s[i + len]);
            if (!m[subS]) continue;
            ans.push_back(m[subS]);
            m[subS + c] = newIdx++;
            mLen = max(mLen, len + 1);
            i += len;
            break;
        }
    }
    return ans;
}