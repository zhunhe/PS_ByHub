#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> prices) {
    stack<int> st;
    vector<int> ans(prices.size());
    for (int i = 0; i < prices.size(); i++) {
        while (!st.empty() && prices[st.top()] > prices[i])
            ans[st.top()] = i - st.top(), st.pop();
        st.push(i);
    }
    while (!st.empty())
        ans[st.top()] = prices.size() - 1 - st.top(), st.pop();
    return ans;
}