#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> operations) {
    multiset<int> st;
    for (const auto& s : operations) {
        stringstream ss(s);
        string cmd; int number;
        ss >> cmd >> number;
        if (cmd == "I")
            st.insert(number);
        else if (!st.empty()) {
            if (number == 1)
                st.erase(--st.end());
            else
                st.erase(st.begin());
        }
    }
    if (st.empty()) return {0, 0};
    return {*(--st.end()), *st.begin()};
}