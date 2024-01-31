#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> ans(prices.size());
    for (int i = 0; i < ans.size(); i++) ans[i] = ans.size() - 1 - i;
    stack<int> stk;
    for (int i = 0; i < ans.size(); i++) {
        while (!stk.empty() && prices[stk.top()] > prices[i]) {
            ans[stk.top()] = i - stk.top();
            stk.pop();
        }
        stk.push(i);
    }
    return ans;
}