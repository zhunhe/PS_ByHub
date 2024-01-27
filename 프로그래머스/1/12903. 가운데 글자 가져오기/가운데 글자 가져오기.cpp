#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    return s.substr((s.size() >> 1) - !(s.size() & 1), 1 + !(s.size() & 1));
}