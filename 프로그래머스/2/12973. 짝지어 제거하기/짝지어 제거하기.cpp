#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    stack<char> st;
    for (const auto& c : s)
        st.empty() || st.top() != c ? st.push(c) : st.pop();
    return st.empty();
}