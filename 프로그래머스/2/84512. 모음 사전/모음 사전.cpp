#include <bits/stdc++.h>
using namespace std;

int ans;
const string charset = "AEIOU";
string w;
bool found;

void dfs(string s) {
    if (found) return;
    if (s == w) {
        found = true;
        return;
    }
    ++ans;
    if (s.size() == 5) return;
    for (int i = 0; i < 5; i++) {
        dfs(s + charset[i]);
    }
}

int solution(string word) {
    w = word;
    dfs("");
    return ans;
}