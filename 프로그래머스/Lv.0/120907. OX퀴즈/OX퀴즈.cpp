#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;

    for (const string& s: quiz) {
        stringstream ss(s);
        int lhs, rhs, result;
        char oper, tmp;
        ss >> lhs >> oper >> rhs >> tmp >> result;
        if (oper == '+') {
            if (lhs + rhs == result)
                answer.push_back("O");
            else
                answer.push_back("X");
        } else if (oper == '-') {
            if (lhs - rhs == result)
                answer.push_back("O");
            else
                answer.push_back("X");
        }       
    }
    return answer;
}