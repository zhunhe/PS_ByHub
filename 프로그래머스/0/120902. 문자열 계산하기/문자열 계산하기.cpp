#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    stringstream ss(s);
    int lhs, rhs; char oper;
    ss >> lhs;
    while (ss >> oper >> rhs)
        oper == '+' ? lhs += rhs : lhs -= rhs;
    return lhs;
}