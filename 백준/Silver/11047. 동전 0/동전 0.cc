#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> coins(n);
    for (auto& elem : coins) cin >> elem;
    sort(coins.rbegin(), coins.rend());
    int ans = 0;
    for (const auto coin : coins) {
        if (coin > k) continue;
        ans += k / coin;
        k %= coin;
    }
    cout << ans;
}