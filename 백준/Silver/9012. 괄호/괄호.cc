#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int cnt = 0;
        for (const auto& c : s) {
            cnt += (c == '(' ? 1 : -1);
            if (cnt < 0) break;
        }
        cout << (cnt == 0 ? "YES\n" : "NO\n");
    }
}