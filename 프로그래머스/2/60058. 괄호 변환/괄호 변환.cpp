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
        if (cnt == 0) {
            if (isRightString(s.substr(0, i + 1)))
                return s.substr(0, i + 1) + solution(s.substr(i + 1));
            else
                return "(" + solution(s.substr(i + 1)) + ")" + flip(s.substr(1, i - 1));
        }
    }
    return solution(s);
}