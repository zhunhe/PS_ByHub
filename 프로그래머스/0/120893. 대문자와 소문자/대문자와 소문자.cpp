#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    for (auto& c : s)
        c = isupper(c) ? tolower(c) : toupper(c);
    return s;
}