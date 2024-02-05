#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 1; i < INT_MAX; i++) {
        int l, p, v; cin >> l >> p >> v; if (v == 0) break;
        int ans = 0;
        while (v > 0) {
            ans += min(l, v);
            v -= p;
        }
        printf("Case %d: %d\n", i, ans);
    }
}