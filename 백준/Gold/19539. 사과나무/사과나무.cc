#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    FASTIO
    int n; cin >> n;
    vector<int> heights(n);
    for (int& elem : heights) cin >> elem;
    const int sum = reduce(heights.begin(), heights.end());
    int twoCount = 0;
    for (const int& elem : heights)
        twoCount += (elem / 2);
    cout << (sum % 3 != 0 || twoCount < sum / 3 ? "NO" : "YES") << '\n';
}