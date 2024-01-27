#include <bits/stdc++.h>
using namespace std;

#define COUNT_IF(s, a)   count_if(s.begin(), s.end(), [](auto c) { return c == a || c == (a ^ 1 << 5); })

bool solution(string s) {
    return COUNT_IF(s, 'p') == COUNT_IF(s, 'y');
}