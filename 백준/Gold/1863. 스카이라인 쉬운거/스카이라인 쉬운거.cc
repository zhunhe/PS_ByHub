#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main(){
    FASTIO
    int n; cin >> n;
    vector<int> height(n + 1);
    stack<int> st;

    int x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        height[i] = y;
    }
    int answer = 0;
    for (int i = 0; i < n + 1; i++) {
        while (!st.empty() && st.top() > height[i]) {
            answer++;
            st.pop();
        }
        if (!st.empty() && st.top() == height[i]) continue;
        st.push(height[i]);
    }
    cout << answer;
}