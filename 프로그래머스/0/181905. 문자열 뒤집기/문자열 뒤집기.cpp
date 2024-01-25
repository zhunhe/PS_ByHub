#include <bits/stdc++.h>
using namespace std;

string solution(string str, int s, int e) {
    reverse(str.begin() + s, str.begin() + e + 1);
    return str;
}