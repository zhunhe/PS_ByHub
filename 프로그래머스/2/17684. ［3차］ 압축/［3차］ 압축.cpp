#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string s) {
    map<string, int> m;
    for (int i = 0; i < 26; i++) m[string(1, 'A' + i)] = i + 1;
    vector<int> ans;
    for (int i = 0; i < s.size();) {
        string subS = "";
        while (i < s.size() && m.find(subS + s[i]) != m.end())
            subS += s[i++];
        ans.push_back(m[subS]);
        if (i < s.size()) m[subS + s[i]] = m.size() + 1;
    }
    return ans;
}