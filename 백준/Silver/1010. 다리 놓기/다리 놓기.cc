#include <bits/stdc++.h>
using namespace std;

int cache[31][31];

int combination(int n, int r) {
    if (cache[n][r])
        return cache[n][r];
    if (n == r || r == 0)
        return cache[n][r] = 1;
    return cache[n][r] = combination(n - 1, r - 1) + combination(n - 1, r);
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        cout << combination(max(n, m), min(n, m)) << '\n';
    }
}