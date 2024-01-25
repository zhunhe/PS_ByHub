#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}