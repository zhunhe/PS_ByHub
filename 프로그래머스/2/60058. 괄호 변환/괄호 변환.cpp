#include <bits/stdc++.h>
using namespace std;

bool isRightString(string s) {
    int cnt = 0;
    for (char c : s) {
        c == '(' ? ++cnt : --cnt;
        if (cnt < 0) return false;
    }
    return cnt == 0;
}

string flip(string s) {
    for (char& c : s)
        c = c == '(' ? ')' : '(';
    return s;
}

string solution(string s) {
    if (s == "") return "";
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        s[i] == '(' ? ++cnt : --cnt;
        if (cnt != 0) continue;
        string u = s.substr(0, i + 1);
        string v = s.substr(i + 1);
        if (isRightString(u))
            return u + solution(v);
        else
            return "(" + solution(s.substr(i + 1)) + ")" + flip(u.substr(1, u.size() - 2));
    }
    return solution(s);
}