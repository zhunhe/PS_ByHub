#include <bits/stdc++.h>
using namespace std;

#define COUNT(s, c) count(s.begin(), s.end(), c)

int solution(int n, string s) {
    return n + COUNT(s, 'w') - COUNT(s, 's') + COUNT(s, 'd') * 10 - COUNT(s, 'a') * 10;
}