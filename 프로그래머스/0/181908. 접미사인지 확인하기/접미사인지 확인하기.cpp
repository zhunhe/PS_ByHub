#include <bits/stdc++.h>
using namespace std;

int solution(string s, string suffix) {
    if (suffix.size() > s.size())
        return 0;
    return s.substr(s.size() - suffix.size()) == suffix;
}