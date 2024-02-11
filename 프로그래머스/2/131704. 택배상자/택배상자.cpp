#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> order) {
    int ans = 0;
    stack<int> stk;
    for (int i = 1; i < order.size() + 1; i++) {
        stk.push(i);
        while (!stk.empty() && stk.top() == order[ans]) {
            stk.pop();
            ++ans;
        }
    }
    return ans;
}