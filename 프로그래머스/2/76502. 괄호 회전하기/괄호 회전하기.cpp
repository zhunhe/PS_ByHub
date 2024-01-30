#include <bits/stdc++.h>
using namespace std;

bool isValid(const string& s) {
    unordered_map<char, char> m = { {')', '('}, {'}', '{'}, {']', '['} };
    stack<char> stk;
    for (const auto& c : s) {
        stk.empty() || stk.top() != m[c] ? stk.push(c) : stk.pop();
    }
    return stk.empty();
}

int solution(string s) {
    int ans = isValid(s);
    for (int i = 1; i < s.size(); i++) {
        rotate(s.begin(), s.begin() + 1, s.end());
        if (isValid(s)) ++ans;
    }
    return ans;
}