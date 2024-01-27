#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    string s = to_string(n);
    return accumulate(s.begin(), s.end(), - '0' * s.size());
}