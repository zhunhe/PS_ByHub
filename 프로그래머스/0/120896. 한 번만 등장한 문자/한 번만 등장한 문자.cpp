#include <bits/stdc++.h>
using namespace std;

int cnt[26];

string solution(string s) {
    string ans = "";
    for (auto c : s) ++cnt[c - 'a'];
    for (int i = 0; i < 26; i++) if (cnt[i] == 1) ans += 'a' + i;
    return ans;
}