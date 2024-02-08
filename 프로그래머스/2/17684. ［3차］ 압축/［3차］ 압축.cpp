#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string msg) {
    vector<int> ans;
    map<string, int> m;
    for (int i = 0; i < 26; i++)
        m[string(1, 'A' + i)] = m.size() + 1;
    int pos = 0;
    while (pos < msg.size()) {
        int len = 2;
        for (; len < msg.size() - pos + 1; len++)
            if (m.find(msg.substr(pos, len)) == m.end())
                break;
        ans.push_back(m[msg.substr(pos, len - 1)]);
        m[msg.substr(pos, len)] = m.size() + 1;
        pos += len - 1;
    }
    return ans;
}