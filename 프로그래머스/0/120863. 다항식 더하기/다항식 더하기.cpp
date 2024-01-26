#include <bits/stdc++.h>
using namespace std;

string solution(string polynomial) {
    stringstream ss(polynomial);
    string s; int x = 0, num = 0;
    while (ss >> s) {
        if (s == "+") continue;
        if (s.back() == 'x') {
            if (s.size() == 1)
                ++x;
            else
                x += stoi(s.substr(0, s.size() - 1));
        }
        else
            num += stoi(s);
    }
    string ans = "";
    if (x == 1) ans = "x";
    if (x > 1) ans = to_string(x) + "x";
    if (num == 0) return ans;
    if (!ans.empty()) ans += " + ";
    ans += to_string(num);
    return ans;
}