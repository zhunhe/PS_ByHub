#include <bits/stdc++.h>
using namespace std;

string solution(string s, string alp) {
    for (auto& c : s)
        c = c == alp[0] ? toupper(c) : c;
    return s;
}