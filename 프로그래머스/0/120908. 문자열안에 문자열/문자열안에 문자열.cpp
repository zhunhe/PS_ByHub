#include <bits/stdc++.h>
using namespace std;

int solution(string str1, string str2) {
    return !!(str1.find(str2) == string::npos) + 1;
}