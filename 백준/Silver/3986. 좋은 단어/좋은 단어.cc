#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<string> v(n);
    for (auto& s : v) cin >> s;
    int ans = 0;
    for (const auto& s : v) {
        stack<char> stk;
        for (const auto c : s) {
            if (stk.empty() || stk.top() != c) stk.push(c);
            else stk.pop();
        }
        if (stk.empty()) ++ans;
    }
    cout << ans << '\n';
}