#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    stringstream ss(s);
    int lhs, rhs; char oper;
    ss >> lhs >> oper >> rhs;
    if (oper == '+') return lhs + rhs;
    if (oper == '-') return lhs - rhs;
    return lhs * rhs;
}