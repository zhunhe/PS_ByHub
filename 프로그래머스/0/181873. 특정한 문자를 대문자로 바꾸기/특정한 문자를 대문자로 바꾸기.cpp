#include <bits/stdc++.h>
using namespace std;

string solution(string s, string alp) {
    return regex_replace(s, regex(alp), string(1, toupper(alp[0])));
}