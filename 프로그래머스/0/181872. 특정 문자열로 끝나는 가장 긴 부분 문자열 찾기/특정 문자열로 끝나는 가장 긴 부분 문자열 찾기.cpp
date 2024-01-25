#include <bits/stdc++.h>
using namespace std;

string solution(string s, string pat) {
    return s.substr(0, s.rfind(pat) + pat.size());
}