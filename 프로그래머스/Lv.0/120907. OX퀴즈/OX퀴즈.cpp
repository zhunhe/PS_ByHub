#include <bits/stdc++.h>
using namespace std;

bool test(stringstream& ss) {
    int lhs, rhs, result;
    char oper, tmp;
    ss >> lhs >> oper >> rhs >> tmp >> result;
    if (oper == '+')
        return lhs + rhs == result;
    return lhs - rhs == result;
}

vector<string> solution(vector<string> quiz) {
    vector<string> answer;

    for (const string& s: quiz) {
        stringstream ss(s);
        answer.push_back(test(ss) ? "O" : "X");
    }
    return answer;
}