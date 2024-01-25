#include <bits/stdc++.h>
using namespace std;

int solution(string s, string prefix) {
    if (prefix.size() > s.size())
        return 0;
    return s.substr(0, prefix.size()) == prefix;
}