#include <bits/stdc++.h>
using namespace std;

string solution(string str, string o, int s) {
    return str.substr(0, s) + o + str.substr(s + o.size());
}