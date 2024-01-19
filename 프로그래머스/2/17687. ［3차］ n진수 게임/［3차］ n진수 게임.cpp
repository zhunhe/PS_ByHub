#include <bits/stdc++.h>
using namespace std;

string charset = "0123456789ABCDEF";

string toString(int num, int base) {
    if (num == 0) return "0";

    string s = "";
    while (num > 0) {
        s = charset[num % base] + s;
        num /= base;
    }
    return s;
}

string solution(int n, int t, int m, int p) {
    string ans = "", s = "";
    for (int i = 0; s.size() < t * m * 2; i++) s += toString(i, n);
    for (int i = p - 1; ans.size() < t; i += m) ans += s[i];
    return ans;
}