#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    vector<char> st;
    for (const auto& c : s) {
        st.push_back(c);
        while (st.size() > 1 && st[st.size() - 2] == st[st.size() - 1])
            st.pop_back(), st.pop_back();
    }
    return st.empty();
}