#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> prices) {
    const int len = prices.size();
    vector<int> ans(len);
    for (int i = 0; i < len; i++) ans[i] = len - 1 - i;
    stack<int> st;
    for (int i = 0; i < len; i++) {
        while (!st.empty() && prices[st.top()] > prices[i])
            ans[st.top()] = i - st.top(), st.pop();
        st.push(i);
    }
    return ans;
}