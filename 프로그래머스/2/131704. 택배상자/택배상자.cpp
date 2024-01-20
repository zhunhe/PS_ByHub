#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> order) {
    int ans = 0; stack<int> st;
    for (int i = 1; i < order.size() + 1; i++) {
        st.push(i);
        while (!st.empty() && order[ans] == st.top()) {
            st.pop();
            ++ans;
        }
    }
    return ans;
}