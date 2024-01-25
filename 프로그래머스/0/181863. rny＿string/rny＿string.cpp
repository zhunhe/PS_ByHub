#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    return regex_replace(s, regex("m"), "rn");
}