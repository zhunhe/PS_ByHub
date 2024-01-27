#include <bits/stdc++.h>
using namespace std;

bool solution(int x) {
    string s = to_string(x);
    return !(x % accumulate(s.begin(), s.end(), -'0' * s.size()));
}