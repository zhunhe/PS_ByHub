#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    return string(s.size() - 4, '*') + s.substr(s.size() - 4);
}