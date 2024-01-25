#include <bits/stdc++.h>
using namespace std;

#define COUNT(s, x) count(s.begin(), s.end(), x)

int solution(int order) {
    string s = to_string(order);
    return COUNT(s, '3') + COUNT(s, '6') + COUNT(s, '9');
}