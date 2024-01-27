#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    int idx = 0;
    for (auto& c : s) {
        if (c == ' ') { idx = 0; continue; }
        idx & 1 ? c = tolower(c) : c = toupper(c);
        ++idx;
    }
    return s;
}