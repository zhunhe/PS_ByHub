#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> ans(numbers.size(), -1);
    stack<int> stk;
    for (int i = 0; i < numbers.size(); i++) {
        while (!stk.empty() && numbers[stk.top()] < numbers[i])
            ans[stk.top()] = numbers[i], stk.pop();
        stk.push(i);
    }
    return ans;
}