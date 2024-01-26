#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> ans;
    for (auto q : quiz) {
        stringstream ss(q);
        string lhs, oper, rhs, eq, ret;
        ss >> lhs >> oper >> rhs >> eq >> ret;
        if (oper == "+" && stoi(lhs) + stoi(rhs) == stoi(ret))
            ans.push_back("O");
        else if (stoi(lhs) - stoi(rhs) == stoi(ret))
            ans.push_back("O");
        else
            ans.push_back("X");
    }
    return ans;
}