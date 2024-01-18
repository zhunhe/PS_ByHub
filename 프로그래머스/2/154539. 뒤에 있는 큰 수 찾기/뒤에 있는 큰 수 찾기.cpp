#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> ans(numbers.size(), -1);
    stack<int> st; st.push(numbers.back());
    for (int i = numbers.size() - 2; i >= 0; i--) {
        while (!st.empty() && numbers[i] >= st.top()) st.pop();
        if (!st.empty() && st.top() > numbers[i]) ans[i] = st.top();
        st.push(numbers[i]);
    }
    return ans;
}