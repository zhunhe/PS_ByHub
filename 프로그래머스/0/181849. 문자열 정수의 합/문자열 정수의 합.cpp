#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    return accumulate(s.begin(), s.end(), 0) - ('0' * s.size());
}