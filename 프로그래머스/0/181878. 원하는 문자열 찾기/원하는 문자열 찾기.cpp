#include <bits/stdc++.h>
using namespace std;

int solution(string s, string pat) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(pat.begin(), pat.end(), pat.begin(), ::tolower);
    return s.find(pat) != string::npos;
}