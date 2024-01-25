#include <bits/stdc++.h>
using namespace std;

string solution(string s, int m, int c) {
    string ans = "";
    for (int i = c - 1; i < s.size(); i += m)
        ans += s[i];
    return ans;
}