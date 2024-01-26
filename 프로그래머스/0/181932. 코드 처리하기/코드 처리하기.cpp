#include <bits/stdc++.h>
using namespace std;

string solution(string code) {
    string ans = "";
    bool mode = 0;
    for (int i = 0; i < code.size(); i++) {
        if (code[i] == '1') { mode ^= 1; continue; }
        if (mode == (i & 1)) ans += code[i];
    }
    return ans.empty() ? "EMPTY" : ans;
}