#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> order) {
    queue<int> q;
    for (int i = 0; i < order.size(); i++) q.push(i + 1);

    int ans = 0; stack<int> st;
    for (auto num : order) {
        if (!st.empty() && st.top() == num) {
            ++ans;
            st.pop();
            continue;
        }
        while (!q.empty() && q.front() != num) {
            st.push(q.front());
            q.pop();
        }
        if (!q.empty() && q.front() == num) {
            ++ans;
            q.pop();
            continue;
        }
        break;
    }
    return ans;
}