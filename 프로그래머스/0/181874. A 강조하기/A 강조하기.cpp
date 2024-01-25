#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    for (auto& c : s)
        c = c == 'a' || c == 'A' ? 'A' : tolower(c);
    return s;
}