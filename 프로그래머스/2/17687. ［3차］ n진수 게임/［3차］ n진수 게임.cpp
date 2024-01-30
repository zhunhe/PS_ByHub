#include <bits/stdc++.h>
using namespace std;

const string charset = "0123456789ABCDEF";

string solution(int n, int t, int m, int p) {
    string s = "0";
    int number = 1;
    while (s.size() < m * t) {
        int num = number;
        string str = "";
        while (num > 0) {
            str = charset[num % n] + str;
            num /= n;
        }
        ++number;
        s += str;
    }
    string ans = "";
    for (int i = p - 1; ans.size() < t; i += m) ans += s[i];
    return ans;
}