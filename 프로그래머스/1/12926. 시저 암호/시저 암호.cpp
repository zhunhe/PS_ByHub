#include <bits/stdc++.h>
using namespace std;

string solution(string s, int n) {
    for (auto& c : s) {
        if (c == ' ') continue;
        c += n - ((c <= 'z' && c + n > 'z') || (c <= 'Z' && c + n > 'Z') ? 26 : 0);
    }
    return s;
}