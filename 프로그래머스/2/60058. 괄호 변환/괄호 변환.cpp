#include <bits/stdc++.h>
using namespace std;

bool isRightString(string s) {
    int cnt = 0;
    for (const auto c : s) {
        c == '(' ? ++cnt : --cnt;
        if (cnt < 0) break;
    }
    return cnt == 0;
}

pair<string, string> split(string s) {
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        s[i] == '(' ? ++cnt : --cnt;
        if (cnt == 0)
            return {s.substr(0, i + 1), s.substr(i + 1)};
    }
}

string flip(string s) {
    for (auto& c : s)
        c = c == '(' ? ')' : '(';
    return s;
}

string solution(string p) {
    if (p == "") return "";
    const auto [u, v] = split(p);
    return (isRightString(u))
        ? u + solution(v)
        : "(" + solution(v) + ")" + flip(u.substr(1, u.size() - 2));
}